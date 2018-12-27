// Generated by gencpp from file cob_control_msgs/ObstacleDistances.msg
// DO NOT EDIT!


#ifndef COB_CONTROL_MSGS_MESSAGE_OBSTACLEDISTANCES_H
#define COB_CONTROL_MSGS_MESSAGE_OBSTACLEDISTANCES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <cob_control_msgs/ObstacleDistance.h>

namespace cob_control_msgs
{
template <class ContainerAllocator>
struct ObstacleDistances_
{
  typedef ObstacleDistances_<ContainerAllocator> Type;

  ObstacleDistances_()
    : distances()  {
    }
  ObstacleDistances_(const ContainerAllocator& _alloc)
    : distances(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::cob_control_msgs::ObstacleDistance_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::cob_control_msgs::ObstacleDistance_<ContainerAllocator> >::other >  _distances_type;
  _distances_type distances;




  typedef boost::shared_ptr< ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> const> ConstPtr;

}; // struct ObstacleDistances_

typedef ::cob_control_msgs::ObstacleDistances_<std::allocator<void> > ObstacleDistances;

typedef boost::shared_ptr< ::cob_control_msgs::ObstacleDistances > ObstacleDistancesPtr;
typedef boost::shared_ptr< ::cob_control_msgs::ObstacleDistances const> ObstacleDistancesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'cob_control_msgs': ['/home/ouiyeah/catkin_ws/src/cob_control/cob_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> >
{
  static const char* value()
  {
    return "58f6b8a2511da851588441c695d51807";
  }

  static const char* value(const ::cob_control_msgs::ObstacleDistances_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x58f6b8a2511da851ULL;
  static const uint64_t static_value2 = 0x588441c695d51807ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_control_msgs/ObstacleDistances";
  }

  static const char* value(const ::cob_control_msgs::ObstacleDistances_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ObstacleDistance[] distances\n\
================================================================================\n\
MSG: cob_control_msgs/ObstacleDistance\n\
Header header\n\
\n\
## Collision pair consists of link of interest and obstacle\n\
# Registration name of the link of interest\n\
string link_of_interest\n\
# Registration name of the obstacle\n\
string obstacle_id\n\
\n\
## distance between the nearest points on obstacle and link of interest\n\
float64 distance\n\
\n\
## Vector pointing to the origin of the link\n\
geometry_msgs/Vector3 frame_vector\n\
\n\
## Vector pointing to the nearest point on the link collision geometry (e.g. mesh)\n\
geometry_msgs/Vector3 nearest_point_frame_vector\n\
\n\
## Vector pointing to the nearest point on the obstacle collision geometry (e.g. mesh)\n\
geometry_msgs/Vector3 nearest_point_obstacle_vector\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::cob_control_msgs::ObstacleDistances_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distances);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObstacleDistances_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_control_msgs::ObstacleDistances_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_control_msgs::ObstacleDistances_<ContainerAllocator>& v)
  {
    s << indent << "distances[]" << std::endl;
    for (size_t i = 0; i < v.distances.size(); ++i)
    {
      s << indent << "  distances[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::cob_control_msgs::ObstacleDistance_<ContainerAllocator> >::stream(s, indent + "    ", v.distances[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_CONTROL_MSGS_MESSAGE_OBSTACLEDISTANCES_H
