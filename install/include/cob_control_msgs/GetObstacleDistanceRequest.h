// Generated by gencpp from file cob_control_msgs/GetObstacleDistanceRequest.msg
// DO NOT EDIT!


#ifndef COB_CONTROL_MSGS_MESSAGE_GETOBSTACLEDISTANCEREQUEST_H
#define COB_CONTROL_MSGS_MESSAGE_GETOBSTACLEDISTANCEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cob_control_msgs
{
template <class ContainerAllocator>
struct GetObstacleDistanceRequest_
{
  typedef GetObstacleDistanceRequest_<ContainerAllocator> Type;

  GetObstacleDistanceRequest_()
    : links()
    , objects()  {
    }
  GetObstacleDistanceRequest_(const ContainerAllocator& _alloc)
    : links(_alloc)
    , objects(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _links_type;
  _links_type links;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _objects_type;
  _objects_type objects;




  typedef boost::shared_ptr< ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetObstacleDistanceRequest_

typedef ::cob_control_msgs::GetObstacleDistanceRequest_<std::allocator<void> > GetObstacleDistanceRequest;

typedef boost::shared_ptr< ::cob_control_msgs::GetObstacleDistanceRequest > GetObstacleDistanceRequestPtr;
typedef boost::shared_ptr< ::cob_control_msgs::GetObstacleDistanceRequest const> GetObstacleDistanceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "26a63930cc171dbad7ae747d5d9efb00";
  }

  static const char* value(const ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x26a63930cc171dbaULL;
  static const uint64_t static_value2 = 0xd7ae747d5d9efb00ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_control_msgs/GetObstacleDistanceRequest";
  }

  static const char* value(const ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] links\n\
string[] objects\n\
";
  }

  static const char* value(const ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.links);
      stream.next(m.objects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetObstacleDistanceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_control_msgs::GetObstacleDistanceRequest_<ContainerAllocator>& v)
  {
    s << indent << "links[]" << std::endl;
    for (size_t i = 0; i < v.links.size(); ++i)
    {
      s << indent << "  links[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.links[i]);
    }
    s << indent << "objects[]" << std::endl;
    for (size_t i = 0; i < v.objects.size(); ++i)
    {
      s << indent << "  objects[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.objects[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_CONTROL_MSGS_MESSAGE_GETOBSTACLEDISTANCEREQUEST_H
