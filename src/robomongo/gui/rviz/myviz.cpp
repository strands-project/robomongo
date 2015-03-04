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

#include <QSlider>
#include <QLabel>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QApplication>
#include <QMessageBox>

#include "rviz/visualization_manager.h"
#include "rviz/render_panel.h"
#include "rviz/display.h"

#include <ros/ros.h>

#include <sensor_msgs/Image.h>
#include <nav_msgs/GridCells.h>
#include <visualization_msgs/InteractiveMarker.h>
#include <sensor_msgs/LaserScan.h>
#include <nav_msgs/OccupancyGrid.h> // this is actually rviz/Map
#include <visualization_msgs/Marker.h>
#include <visualization_msgs/MarkerArray.h>
#include <nav_msgs/Path.h>
#include <geometry_msgs/PointStamped.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PoseArray.h>
#include <sensor_msgs/PointCloud.h>
#include <sensor_msgs/PointCloud2.h>
#include <geometry_msgs/Polygon.h>
#include <sensor_msgs/Range.h>

#include "myviz.h"

// BEGIN_TUTORIAL
// Constructor for MyViz.  This does most of the work of the class.
MyViz::MyViz(QWidget* parent, const QString& message_type, const QString& message_id,
             const QString& frame_id, const QString& topic,
             const QString &collection_name, const QString &database_name)
  : QWidget( parent ), collection_name_(collection_name), database_name_(database_name)
{
  /*// Construct and lay out labels and slider controls.
  QLabel* thickness_label = new QLabel( "Line Thickness" );
  QSlider* thickness_slider = new QSlider( Qt::Horizontal );
  thickness_slider->setMinimum( 1 );
  thickness_slider->setMaximum( 100 );
  QLabel* cell_size_label = new QLabel( "Cell Size" );
  QSlider* cell_size_slider = new QSlider( Qt::Horizontal );
  cell_size_slider->setMinimum( 1 );
  cell_size_slider->setMaximum( 100 );
  QGridLayout* controls_layout = new QGridLayout();
  controls_layout->addWidget( thickness_label, 0, 0 );
  controls_layout->addWidget( thickness_slider, 0, 1 );
  controls_layout->addWidget( cell_size_label, 1, 0 );
  controls_layout->addWidget( cell_size_slider, 1, 1 );*/

  // Construct and lay out render panel.
  render_panel_ = new rviz::RenderPanel();
  QVBoxLayout* main_layout = new QVBoxLayout;
  //main_layout->addLayout( controls_layout );
  main_layout->addWidget( render_panel_ );

  // Set the top-level layout for this MyViz widget.
  setLayout( main_layout );

  // Make signal/slot connections.
  //connect( thickness_slider, SIGNAL( valueChanged( int )), this, SLOT( setThickness( int )));
  //connect( cell_size_slider, SIGNAL( valueChanged( int )), this, SLOT( setCellSize( int )));

  // Next we initialize the main RViz classes.
  //
  // The VisualizationManager is the container for Display objects,
  // holds the main Ogre scene, holds the ViewController, etc.  It is
  // very central and we will probably need one in every usage of
  // librviz.
  manager_ = new rviz::VisualizationManager( render_panel_ );
  render_panel_->initialize( manager_->getSceneManager(), manager_ );
  manager_->setFixedFrame(frame_id);
  manager_->initialize();
  manager_->startUpdate();

  // Create a Grid display.
  grid_ = manager_->createDisplay( "rviz/Grid", "adjustable grid", true );
  ROS_ASSERT( grid_ != NULL );

  QStringList pieces = message_type.split("/");
  QString rviz_message;
  if (pieces.value(1) == "OccupancyGrid") {
      rviz_message = "rviz/Map";
  }
  else {
      rviz_message = QString("rviz/") + pieces.value(1);
  }
  std::cout << message_type.toStdString() << std::endl;
  std::cout << rviz_message.toStdString() << std::endl;
  message_ = manager_->createDisplay(rviz_message, message_type, true);
  message_->setTopic(topic, message_type);


  // Configure the GridDisplay the way we like it.
  grid_->subProp( "Line Style" )->setValue( "Billboards" );
  //grid_->subProp( "Color" )->setValue( Qt::yellow );

  // Initialize the slider values.
  //thickness_slider->setValue( 25 );
  //cell_size_slider->setValue( 10 );

  //publish_message<sensor_msgs::PointCloud2>(message_id, topic);
  cast_and_publish_message(message_id, topic, message_type);

  this->setAttribute(Qt::WA_DeleteOnClose);
  //connect(this, SIGNAL(destroyed(QObject*)), this, SLOT(widgetDestroyed(QObject*)) );
}

