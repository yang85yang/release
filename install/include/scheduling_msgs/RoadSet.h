// Generated by gencpp from file scheduling_msgs/RoadSet.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_ROADSET_H
#define SCHEDULING_MSGS_MESSAGE_ROADSET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Pose2D.h>

namespace scheduling_msgs
{
template <class ContainerAllocator>
struct RoadSet_
{
  typedef RoadSet_<ContainerAllocator> Type;

  RoadSet_()
    : start()
    , end()  {
    }
  RoadSet_(const ContainerAllocator& _alloc)
    : start(_alloc)
    , end(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _start_type;
  _start_type start;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _end_type;
  _end_type end;




  typedef boost::shared_ptr< ::scheduling_msgs::RoadSet_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scheduling_msgs::RoadSet_<ContainerAllocator> const> ConstPtr;

}; // struct RoadSet_

typedef ::scheduling_msgs::RoadSet_<std::allocator<void> > RoadSet;

typedef boost::shared_ptr< ::scheduling_msgs::RoadSet > RoadSetPtr;
typedef boost::shared_ptr< ::scheduling_msgs::RoadSet const> RoadSetConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scheduling_msgs::RoadSet_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scheduling_msgs::RoadSet_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace scheduling_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'scheduling_msgs': ['/home/ouiyeah/catkin_ws/src/scheduling_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::RoadSet_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::RoadSet_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::RoadSet_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::RoadSet_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::RoadSet_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::RoadSet_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scheduling_msgs::RoadSet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b8443ecd7e3cff1eb6612b7dcfe9406";
  }

  static const char* value(const ::scheduling_msgs::RoadSet_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b8443ecd7e3cff1ULL;
  static const uint64_t static_value2 = 0xeb6612b7dcfe9406ULL;
};

template<class ContainerAllocator>
struct DataType< ::scheduling_msgs::RoadSet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scheduling_msgs/RoadSet";
  }

  static const char* value(const ::scheduling_msgs::RoadSet_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scheduling_msgs::RoadSet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose2D start\n\
geometry_msgs/Pose2D end\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::scheduling_msgs::RoadSet_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scheduling_msgs::RoadSet_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.start);
      stream.next(m.end);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RoadSet_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scheduling_msgs::RoadSet_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scheduling_msgs::RoadSet_<ContainerAllocator>& v)
  {
    s << indent << "start: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.start);
    s << indent << "end: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.end);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_ROADSET_H
