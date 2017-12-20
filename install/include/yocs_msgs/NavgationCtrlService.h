// Generated by gencpp from file yocs_msgs/NavgationCtrlService.msg
// DO NOT EDIT!


#ifndef YOCS_MSGS_MESSAGE_NAVGATIONCTRLSERVICE_H
#define YOCS_MSGS_MESSAGE_NAVGATIONCTRLSERVICE_H

#include <ros/service_traits.h>


#include <yocs_msgs/NavgationCtrlServiceRequest.h>
#include <yocs_msgs/NavgationCtrlServiceResponse.h>


namespace yocs_msgs
{

struct NavgationCtrlService
{

typedef NavgationCtrlServiceRequest Request;
typedef NavgationCtrlServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct NavgationCtrlService
} // namespace yocs_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::yocs_msgs::NavgationCtrlService > {
  static const char* value()
  {
    return "7a0a7e8479acaa6ce70d517956274341";
  }

  static const char* value(const ::yocs_msgs::NavgationCtrlService&) { return value(); }
};

template<>
struct DataType< ::yocs_msgs::NavgationCtrlService > {
  static const char* value()
  {
    return "yocs_msgs/NavgationCtrlService";
  }

  static const char* value(const ::yocs_msgs::NavgationCtrlService&) { return value(); }
};


// service_traits::MD5Sum< ::yocs_msgs::NavgationCtrlServiceRequest> should match 
// service_traits::MD5Sum< ::yocs_msgs::NavgationCtrlService > 
template<>
struct MD5Sum< ::yocs_msgs::NavgationCtrlServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::yocs_msgs::NavgationCtrlService >::value();
  }
  static const char* value(const ::yocs_msgs::NavgationCtrlServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::yocs_msgs::NavgationCtrlServiceRequest> should match 
// service_traits::DataType< ::yocs_msgs::NavgationCtrlService > 
template<>
struct DataType< ::yocs_msgs::NavgationCtrlServiceRequest>
{
  static const char* value()
  {
    return DataType< ::yocs_msgs::NavgationCtrlService >::value();
  }
  static const char* value(const ::yocs_msgs::NavgationCtrlServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::yocs_msgs::NavgationCtrlServiceResponse> should match 
// service_traits::MD5Sum< ::yocs_msgs::NavgationCtrlService > 
template<>
struct MD5Sum< ::yocs_msgs::NavgationCtrlServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::yocs_msgs::NavgationCtrlService >::value();
  }
  static const char* value(const ::yocs_msgs::NavgationCtrlServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::yocs_msgs::NavgationCtrlServiceResponse> should match 
// service_traits::DataType< ::yocs_msgs::NavgationCtrlService > 
template<>
struct DataType< ::yocs_msgs::NavgationCtrlServiceResponse>
{
  static const char* value()
  {
    return DataType< ::yocs_msgs::NavgationCtrlService >::value();
  }
  static const char* value(const ::yocs_msgs::NavgationCtrlServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // YOCS_MSGS_MESSAGE_NAVGATIONCTRLSERVICE_H