// Generated by gencpp from file cob_frame_tracker/FrameTrackingFeedback.msg
// DO NOT EDIT!


#ifndef COB_FRAME_TRACKER_MESSAGE_FRAMETRACKINGFEEDBACK_H
#define COB_FRAME_TRACKER_MESSAGE_FRAMETRACKINGFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Twist.h>

namespace cob_frame_tracker
{
template <class ContainerAllocator>
struct FrameTrackingFeedback_
{
  typedef FrameTrackingFeedback_<ContainerAllocator> Type;

  FrameTrackingFeedback_()
    : twist()
    , distance(0.0)  {
    }
  FrameTrackingFeedback_(const ContainerAllocator& _alloc)
    : twist(_alloc)
    , distance(0.0)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _twist_type;
  _twist_type twist;

   typedef double _distance_type;
  _distance_type distance;




  typedef boost::shared_ptr< ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct FrameTrackingFeedback_

typedef ::cob_frame_tracker::FrameTrackingFeedback_<std::allocator<void> > FrameTrackingFeedback;

typedef boost::shared_ptr< ::cob_frame_tracker::FrameTrackingFeedback > FrameTrackingFeedbackPtr;
typedef boost::shared_ptr< ::cob_frame_tracker::FrameTrackingFeedback const> FrameTrackingFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_frame_tracker

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'cob_frame_tracker': ['/home/ouiyeah/catkin_ws/devel/share/cob_frame_tracker/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fe81003ede0829d7392b5d1210ebd6ad";
  }

  static const char* value(const ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfe81003ede0829d7ULL;
  static const uint64_t static_value2 = 0x392b5d1210ebd6adULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_frame_tracker/FrameTrackingFeedback";
  }

  static const char* value(const ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
# feedback definition\n\
geometry_msgs/Twist twist\n\
float64 distance\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
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

  static const char* value(const ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.twist);
      stream.next(m.distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FrameTrackingFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_frame_tracker::FrameTrackingFeedback_<ContainerAllocator>& v)
  {
    s << indent << "twist: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.twist);
    s << indent << "distance: ";
    Printer<double>::stream(s, indent + "  ", v.distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_FRAME_TRACKER_MESSAGE_FRAMETRACKINGFEEDBACK_H
