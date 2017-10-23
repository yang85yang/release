// Generated by gencpp from file scheduling_msgs/AddOrModifyForkliftTask.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_ADDORMODIFYFORKLIFTTASK_H
#define SCHEDULING_MSGS_MESSAGE_ADDORMODIFYFORKLIFTTASK_H

#include <ros/service_traits.h>


#include <scheduling_msgs/AddOrModifyForkliftTaskRequest.h>
#include <scheduling_msgs/AddOrModifyForkliftTaskResponse.h>


namespace scheduling_msgs
{

struct AddOrModifyForkliftTask
{

typedef AddOrModifyForkliftTaskRequest Request;
typedef AddOrModifyForkliftTaskResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddOrModifyForkliftTask
} // namespace scheduling_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::scheduling_msgs::AddOrModifyForkliftTask > {
  static const char* value()
  {
    return "8f59951b0beaab467988840cbcef68be";
  }

  static const char* value(const ::scheduling_msgs::AddOrModifyForkliftTask&) { return value(); }
};

template<>
struct DataType< ::scheduling_msgs::AddOrModifyForkliftTask > {
  static const char* value()
  {
    return "scheduling_msgs/AddOrModifyForkliftTask";
  }

  static const char* value(const ::scheduling_msgs::AddOrModifyForkliftTask&) { return value(); }
};


// service_traits::MD5Sum< ::scheduling_msgs::AddOrModifyForkliftTaskRequest> should match 
// service_traits::MD5Sum< ::scheduling_msgs::AddOrModifyForkliftTask > 
template<>
struct MD5Sum< ::scheduling_msgs::AddOrModifyForkliftTaskRequest>
{
  static const char* value()
  {
    return MD5Sum< ::scheduling_msgs::AddOrModifyForkliftTask >::value();
  }
  static const char* value(const ::scheduling_msgs::AddOrModifyForkliftTaskRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::scheduling_msgs::AddOrModifyForkliftTaskRequest> should match 
// service_traits::DataType< ::scheduling_msgs::AddOrModifyForkliftTask > 
template<>
struct DataType< ::scheduling_msgs::AddOrModifyForkliftTaskRequest>
{
  static const char* value()
  {
    return DataType< ::scheduling_msgs::AddOrModifyForkliftTask >::value();
  }
  static const char* value(const ::scheduling_msgs::AddOrModifyForkliftTaskRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::scheduling_msgs::AddOrModifyForkliftTaskResponse> should match 
// service_traits::MD5Sum< ::scheduling_msgs::AddOrModifyForkliftTask > 
template<>
struct MD5Sum< ::scheduling_msgs::AddOrModifyForkliftTaskResponse>
{
  static const char* value()
  {
    return MD5Sum< ::scheduling_msgs::AddOrModifyForkliftTask >::value();
  }
  static const char* value(const ::scheduling_msgs::AddOrModifyForkliftTaskResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::scheduling_msgs::AddOrModifyForkliftTaskResponse> should match 
// service_traits::DataType< ::scheduling_msgs::AddOrModifyForkliftTask > 
template<>
struct DataType< ::scheduling_msgs::AddOrModifyForkliftTaskResponse>
{
  static const char* value()
  {
    return DataType< ::scheduling_msgs::AddOrModifyForkliftTask >::value();
  }
  static const char* value(const ::scheduling_msgs::AddOrModifyForkliftTaskResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_ADDORMODIFYFORKLIFTTASK_H
