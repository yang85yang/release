# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from cob_cartesian_controller/CartesianControllerGoal.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import cob_cartesian_controller.msg
import geometry_msgs.msg

class CartesianControllerGoal(genpy.Message):
  _md5sum = "4991c8597bfb03ca23473e74f0163c3e"
  _type = "cob_cartesian_controller/CartesianControllerGoal"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# goal definition
uint8 LIN=1
uint8 CIRC=2
uint8 move_type

cob_cartesian_controller/MoveLin move_lin
cob_cartesian_controller/MoveCirc move_circ
cob_cartesian_controller/Profile profile

================================================================================
MSG: cob_cartesian_controller/MoveLin
geometry_msgs/Pose pose_goal
string frame_id
================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: cob_cartesian_controller/MoveCirc
geometry_msgs/Pose pose_center
string frame_id

float64 start_angle
float64 end_angle
float64 radius
================================================================================
MSG: cob_cartesian_controller/Profile
uint8 RAMP=1
uint8 SINOID=2
uint8 profile_type

float64 vel
float64 accl
"""
  # Pseudo-constants
  LIN = 1
  CIRC = 2

  __slots__ = ['move_type','move_lin','move_circ','profile']
  _slot_types = ['uint8','cob_cartesian_controller/MoveLin','cob_cartesian_controller/MoveCirc','cob_cartesian_controller/Profile']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       move_type,move_lin,move_circ,profile

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CartesianControllerGoal, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.move_type is None:
        self.move_type = 0
      if self.move_lin is None:
        self.move_lin = cob_cartesian_controller.msg.MoveLin()
      if self.move_circ is None:
        self.move_circ = cob_cartesian_controller.msg.MoveCirc()
      if self.profile is None:
        self.profile = cob_cartesian_controller.msg.Profile()
    else:
      self.move_type = 0
      self.move_lin = cob_cartesian_controller.msg.MoveLin()
      self.move_circ = cob_cartesian_controller.msg.MoveCirc()
      self.profile = cob_cartesian_controller.msg.Profile()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_B7d.pack(_x.move_type, _x.move_lin.pose_goal.position.x, _x.move_lin.pose_goal.position.y, _x.move_lin.pose_goal.position.z, _x.move_lin.pose_goal.orientation.x, _x.move_lin.pose_goal.orientation.y, _x.move_lin.pose_goal.orientation.z, _x.move_lin.pose_goal.orientation.w))
      _x = self.move_lin.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7d.pack(_x.move_circ.pose_center.position.x, _x.move_circ.pose_center.position.y, _x.move_circ.pose_center.position.z, _x.move_circ.pose_center.orientation.x, _x.move_circ.pose_center.orientation.y, _x.move_circ.pose_center.orientation.z, _x.move_circ.pose_center.orientation.w))
      _x = self.move_circ.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_3dB2d.pack(_x.move_circ.start_angle, _x.move_circ.end_angle, _x.move_circ.radius, _x.profile.profile_type, _x.profile.vel, _x.profile.accl))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.move_lin is None:
        self.move_lin = cob_cartesian_controller.msg.MoveLin()
      if self.move_circ is None:
        self.move_circ = cob_cartesian_controller.msg.MoveCirc()
      if self.profile is None:
        self.profile = cob_cartesian_controller.msg.Profile()
      end = 0
      _x = self
      start = end
      end += 57
      (_x.move_type, _x.move_lin.pose_goal.position.x, _x.move_lin.pose_goal.position.y, _x.move_lin.pose_goal.position.z, _x.move_lin.pose_goal.orientation.x, _x.move_lin.pose_goal.orientation.y, _x.move_lin.pose_goal.orientation.z, _x.move_lin.pose_goal.orientation.w,) = _struct_B7d.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.move_lin.frame_id = str[start:end].decode('utf-8')
      else:
        self.move_lin.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.move_circ.pose_center.position.x, _x.move_circ.pose_center.position.y, _x.move_circ.pose_center.position.z, _x.move_circ.pose_center.orientation.x, _x.move_circ.pose_center.orientation.y, _x.move_circ.pose_center.orientation.z, _x.move_circ.pose_center.orientation.w,) = _struct_7d.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.move_circ.frame_id = str[start:end].decode('utf-8')
      else:
        self.move_circ.frame_id = str[start:end]
      _x = self
      start = end
      end += 41
      (_x.move_circ.start_angle, _x.move_circ.end_angle, _x.move_circ.radius, _x.profile.profile_type, _x.profile.vel, _x.profile.accl,) = _struct_3dB2d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_B7d.pack(_x.move_type, _x.move_lin.pose_goal.position.x, _x.move_lin.pose_goal.position.y, _x.move_lin.pose_goal.position.z, _x.move_lin.pose_goal.orientation.x, _x.move_lin.pose_goal.orientation.y, _x.move_lin.pose_goal.orientation.z, _x.move_lin.pose_goal.orientation.w))
      _x = self.move_lin.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7d.pack(_x.move_circ.pose_center.position.x, _x.move_circ.pose_center.position.y, _x.move_circ.pose_center.position.z, _x.move_circ.pose_center.orientation.x, _x.move_circ.pose_center.orientation.y, _x.move_circ.pose_center.orientation.z, _x.move_circ.pose_center.orientation.w))
      _x = self.move_circ.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_3dB2d.pack(_x.move_circ.start_angle, _x.move_circ.end_angle, _x.move_circ.radius, _x.profile.profile_type, _x.profile.vel, _x.profile.accl))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.move_lin is None:
        self.move_lin = cob_cartesian_controller.msg.MoveLin()
      if self.move_circ is None:
        self.move_circ = cob_cartesian_controller.msg.MoveCirc()
      if self.profile is None:
        self.profile = cob_cartesian_controller.msg.Profile()
      end = 0
      _x = self
      start = end
      end += 57
      (_x.move_type, _x.move_lin.pose_goal.position.x, _x.move_lin.pose_goal.position.y, _x.move_lin.pose_goal.position.z, _x.move_lin.pose_goal.orientation.x, _x.move_lin.pose_goal.orientation.y, _x.move_lin.pose_goal.orientation.z, _x.move_lin.pose_goal.orientation.w,) = _struct_B7d.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.move_lin.frame_id = str[start:end].decode('utf-8')
      else:
        self.move_lin.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.move_circ.pose_center.position.x, _x.move_circ.pose_center.position.y, _x.move_circ.pose_center.position.z, _x.move_circ.pose_center.orientation.x, _x.move_circ.pose_center.orientation.y, _x.move_circ.pose_center.orientation.z, _x.move_circ.pose_center.orientation.w,) = _struct_7d.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.move_circ.frame_id = str[start:end].decode('utf-8')
      else:
        self.move_circ.frame_id = str[start:end]
      _x = self
      start = end
      end += 41
      (_x.move_circ.start_angle, _x.move_circ.end_angle, _x.move_circ.radius, _x.profile.profile_type, _x.profile.vel, _x.profile.accl,) = _struct_3dB2d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_7d = struct.Struct("<7d")
_struct_B7d = struct.Struct("<B7d")
_struct_3dB2d = struct.Struct("<3dB2d")
