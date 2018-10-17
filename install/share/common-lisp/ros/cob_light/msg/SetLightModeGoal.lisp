; Auto-generated. Do not edit!


(cl:in-package cob_light-msg)


;//! \htmlinclude SetLightModeGoal.msg.html

(cl:defclass <SetLightModeGoal> (roslisp-msg-protocol:ros-message)
  ((mode
    :reader mode
    :initarg :mode
    :type cob_light-msg:LightMode
    :initform (cl:make-instance 'cob_light-msg:LightMode)))
)

(cl:defclass SetLightModeGoal (<SetLightModeGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetLightModeGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetLightModeGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cob_light-msg:<SetLightModeGoal> is deprecated: use cob_light-msg:SetLightModeGoal instead.")))

(cl:ensure-generic-function 'mode-val :lambda-list '(m))
(cl:defmethod mode-val ((m <SetLightModeGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cob_light-msg:mode-val is deprecated.  Use cob_light-msg:mode instead.")
  (mode m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetLightModeGoal>) ostream)
  "Serializes a message object of type '<SetLightModeGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'mode) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetLightModeGoal>) istream)
  "Deserializes a message object of type '<SetLightModeGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'mode) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetLightModeGoal>)))
  "Returns string type for a message object of type '<SetLightModeGoal>"
  "cob_light/SetLightModeGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetLightModeGoal)))
  "Returns string type for a message object of type 'SetLightModeGoal"
  "cob_light/SetLightModeGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetLightModeGoal>)))
  "Returns md5sum for a message object of type '<SetLightModeGoal>"
  "cf64533ba011e7f531cecce5a35c9b83")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetLightModeGoal)))
  "Returns md5sum for a message object of type 'SetLightModeGoal"
  "cf64533ba011e7f531cecce5a35c9b83")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetLightModeGoal>)))
  "Returns full string definition for message of type '<SetLightModeGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# The goal~%cob_light/LightMode mode~%~%================================================================================~%MSG: cob_light/LightMode~%uint8 mode                         # mode to switch on~%~%float32                frequency   # in Hz~%float32                timeout     # in s, requested mode will be executed for max timeout s.~%                                   # default is 0 and means no timeout.~%int32                  pulses      # specifies the amount of pulses which will be executed.~%                                   # eg: mode = flash, pulses = 2. Means the light will flash two times~%int8                   priority    # priority [-20,20] default = 0. Modes with same or higher priorities will~%                                   # be executed.~%std_msgs/ColorRGBA[]   colors      # array of colors.~%                                   # size > 1: each color represent one led (size should match the amount of leds)~%                                   # size = 1: one color for all leds or color for specific mode~%                                   # size = 0: undefined~%cob_light/Sequence[]   sequences   # an array of sequence definitions, used only if mode is set to SEQ~%~%================================================================================~%MSG: std_msgs/ColorRGBA~%float32 r~%float32 g~%float32 b~%float32 a~%~%================================================================================~%MSG: cob_light/Sequence~%std_msgs/ColorRGBA   color       #sequence color~%float32              hold_time   #time how long the color should be hold [s]~%float32              cross_time  #time how long it take to fade to this color [s]~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetLightModeGoal)))
  "Returns full string definition for message of type 'SetLightModeGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# The goal~%cob_light/LightMode mode~%~%================================================================================~%MSG: cob_light/LightMode~%uint8 mode                         # mode to switch on~%~%float32                frequency   # in Hz~%float32                timeout     # in s, requested mode will be executed for max timeout s.~%                                   # default is 0 and means no timeout.~%int32                  pulses      # specifies the amount of pulses which will be executed.~%                                   # eg: mode = flash, pulses = 2. Means the light will flash two times~%int8                   priority    # priority [-20,20] default = 0. Modes with same or higher priorities will~%                                   # be executed.~%std_msgs/ColorRGBA[]   colors      # array of colors.~%                                   # size > 1: each color represent one led (size should match the amount of leds)~%                                   # size = 1: one color for all leds or color for specific mode~%                                   # size = 0: undefined~%cob_light/Sequence[]   sequences   # an array of sequence definitions, used only if mode is set to SEQ~%~%================================================================================~%MSG: std_msgs/ColorRGBA~%float32 r~%float32 g~%float32 b~%float32 a~%~%================================================================================~%MSG: cob_light/Sequence~%std_msgs/ColorRGBA   color       #sequence color~%float32              hold_time   #time how long the color should be hold [s]~%float32              cross_time  #time how long it take to fade to this color [s]~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetLightModeGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'mode))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetLightModeGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'SetLightModeGoal
    (cl:cons ':mode (mode msg))
))