/*
 * Copyright (c) 2012, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Willow Garage, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef MYVIZ_H
#define MYVIZ_H

#include "mongodb_store/message_store.h"
#include <QWidget>

namespace rviz
{
class Display;
class RenderPanel;
class VisualizationManager;
}

// BEGIN_TUTORIAL
// Class "MyViz" implements the top level widget for this example.
class MyViz: public QWidget
{
Q_OBJECT
public:
  MyViz(QWidget* parent = 0, const QString& message_type = "", const QString &message_id = "",
        const QString& frame_id = "", const QString& topic = "",
        const QString &collection_name = "", const QString &database_name = "");
  virtual ~MyViz();
  static void show_visualizer(const QString &message_type, const QString &message_id,
                              const QString &frame_id, const QString &topic,
                              const QString &collection_name, const QString &database_name);

private Q_SLOTS:
  void setThickness( int thickness_percent );
  void setCellSize( int cell_size_percent );

private:
  QString collection_name_;
  QString database_name_;
  rviz::VisualizationManager* manager_;
  rviz::RenderPanel* render_panel_;
  rviz::Display* grid_;
  rviz::Display* message_;
  void cast_and_publish_message(const QString& message_id, const QString& topic, const QString& message_type);
  template <typename MsgType>
  bool publish_message(const QString& id, const QString& topic)
  {
      ros::NodeHandle nh("~");
      //Create object which does the work for us.
      mongodb_store::MessageStoreProxy messageStore(nh, collection_name_.toStdString(), database_name_.toStdString());
      std::vector< boost::shared_ptr<MsgType> > results;
      messageStore.queryID<MsgType>(id.toStdString(), results);
      if (results.empty()) {
          std::cout << "Did not find any point clouds with this ID" << std::endl;
          return false;
      }
      ros::Publisher pub = nh.advertise<MsgType>(topic.toStdString(), 1, true);
      pub.publish(*results[0]);
      ros::spinOnce();
      pub.publish(*results[0]);
      ros::spinOnce();
      return true;
  }
};
// END_TUTORIAL
#endif // MYVIZ_H
