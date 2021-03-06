; Auto-generated. Do not edit!


(cl:in-package cob_frame_tracker-msg)


;//! \htmlinclude FrameTrackingAction.msg.html

(cl:defclass <FrameTrackingAction> (roslisp-msg-protocol:ros-message)
  ((action_goal
    :reader action_goal
    :initarg :action_goal
    :type cob_frame_tracker-msg:FrameTrackingActionGoal
    :initform (cl:make-instance 'cob_frame_tracker-msg:FrameTrackingActionGoal))
   (action_result
    :reader action_result
    :initarg :action_result
    :type cob_frame_tracker-msg:FrameTrackingActionResult
    :initform (cl:make-instance 'cob_frame_tracker-msg:FrameTrackingActionResult))
   (action_feedback
    :reader action_feedback
    :initarg :action_feedback
    :type cob_frame_tracker-msg:FrameTrackingActionFeedback
    :initform (cl:make-instance 'cob_frame_tracker-msg:FrameTrackingActionFeedback)))
)

(cl:defclass FrameTrackingAction (<FrameTrackingAction>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FrameTrackingAction>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FrameTrackingAction)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cob_frame_tracker-msg:<FrameTrackingAction> is deprecated: use cob_frame_tracker-msg:FrameTrackingAction instead.")))

(cl:ensure-generic-function 'action_goal-val :lambda-list '(m))
(cl:defmethod action_goal-val ((m <FrameTrackingAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cob_frame_tracker-msg:action_goal-val is deprecated.  Use cob_frame_tracker-msg:action_goal instead.")
  (action_goal m))

(cl:ensure-generic-function 'action_result-val :lambda-list '(m))
(cl:defmethod action_result-val ((m <FrameTrackingAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cob_frame_tracker-msg:action_result-val is deprecated.  Use cob_frame_tracker-msg:action_result instead.")
  (action_result m))

(cl:ensure-generic-function 'action_feedback-val :lambda-list '(m))
(cl:defmethod action_feedback-val ((m <FrameTrackingAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cob_frame_tracker-msg:action_feedback-val is deprecated.  Use cob_frame_tracker-msg:action_feedback instead.")
  (action_feedback m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FrameTrackingAction>) ostream)
  "Serializes a message object of type '<FrameTrackingAction>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_goal) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_result) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_feedback) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FrameTrackingAction>) istream)
  "Deserializes a message object of type '<FrameTrackingAction>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_goal) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_result) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_feedback) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FrameTrackingAction>)))
  "Returns string type for a message object of type '<FrameTrackingAction>"
  "cob_frame_tracker/FrameTrackingAction")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FrameTrackingAction)))
  "Returns string type for a message object of type 'FrameTrackingAction"
  "cob_frame_tracker/FrameTrackingAction")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FrameTrackingAction>)))
  "Returns md5sum for a message object of type '<FrameTrackingAction>"
  "16582ddc5d15eb6f94e19f890cd956ff")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FrameTrackingAction)))
  "Returns md5sum for a message object of type 'FrameTrackingAction"
  "16582ddc5d15eb6f94e19f890cd956ff")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FrameTrackingAction>)))
  "Returns full string definition for message of type '<FrameTrackingAction>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%FrameTrackingActionGoal action_goal~%FrameTrackingActionResult action_result~%FrameTrackingActionFeedback action_feedback~%~%================================================================================~%MSG: cob_frame_tracker/FrameTrackingActionGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%FrameTrackingGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: cob_frame_tracker/FrameTrackingGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%## goal definition~%~%# frame to track~%string tracking_frame~%~%# max time to track~%float64 tracking_duration~%~%# stop tracking when goal is reached?~%bool stop_on_goal~%~%~%================================================================================~%MSG: cob_frame_tracker/FrameTrackingActionResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%FrameTrackingResult result~%~%================================================================================~%MSG: actionlib_msgs/GoalStatus~%GoalID goal_id~%uint8 status~%uint8 PENDING         = 0   # The goal has yet to be processed by the action server~%uint8 ACTIVE          = 1   # The goal is currently being processed by the action server~%uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing~%                            #   and has since completed its execution (Terminal State)~%uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)~%uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due~%                            #    to some failure (Terminal State)~%uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,~%                            #    because the goal was unattainable or invalid (Terminal State)~%uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing~%                            #    and has not yet completed execution~%uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,~%                            #    but the action server has not yet confirmed that the goal is canceled~%uint8 RECALLED        = 8   # The goal received a cancel request before it started executing~%                            #    and was successfully cancelled (Terminal State)~%uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be~%                            #    sent over the wire by an action server~%~%#Allow for the user to associate a string with GoalStatus for debugging~%string text~%~%~%================================================================================~%MSG: cob_frame_tracker/FrameTrackingResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%# result definition~%bool success~%string message~%~%~%================================================================================~%MSG: cob_frame_tracker/FrameTrackingActionFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%FrameTrackingFeedback feedback~%~%================================================================================~%MSG: cob_frame_tracker/FrameTrackingFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%# feedback definition~%geometry_msgs/Twist twist~%float64 distance~%~%~%================================================================================~%MSG: geometry_msgs/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FrameTrackingAction)))
  "Returns full string definition for message of type 'FrameTrackingAction"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%FrameTrackingActionGoal action_goal~%FrameTrackingActionResult action_result~%FrameTrackingActionFeedback action_feedback~%~%================================================================================~%MSG: cob_frame_tracker/FrameTrackingActionGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%FrameTrackingGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: cob_frame_tracker/FrameTrackingGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%## goal definition~%~%# frame to track~%string tracking_frame~%~%# max time to track~%float64 tracking_duration~%~%# stop tracking when goal is reached?~%bool stop_on_goal~%~%~%================================================================================~%MSG: cob_frame_tracker/FrameTrackingActionResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%FrameTrackingResult result~%~%================================================================================~%MSG: actionlib_msgs/GoalStatus~%GoalID goal_id~%uint8 status~%uint8 PENDING         = 0   # The goal has yet to be processed by the action server~%uint8 ACTIVE          = 1   # The goal is currently being processed by the action server~%uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing~%                            #   and has since completed its execution (Terminal State)~%uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)~%uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due~%                            #    to some failure (Terminal State)~%uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,~%                            #    because the goal was unattainable or invalid (Terminal State)~%uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing~%                            #    and has not yet completed execution~%uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,~%                            #    but the action server has not yet confirmed that the goal is canceled~%uint8 RECALLED        = 8   # The goal received a cancel request before it started executing~%                            #    and was successfully cancelled (Terminal State)~%uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be~%                            #    sent over the wire by an action server~%~%#Allow for the user to associate a string with GoalStatus for debugging~%string text~%~%~%================================================================================~%MSG: cob_frame_tracker/FrameTrackingResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%# result definition~%bool success~%string message~%~%~%================================================================================~%MSG: cob_frame_tracker/FrameTrackingActionFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%FrameTrackingFeedback feedback~%~%================================================================================~%MSG: cob_frame_tracker/FrameTrackingFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%# feedback definition~%geometry_msgs/Twist twist~%float64 distance~%~%~%================================================================================~%MSG: geometry_msgs/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FrameTrackingAction>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_goal))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_result))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_feedback))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FrameTrackingAction>))
  "Converts a ROS message object to a list"
  (cl:list 'FrameTrackingAction
    (cl:cons ':action_goal (action_goal msg))
    (cl:cons ':action_result (action_result msg))
    (cl:cons ':action_feedback (action_feedback msg))
))
