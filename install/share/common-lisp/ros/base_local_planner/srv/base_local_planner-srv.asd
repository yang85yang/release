
(cl:in-package :asdf)

(defsystem "base_local_planner-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "GetLineCost" :depends-on ("_package_GetLineCost"))
    (:file "_package_GetLineCost" :depends-on ("_package"))
  ))