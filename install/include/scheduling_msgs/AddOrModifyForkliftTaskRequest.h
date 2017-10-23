// Generated by gencpp from file scheduling_msgs/AddOrModifyForkliftTaskRequest.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_ADDORMODIFYFORKLIFTTASKREQUEST_H
#define SCHEDULING_MSGS_MESSAGE_ADDORMODIFYFORKLIFTTASKREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace scheduling_msgs
{
template <class ContainerAllocator>
struct AddOrModifyForkliftTaskRequest_
{
  typedef AddOrModifyForkliftTaskRequest_<ContainerAllocator> Type;

  AddOrModifyForkliftTaskRequest_()
    : task_id(0)
    , loading_station()
    , unloading_station()  {
    }
  AddOrModifyForkliftTaskRequest_(const ContainerAllocator& _alloc)
    : task_id(0)
    , loading_station(_alloc)
    , unloading_station(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _task_id_type;
  _task_id_type task_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _loading_station_type;
  _loading_station_type loading_station;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _unloading_station_type;
  _unloading_station_type unloading_station;




  typedef boost::shared_ptr< ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AddOrModifyForkliftTaskRequest_

typedef ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<std::allocator<void> > AddOrModifyForkliftTaskRequest;

typedef boost::shared_ptr< ::scheduling_msgs::AddOrModifyForkliftTaskRequest > AddOrModifyForkliftTaskRequestPtr;
typedef boost::shared_ptr< ::scheduling_msgs::AddOrModifyForkliftTaskRequest const> AddOrModifyForkliftTaskRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ca2346f9a05a536babd1f4a467c508ce";
  }

  static const char* value(const ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xca2346f9a05a536bULL;
  static const uint64_t static_value2 = 0xabd1f4a467c508ceULL;
};

template<class ContainerAllocator>
struct DataType< ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scheduling_msgs/AddOrModifyForkliftTaskRequest";
  }

  static const char* value(const ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 task_id\n\
string loading_station\n\
string unloading_station\n\
";
  }

  static const char* value(const ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.task_id);
      stream.next(m.loading_station);
      stream.next(m.unloading_station);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddOrModifyForkliftTaskRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scheduling_msgs::AddOrModifyForkliftTaskRequest_<ContainerAllocator>& v)
  {
    s << indent << "task_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.task_id);
    s << indent << "loading_station: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.loading_station);
    s << indent << "unloading_station: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.unloading_station);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_ADDORMODIFYFORKLIFTTASKREQUEST_H