void MyViz::cast_and_publish_message(const QString& message_id, const QString& topic, const QString& message_type)
{
    if(message_type == "sensor_msgs/Image") {
        publish_message<sensor_msgs::Image>(message_id, topic);
    }
    else if(message_type == "nav_msgs/GridCells") {
        publish_message<nav_msgs::GridCells>(message_id, topic);
    }
    else if(message_type == "visualization_msgs/InteractiveMarker") {
        publish_message<visualization_msgs::InteractiveMarker>(message_id, topic);
    }
    else if(message_type == "sensor_msgs/LaserScan") {
        publish_message<sensor_msgs::LaserScan>(message_id, topic);
    }
    else if(message_type == "nav_msgs/OccupancyGrid") {
        publish_message<nav_msgs::OccupancyGrid>(message_id, topic);
    }
    else if(message_type == "visualization_msgs/Marker") {
        publish_message<visualization_msgs::Marker>(message_id, topic);
    }
    else if(message_type == "visualization_msgs/MarkerArray") {
        publish_message<visualization_msgs::MarkerArray>(message_id, topic);
    }
    else if(message_type == "nav_msgs/Path") {
        publish_message<nav_msgs::Path>(message_id, topic);
    }
    else if(message_type == "geometry_msgs/PointStamped") {
        publish_message<geometry_msgs::PointStamped>(message_id, topic);
    }
    else if(message_type == "geometry_msgs/PoseStamped") {
        publish_message<geometry_msgs::PoseStamped>(message_id, topic);
    }
    else if(message_type == "geometry_msgs/PoseArray") {
        publish_message<geometry_msgs::PoseArray>(message_id, topic);
    }
    else if(message_type == "sensor_msgs/PointCloud") {
        publish_message<sensor_msgs::PointCloud>(message_id, topic);
    }
    else if(message_type == "sensor_msgs/PointCloud2") {
        publish_message<sensor_msgs::PointCloud2>(message_id, topic);
    }
    else if(message_type == "geometry_msgs/Polygon") {
        publish_message<geometry_msgs::Polygon>(message_id, topic);
    }
    else if(message_type == "sensor_msgs/Range") {
        publish_message<sensor_msgs::Range>(message_id, topic);
    }
    else {
        QMessageBox::critical(NULL, "No valid Rviz message", message_type + " is not a valid Rviz message.");
        return;
    }
}

// Destructor.
MyViz::~MyViz()
{
  delete manager_;
}

// This function is a Qt slot connected to a QSlider's valueChanged()
// signal.  It sets the line thickness of the grid by changing the
// grid's "Line Width" property.
void MyViz::setThickness( int thickness_percent )
{
  if( grid_ != NULL )
  {
    grid_->subProp( "Line Style" )->subProp( "Line Width" )->setValue( thickness_percent / 100.0f );
  }
}

// This function is a Qt slot connected to a QSlider's valueChanged()
// signal.  It sets the cell size of the grid by changing the grid's
// "Cell Size" Property.
void MyViz::setCellSize( int cell_size_percent )
{
  if( grid_ != NULL )
  {
    grid_->subProp( "Cell Size" )->setValue( cell_size_percent / 10.0f );
  }
}

void MyViz::show_visualizer(const QString& message_type, const QString& message_id,
                            const QString& frame_id, const QString& topic,
                            const QString &collection_name, const QString &database_name)
{
    if(!ros::isInitialized())
    {
        ros::init(std::vector<std::pair<std::string, std::string> >(), "myviz", ros::init_options::AnonymousName);
    }

    if (!ros::master::check()) {
        QMessageBox::critical(NULL, "No ROS core found", "ROS core does not seem to be running. Please start it and mongodb_store.");
        return;
    }

    MyViz* myviz = new MyViz(0, message_type, message_id, frame_id, topic, collection_name, database_name);
    myviz->show();
}
