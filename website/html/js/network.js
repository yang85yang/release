/*! tailinserver 2017-03-22 */
function IpCheck(a){return str=a,str=str.match(/(\d+)\.(\d+)\.(\d+)\.(\d+)/g),null!=str&&!(RegExp.$1>255||RegExp.$2>255||RegExp.$3>255||RegExp.$4>255)}var NetEvent={REVISION:"0.0.6.0-2017-2.17"};$(function(){$("#btn-network-setting").click(function(){var a="                    source ~/catkin_ws/base.sh;                     export ROS_USER_SSID="+$("#network-ssid")[0].value+";                     export ROS_USER_PASSWD="+$("#network-password")[0].value+";                     export ROS_USER_IP="+$("#network-ip")[0].value+";                     roscd bringup; shell/comm-setup.sh";return IpCheck($("#network-ip")[0].value)?""==$("#network-password")[0].value?void sweetAlert("参数错误","密码不能为空","error"):(NavEvent.Publish(NavEvent.TopicEnum.shellTopic,a),$(this).buttonMarkup({icon:"hrg-load"}),void setTimeout(function(){window.location.href="http://"+$("#network-ip")[0].value},1e4)):void sweetAlert("参数错误","IP不合法","error")}),$("#btn-network-reset").click(function(){var a="                    source ~/catkin_ws/base.sh;                     roscd bringup; shell/comm-reset.sh";NavEvent.Publish(NavEvent.TopicEnum.shellTopic,a),$(this).buttonMarkup({icon:"hrg-load"}),setTimeout(function(){window.location.href="http://10.42.0.1"},1e4)})});