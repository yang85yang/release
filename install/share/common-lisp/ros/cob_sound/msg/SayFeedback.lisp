; Auto-generated. Do not edit!


(cl:in-package cob_sound-msg)


;//! \htmlinclude SayFeedback.msg.html

(cl:defclass <SayFeedback> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass SayFeedback (<SayFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SayFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SayFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cob_sound-msg:<SayFeedback> is deprecated: use cob_sound-msg:SayFeedback instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SayFeedback>) ostream)
  "Serializes a message object of type '<SayFeedback>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SayFeedback>) istream)
  "Deserializes a message object of type '<SayFeedback>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SayFeedback>)))
  "Returns string type for a message object of type '<SayFeedback>"
  "cob_sound/SayFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SayFeedback)))
  "Returns string type for a message object of type 'SayFeedback"
  "cob_sound/SayFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SayFeedback>)))
  "Returns md5sum for a message object of type '<SayFeedback>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SayFeedback)))
  "Returns md5sum for a message object of type 'SayFeedback"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SayFeedback>)))
  "Returns full string definition for message of type '<SayFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SayFeedback)))
  "Returns full string definition for message of type 'SayFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SayFeedback>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SayFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'SayFeedback
))