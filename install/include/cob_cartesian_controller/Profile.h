// Generated by gencpp from file cob_cartesian_controller/Profile.msg
// DO NOT EDIT!


#ifndef COB_CARTESIAN_CONTROLLER_MESSAGE_PROFILE_H
#define COB_CARTESIAN_CONTROLLER_MESSAGE_PROFILE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cob_cartesian_controller
{
template <class ContainerAllocator>
struct Profile_
{
  typedef Profile_<ContainerAllocator> Type;

  Profile_()
    : profile_type(0)
    , vel(0.0)
    , accl(0.0)  {
    }
  Profile_(const ContainerAllocator& _alloc)
    : profile_type(0)
    , vel(0.0)
    , accl(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _profile_type_type;
  _profile_type_type profile_type;

   typedef double _vel_type;
  _vel_type vel;

   typedef double _accl_type;
  _accl_type accl;


    enum { RAMP = 1u };
     enum { SINOID = 2u };
 

  typedef boost::shared_ptr< ::cob_cartesian_controller::Profile_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_cartesian_controller::Profile_<ContainerAllocator> const> ConstPtr;

}; // struct Profile_

typedef ::cob_cartesian_controller::Profile_<std::allocator<void> > Profile;

typedef boost::shared_ptr< ::cob_cartesian_controller::Profile > ProfilePtr;
typedef boost::shared_ptr< ::cob_cartesian_controller::Profile const> ProfileConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_cartesian_controller::Profile_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_cartesian_controller::Profile_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_cartesian_controller

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'cob_cartesian_controller': ['/home/ouiyeah/catkin_ws/devel/share/cob_cartesian_controller/msg', '/home/ouiyeah/catkin_ws/src/cob_control/cob_cartesian_controller/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_cartesian_controller::Profile_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_cartesian_controller::Profile_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_cartesian_controller::Profile_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_cartesian_controller::Profile_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_cartesian_controller::Profile_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_cartesian_controller::Profile_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_cartesian_controller::Profile_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3631ecf157bdfedf0f8cb3d5f838c11b";
  }

  static const char* value(const ::cob_cartesian_controller::Profile_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3631ecf157bdfedfULL;
  static const uint64_t static_value2 = 0x0f8cb3d5f838c11bULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_cartesian_controller::Profile_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_cartesian_controller/Profile";
  }

  static const char* value(const ::cob_cartesian_controller::Profile_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_cartesian_controller::Profile_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 RAMP=1\n\
uint8 SINOID=2\n\
uint8 profile_type\n\
\n\
float64 vel\n\
float64 accl\n\
";
  }

  static const char* value(const ::cob_cartesian_controller::Profile_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_cartesian_controller::Profile_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.profile_type);
      stream.next(m.vel);
      stream.next(m.accl);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Profile_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_cartesian_controller::Profile_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_cartesian_controller::Profile_<ContainerAllocator>& v)
  {
    s << indent << "profile_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.profile_type);
    s << indent << "vel: ";
    Printer<double>::stream(s, indent + "  ", v.vel);
    s << indent << "accl: ";
    Printer<double>::stream(s, indent + "  ", v.accl);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_CARTESIAN_CONTROLLER_MESSAGE_PROFILE_H