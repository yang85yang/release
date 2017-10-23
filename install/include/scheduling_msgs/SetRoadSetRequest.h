// Generated by gencpp from file scheduling_msgs/SetRoadSetRequest.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_SETROADSETREQUEST_H
#define SCHEDULING_MSGS_MESSAGE_SETROADSETREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <scheduling_msgs/RoadSet.h>

namespace scheduling_msgs
{
template <class ContainerAllocator>
struct SetRoadSetRequest_
{
  typedef SetRoadSetRequest_<ContainerAllocator> Type;

  SetRoadSetRequest_()
    : agvID(0)
    , roadsets()  {
    }
  SetRoadSetRequest_(const ContainerAllocator& _alloc)
    : agvID(0)
    , roadsets(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _agvID_type;
  _agvID_type agvID;

   typedef std::vector< ::scheduling_msgs::RoadSet_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::scheduling_msgs::RoadSet_<ContainerAllocator> >::other >  _roadsets_type;
  _roadsets_type roadsets;




  typedef boost::shared_ptr< ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetRoadSetRequest_

typedef ::scheduling_msgs::SetRoadSetRequest_<std::allocator<void> > SetRoadSetRequest;

typedef boost::shared_ptr< ::scheduling_msgs::SetRoadSetRequest > SetRoadSetRequestPtr;
typedef boost::shared_ptr< ::scheduling_msgs::SetRoadSetRequest const> SetRoadSetRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace scheduling_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'scheduling_msgs': ['/home/ouiyeah/catkin_ws/src/scheduling_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f0c8a1cc957c6d13faaa5f73701c90d5";
  }

  static const char* value(const ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf0c8a1cc957c6d13ULL;
  static const uint64_t static_value2 = 0xfaaa5f73701c90d5ULL;
};

template<class ContainerAllocator>
struct DataType< ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scheduling_msgs/SetRoadSetRequest";
  }

  static const char* value(const ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 agvID\n\
scheduling_msgs/RoadSet[] roadsets\n\
\n\
================================================================================\n\
MSG: scheduling_msgs/RoadSet\n\
geometry_msgs/Pose2D start\n\
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

  static const char* value(const ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.agvID);
      stream.next(m.roadsets);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetRoadSetRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scheduling_msgs::SetRoadSetRequest_<ContainerAllocator>& v)
  {
    s << indent << "agvID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.agvID);
    s << indent << "roadsets[]" << std::endl;
    for (size_t i = 0; i < v.roadsets.size(); ++i)
    {
      s << indent << "  roadsets[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::scheduling_msgs::RoadSet_<ContainerAllocator> >::stream(s, indent + "    ", v.roadsets[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_SETROADSETREQUEST_H
