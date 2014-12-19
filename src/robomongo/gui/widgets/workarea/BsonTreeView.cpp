#include "robomongo/gui/widgets/workarea/BsonTreeView.h"

#include <QHeaderView>
#include <QAction>
#include <QMenu>
#include <QKeyEvent>

#include "robomongo/gui/widgets/workarea/BsonTreeItem.h"

#include "robomongo/gui/GuiRegistry.h"
#include "robomongo/core/utils/QtUtils.h"

#include "robomongo/gui/rviz/myviz.h"

namespace Robomongo
{
    BsonTreeView::BsonTreeView(MongoShell *shell, const MongoQueryInfo &queryInfo, QWidget *parent) 
        : BaseClass(parent),_notifier(this,shell,queryInfo)
    {
#if defined(Q_OS_MAC)
        setAttribute(Qt::WA_MacShowFocusRect, false);
#endif
        GuiRegistry::instance().setAlternatingColor(this);
        setSelectionMode(QAbstractItemView::ExtendedSelection);
        setSelectionBehavior(QAbstractItemView::SelectRows);
        setContextMenuPolicy(Qt::CustomContextMenu);
        VERIFY(connect(this, SIGNAL(customContextMenuRequested(const QPoint&)), this, SLOT(showContextMenu(const QPoint&))));

        _expandRecursive = new QAction("Expand Recursively", this);
        VERIFY(connect(_expandRecursive, SIGNAL(triggered()), SLOT(onExpandRecursive())));
        
        _collapseRecursive = new QAction(tr("Collapse Recursively"), this);
        VERIFY(connect(_collapseRecursive, SIGNAL(triggered()), SLOT(onCollapseRecursive())));

        _showRosMessage = new QAction(tr("Show ROS Message"), this);
        VERIFY(connect(_showRosMessage, SIGNAL(triggered()), SLOT(onShowRosMessage())));

        setStyleSheet("QTreeView { border-left: 1px solid #c7c5c4; border-top: 1px solid #c7c5c4; }");
#if (QT_VERSION >= QT_VERSION_CHECK(5, 0, 0))
        header()->setSectionResizeMode(QHeaderView::Interactive);
#endif
    }

    void BsonTreeView::showContextMenu(const QPoint &point)
    {        
        QPoint menuPoint = mapToGlobal(point);
        menuPoint.setY(menuPoint.y() + header()->height());

        QModelIndexList indexes = selectedIndexes();
        if (detail::isMultiSelection(indexes)) {
            QMenu menu(this);

            menu.addAction(_expandRecursive);
            menu.addAction(_collapseRecursive);
            menu.addAction(_showRosMessage);
            menu.addSeparator();
            
            _notifier.initMultiSelectionMenu(&menu);
            menu.exec(menuPoint);
        }
        else {

            QModelIndex selectedInd = selectedIndex();
            BsonTreeItem *documentItem = QtUtils::item<BsonTreeItem*>(selectedInd);

            QMenu menu(this);
            bool isSimple = false;
            if (documentItem) {
                isSimple = detail::isSimpleType(documentItem);
                if (detail::isDocumentType(documentItem)) {
                    menu.addAction(_expandRecursive);
                    menu.addAction(_collapseRecursive);
                    menu.addAction(_showRosMessage);
                    menu.addSeparator();
                }
            }

            _notifier.initMenu(&menu,documentItem);
            menu.exec(menuPoint);
        }
    }

    void BsonTreeView::resizeEvent(QResizeEvent *event)
    {
        BaseClass::resizeEvent(event);
        header()->resizeSections(QHeaderView::Stretch);
    }

    void BsonTreeView::keyPressEvent(QKeyEvent *event)
    {
        if (event->key() == Qt::Key_Delete) {
            _notifier.onDeleteDocuments();
        }
        return BaseClass::keyPressEvent(event);
    }

    void BsonTreeView::expandNode(const QModelIndex &index)
    {
        if (index.isValid()) {
            BaseClass::expand(index);
            BsonTreeItem *item = QtUtils::item<BsonTreeItem*>(index);
            for (unsigned i = 0; i < item->childrenCount(); ++i) {
                BsonTreeItem *tritem = item->child(i);
                if (tritem && detail::isDocumentType(tritem)) {
                    expandNode(model()->index(i, 0, index));
                }
            }
        }
    }
    
    void BsonTreeView::collapseNode(const QModelIndex &index)
    {
        if (index.isValid()) {
            BaseClass::collapse(index);
            BsonTreeItem *item = QtUtils::item<BsonTreeItem*>(index);
            for (unsigned i = 0; i < item->childrenCount(); ++i) {
                BsonTreeItem *tritem = item->child(i);
                if (tritem && detail::isDocumentType(tritem)) {
                    collapseNode(model()->index(i, 0, index));
                }
            }
        }
    }

    void BsonTreeView::onExpandRecursive()
    {
        QModelIndexList indexes = selectedIndexes();
        if (detail::isMultiSelection(indexes)) {
            for (int i=0; i<indexes.count(); ++i) 
                expandNode(indexes[i]);
        } else {
            expandNode(selectedIndex());
        }
    }

    void BsonTreeView::onCollapseRecursive()
    {
        QModelIndexList indexes = selectedIndexes();
        if (detail::isMultiSelection(indexes)) {
            for (int i=0; i<indexes.count(); ++i) 
                collapseNode(indexes[i]);
        } else {
            collapseNode(selectedIndex());
        }
    }

    void BsonTreeView::onShowRosMessage()
    {
        QModelIndex index = selectedIndex();
        BsonTreeItem* item = QtUtils::item<BsonTreeItem*>(index);
        BsonTreeItem *idItem = item->childByKey("_id");
        QString idValue;
        if (idItem) {
            idValue = idItem->value();
        }
        else {
            std::cout << "Could not find _id entry" << std::endl;
            return;
        }

        std::cout << "Got object ID: " << std::endl;
        std::cout << idValue.toStdString() << std::endl;

        /*QRegExp regexp("\\\"(.*)\\\")");
        int pos = regexp.indexIn(idValue);
        if (pos < 0) {
            std::cout << "Not a valid Object id" << std::endl;
        }
        QString parsed = regexp.cap(0);*/

        int first = idValue.indexOf("\"");
        int second = idValue.indexOf("\"", first + 1);
        QString parsed = idValue.mid(first+1, second-first-1);
        std::cout << parsed.toStdString() << std::endl;

        MyViz::show_visualizer("sensor_msgs/PointCloud2", parsed);
    }

    /**
     * @returns selected BsonTreeItem, or NULL otherwise
     */
    QModelIndex BsonTreeView::selectedIndex() const
    {
        QModelIndexList indexes = detail::uniqueRows(selectionModel()->selectedRows());
        int count = indexes.count();

        if (indexes.count() != 1)
            return QModelIndex();

        return indexes[0];
    }

    QModelIndexList BsonTreeView::selectedIndexes() const
    {
        return detail::uniqueRows(selectionModel()->selectedRows(), true);
    }
}
