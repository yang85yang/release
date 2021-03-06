; Auto-generated. Do not edit!


(cl:in-package cob_frame_tracker-msg)


;//! \htmlinclude FrameTrackingFeedback.msg.html

(cl:defclass <FrameTrackingFeedback> (roslisp-msg-protocol:ros-message)
  ((twist
    :reader twist
    :initarg :twist
    :type geometry_msgs-msg:Twist
    :initform (cl:make-instance 'geometry_msgs-msg:Twist))
   (distance
    :reader distance
    :initarg :distance
    :type cl:float
    :initform 0.0))
)

(cl:defclass FrameTrackingFeedback (<FrameTrackingFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FrameTrackingFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FrameTrackingFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cob_frame_tracker-msg:<FrameTrackingFeedback> is deprecated: use cob_frame_tracker-msg:FrameTrackingFeedback instead.")))

(cl:ensure-generic-function 'twist-val :lambda-list '(m))
(cl:defmethod twist-val ((m <FrameTrackingFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cob_frame_tracker-msg:twist-val is deprecated.  Use cob_frame_tracker-msg:twist instead.")
  (twist m))

(cl:ensure-generic-function 'distance-val :lambda-list '(m))
(cl:defmethod distance-val ((m <FrameTrackingFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cob_frame_tracker-msg:distance-val is deprecated.  Use cob_frame_tracker-msg:distance instead.")
  (distance m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FrameTrackingFeedback>) ostream)
  "Serializes a message object of type '<FrameTrackingFeedback>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'twist) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'distance))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FrameTrackingFeedback>) istream)
  "Deserializes a message object of type '<FrameTrackingFeedback>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'twist) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'distance) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FrameTrackingFeedback>)))
  "Returns string type for a message object of type '<FrameTrackingFeedback>"
  "cob_frame_tracker/FrameTrackingFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FrameTrackingFeedback)))
  "Returns string type for a message object of type 'FrameTrackingFeedback"
  "cob_frame_tracker/FrameTrackingFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FrameTrackingFeedback>)))
  "Returns md5sum for a message object of type '<FrameTrackingFeedback>"
  "fe81003ede0829d7392b5d1210ebd6ad")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FrameTrackingFeedback)))
  "Returns md5sum for a message object of type 'FrameTrackingFeedback"
  "fe81003ede0829d7392b5d1210ebd6ad")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FrameTrackingFeedback>)))
  "Returns full string definition for message of type '<FrameTrackingFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%# feedback definition~%geometry_msgs/Twist twist~%float64 distance~%~%~%================================================================================~%MSG: geometry_msgs/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FrameTrackingFeedback)))
  "Returns full string definition for message of type 'FrameTrackingFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%# feedback definition~%geometry_msgs/Twist twist~%float64 distance~%~%~%================================================================================~%MSG: geometry_msgs/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FrameTrackingFeedback>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'twist))
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FrameTrackingFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'FrameTrackingFeedback
    (cl:cons ':twist (twist msg))
    (cl:cons ':distance (distance msg))
))
