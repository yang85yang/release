/*! tailinserver 2017-03-22 */
var NavEvent=NavEvent||{REVISION:"0.0.6.0-2016-12.21",Ros:null,Scene:null,CmdEnum:{Navigation:"navigation",Gmapping:"gmapping",Cancel:"cancel",Coverting:"converting",GamppingPose:"gmapping_pose",SaveMap:"save_map",SaveMapEdit:"save_map_edit",SaveAsMap:"save_as_map",SaveAsMapEdit:"save_as_map_edit",LoadMap:"load_map",LoadMapEdit:"load_map_edit",Userauth:"user_auth",Map_Select:"dbparam-select",Map_Delete:"dbparam-delete",Map_Update:"dbparam-update",Map_Insert:"dbparam-insert",Update:"update",Roslog_delete:"roslog-delete",Roslog_select:"roslog-select",Version:"version"},ShellEnum:{ChargeUp:'rostopic pub -1 /auto_charge std_msgs/Byte "1"',ChargeDown:'rostopic pub -1 /auto_charge std_msgs/Byte "0"',Joystick:'_JOYSTICK=`rosnode list | grep teleop_joystic`; if [[ -n $_JOYSTICK ]]; then _FB="joy_on"; else _FB="joy_off"; fi; rostopic pub -1 /shell_feedback std_msgs/String $_FB',JoystickOn:"roslaunch bringup teleop_joystick.launch",JoystickOff:"rosnode kill /teleop_joystick",MapSaveStaus:'roslaunch bringup map_edit_as_saver.launch; rostopic pub -1 /shell_feedback std_msgs/String "map_edit_ok"',PLCopen:'rostopic pub -1 /waypoint_user_pub std_msgs/String "wangjin_open"',PLCclose:'rostopic pub -1 /waypoint_user_pub std_msgs/String "wangjin_close"',PLCstatus:'rostopic pub -1 /waypoint_user_pub std_msgs/String "wangjin_status"',Version:"_RC=`grep '\\''|'\\'' ~/catkin_ws/README.md`;_FB=`echo $_RC | awk -F '\\''|'\\'' '\\''{print $10}'\\''`;_FB=`echo version:$_FB | awk -F '\\'' '\\'' '\\''{print $1$2}'\\''`;rostopic pub -1 /shell_feedback std_msgs/String $_FB;unset _FB; unset _RC;"},TopicEnum:{cmdTopic:{name:"/cmd_string",messageType:"std_msgs/String"},shellTopic:{name:"/shell_string",messageType:"std_msgs/String"},updateTopic:{name:"/system_shell/shell_string",messageType:"std_msgs/String"},imuTopic:{name:"/mobile_imu",messageType:"sensor_msgs/Imu"},velTopic:{name:"/cmd_vel",messageType:"geometry_msgs/Twist"},odomTopic:{name:"/odom",messageType:"nav_msgs/Odometry"},poseTopic:{name:"/robot_pose",messageType:"geometry_msgs/Pose"},diagnosticsTopic:{name:"/diagnostics_agg",messageType:"diagnostic_msgs/DiagnosticArray"},map_editTopic:{name:"/map_edit",messageType:"nav_msgs/OccupancyGrid",compression:"png"},map_edit_asTopic:{name:"/map_edit_as",messageType:"nav_msgs/OccupancyGrid"},waypointTopic:{name:"/waypoints",messageType:"yocs_msgs/WaypointList"},trajectoryTopic:{name:"/trajectories",messageType:"yocs_msgs/TrajectoryList"},waypoint_addTopic:{name:"/waypoint_add",messageType:"yocs_msgs/Waypoint"},waypoint_removeTopic:{name:"/waypoint_remove",messageType:"yocs_msgs/Waypoint"},trajectory_addTopic:{name:"/trajectory_add",messageType:"yocs_msgs/Trajectory"},trajectory_removeTopic:{name:"/trajectory_remove",messageType:"yocs_msgs/Trajectory"},nav_ctrlTopic:{name:"/nav_ctrl",messageType:"yocs_msgs/NavigationControl"},nav_ctrl_statusTopic:{name:"/nav_ctrl_status",messageType:"yocs_msgs/NavigationControlStatus"},shell_feedbackTopic:{name:"/shell_feedback",messageType:"std_msgs/String"},global_plannerTopic:{name:"/move_base/NavfnROS/plan",messageType:"nav_msgs/Path"},waypointUserPub:{name:"/waypoint_user_pub",messageType:"std_msgs/String"},waypoint_user_subTopic:{name:"/waypoint_user_sub",messageType:"std_msgs/String"}},NavigationModeEnum:{Navigation:"navigation",Gmapping:"gmapping",Coverting:"converting"},WaypointList:new Array,TrajectoryList:new Array,NavigationMode:null,CurrentPositionName:"",Timer:null,actionClient:function(){return new ROSLIB.ActionClient({ros:this.Ros,actionName:"move_base_msgs/MoveBaseAction",serverName:"/move_base"})},Msg:function(a){return new ROSLIB.Message({data:a})},MapMessage:function(a,b){return new ROSLIB.Message({header:{frame_id:"/map",seq:0},info:a,data:b})},Pose:function(a,b,c,d){return new ROSLIB.Pose({position:{x:a,y:b,z:0},orientation:{x:0,y:0,z:c,w:d}})},Goal:function(a){return new ROSLIB.Goal({actionClient:this.actionClient(),goalMessage:{target_pose:{header:{frame_id:"/map"},pose:a}}})},WaypointMessage:function(a,b,c,d,e,f){return new ROSLIB.Message({header:{frame_id:f},close_enough:c,goal_timeout:d,failure_mode:e,name:a,pose:b})},TrajectoryMessage:function(a,b){return new ROSLIB.Message({name:a,waypoints:b})},NavCtrlMessage:function(a,b){return new ROSLIB.Message({control:a,goal_name:b})},TwistMessage:function(a,b){return new ROSLIB.Message({linear:{x:a,y:0,z:0},angular:{x:0,y:0,z:b}})},Init:function(a){var b=a.url||"ws://"+window.location.hostname+":9090";this.Ros=new ROSLIB.Ros,this.Ros.connect(b),this.Ros.on("connection",a.onopen||function(){console.log("connect server %s success",b)}),this.Ros.on("close",a.onclose||function(){console.error("connect server %s close",b)}),this.Ros.on("error",a.onerror||function(){console.error("connect server %s error",b)})},Topic:function(a){return new ROSLIB.Topic({ros:this.Ros,name:a.name,messageType:a.messageType,throttle_rate:100,compression:a.compression})},ShowMap:function(a,b,c,d){var e=new ROS2D.Viewer({divID:c,width:a,height:b});NAV2D.OccupancyGridClientNav({ros:this.Ros,topic:d,rootObject:e.scene,continuous:!0,withOrientation:!0,viewer:e,serverName:"/move_base"});return e.scene},RemoveMap:function(a){$("#"+a+" canvas").remove()},Gmapping:function(){this.Publish(this.TopicEnum.cmdTopic,this.CmdEnum.Gmapping)},Navigation:function(){this.Publish(this.TopicEnum.cmdTopic,this.CmdEnum.Navigation)},SaveMap:function(){this.Publish(this.TopicEnum.cmdTopic,this.CmdEnum.GamppingPose,this.CmdEnum.SaveMap)},SaveAsMapEdit:function(a,b){this.Publish(this.TopicEnum.cmdTopic,this.CmdEnum.SaveAsMapEdit);var c=this.MapMessage(a,b),d=this.Topic(this.TopicEnum.map_edit_asTopic);d.publish(c)},Cancel:function(){this.Publish(this.TopicEnum.cmdTopic,this.CmdEnum.Cancel)},CloseHandle:function(){this.Publish(this.TopicEnum.shellTopic,this.ShellEnum.JoystickOff,this.ShellEnum.Joystick)},OpenHandle:function(){this.Publish(this.TopicEnum.shellTopic,this.ShellEnum.JoystickOn,this.ShellEnum.Joystick)},WayPointAdd:function(a){var b=this.Topic(this.TopicEnum.waypoint_addTopic);b.publish(a)},WayPointRemove:function(a){var b=this.Topic(this.TopicEnum.waypoint_removeTopic);b.publish(a)},TrajectoryAdd:function(a){var b=this.Topic(this.TopicEnum.trajectory_addTopic);b.publish(a)},TrajectoryRemove:function(a){var b=this.Topic(this.TopicEnum.trajectory_removeTopic);b.publish(a)},goPostion:function(a,b){var c=this.Goal(a);c.send(),c.on("status",b)},goFront:function(){var a=this.Topic(this.TopicEnum.velTopic);null!=this.Timer&&(clearInterval(this.Timer),this.Timer=null),this.Timer=setInterval(function(){a.publish(NavEvent.TwistMessage(.4,0))},300)},goBack:function(){var a=this.Topic(this.TopicEnum.velTopic);null!=this.Timer&&(clearInterval(this.Timer),this.Timer=null),this.Timer=setInterval(function(){a.publish(NavEvent.TwistMessage(-.4,0))},300)},goLeft:function(){var a=this.Topic(this.TopicEnum.velTopic);null!=this.Timer&&(clearInterval(this.Timer),this.Timer=null),this.Timer=setInterval(function(){a.publish(NavEvent.TwistMessage(0,.5))},300)},goRight:function(){var a=this.Topic(this.TopicEnum.velTopic);null!=this.Timer&&(clearInterval(this.Timer),this.Timer=null),this.Timer=setInterval(function(){a.publish(NavEvent.TwistMessage(0,-.5))},300)},goStop:function(){var a=this.Topic(this.TopicEnum.velTopic);null!=this.Timer&&(clearInterval(this.Timer),this.Timer=null),a.publish(this.TwistMessage(0,0))},Subscribe:function(a,b){console.log("Subscribe:%s",a.name);var a=this.Topic(a);return a.subscribe(b),a},Unsubscribe:function(a,b){a.unsubscribe(b)},Publish:function(a,b){for(var a=this.Topic(a),c=1;c<arguments.length;c++){var d=this.Msg(arguments[c]);a.publish(d),console.log("Publish:%s,%s",a.name,arguments[c])}},TPublish:function(a,b){a.publish(b),console.log("Publish:%s,%s",a.name,b.goal_name)}};