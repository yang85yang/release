// Generated by gencpp from file yocs_msgs/NavigationControlStatus.msg
// DO NOT EDIT!


#ifndef YOCS_MSGS_MESSAGE_NAVIGATIONCONTROLSTATUS_H
#define YOCS_MSGS_MESSAGE_NAVIGATIONCONTROLSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace yocs_msgs
{
template <class ContainerAllocator>
struct NavigationControlStatus_
{
  typedef NavigationControlStatus_<ContainerAllocator> Type;

  NavigationControlStatus_()
    : status(0)
    , status_desc()
    , waypoint_name()  {
    }
  NavigationControlStatus_(const ContainerAllocator& _alloc)
    : status(0)
    , status_desc(_alloc)
    , waypoint_name(_alloc)  {
  (void)_alloc;
    }



   typedef int8_t _status_type;
  _status_type status;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_desc_type;
  _status_desc_type status_desc;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _waypoint_name_type;
  _waypoint_name_type waypoint_name;


    enum { ERROR = -1 };
     enum { IDLING = 0 };
     enum { RUNNING = 1 };
     enum { PAUSED = 2 };
     enum { COMPLETED = 3 };
     enum { CANCELLED = 4 };
 

  typedef boost::shared_ptr< ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> const> ConstPtr;

}; // struct NavigationControlStatus_

typedef ::yocs_msgs::NavigationControlStatus_<std::allocator<void> > NavigationControlStatus;

typedef boost::shared_ptr< ::yocs_msgs::NavigationControlStatus > NavigationControlStatusPtr;
typedef boost::shared_ptr< ::yocs_msgs::NavigationControlStatus const> NavigationControlStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace yocs_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'yocs_msgs': ['/home/ouiyeah/catkin_ws/src/yocs_msgs-devel/msg', '/home/ouiyeah/catkin_ws/devel/share/yocs_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "027304ab109f6a479d3756bfbd6905b3";
  }

  static const char* value(const ::yocs_msgs::NavigationControlStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x027304ab109f6a47ULL;
  static const uint64_t static_value2 = 0x9d3756bfbd6905b3ULL;
};

template<class ContainerAllocator>
struct DataType< ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yocs_msgs/NavigationControlStatus";
  }

  static const char* value(const ::yocs_msgs::NavigationControlStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Control the way point/trajectory navigation\n\
int8 status\n\
\n\
int8 ERROR     = -1\n\
int8 IDLING    = 0\n\
int8 RUNNING   = 1\n\
int8 PAUSED    = 2\n\
int8 COMPLETED = 3\n\
int8 CANCELLED = 4\n\
\n\
# Human-readable status description\n\
string status_desc\n\
string waypoint_name\n\
";
  }

  static const char* value(const ::yocs_msgs::NavigationControlStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.status_desc);
      stream.next(m.waypoint_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NavigationControlStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yocs_msgs::NavigationControlStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yocs_msgs::NavigationControlStatus_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.status);
    s << indent << "status_desc: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status_desc);
    s << indent << "waypoint_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.waypoint_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YOCS_MSGS_MESSAGE_NAVIGATIONCONTROLSTATUS_H
