// Generated by gencpp from file scheduling_msgs/CreateNewTask.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_CREATENEWTASK_H
#define SCHEDULING_MSGS_MESSAGE_CREATENEWTASK_H

#include <ros/service_traits.h>


#include <scheduling_msgs/CreateNewTaskRequest.h>
#include <scheduling_msgs/CreateNewTaskResponse.h>


namespace scheduling_msgs
{

struct CreateNewTask
{

typedef CreateNewTaskRequest Request;
typedef CreateNewTaskResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CreateNewTask
} // namespace scheduling_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::scheduling_msgs::CreateNewTask > {
  static const char* value()
  {
    return "f8d9e69067075cee94e925f955e1ce6d";
  }

  static const char* value(const ::scheduling_msgs::CreateNewTask&) { return value(); }
};

template<>
struct DataType< ::scheduling_msgs::CreateNewTask > {
  static const char* value()
  {
    return "scheduling_msgs/CreateNewTask";
  }

  static const char* value(const ::scheduling_msgs::CreateNewTask&) { return value(); }
};


// service_traits::MD5Sum< ::scheduling_msgs::CreateNewTaskRequest> should match 
// service_traits::MD5Sum< ::scheduling_msgs::CreateNewTask > 
template<>
struct MD5Sum< ::scheduling_msgs::CreateNewTaskRequest>
{
  static const char* value()
  {
    return MD5Sum< ::scheduling_msgs::CreateNewTask >::value();
  }
  static const char* value(const ::scheduling_msgs::CreateNewTaskRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::scheduling_msgs::CreateNewTaskRequest> should match 
// service_traits::DataType< ::scheduling_msgs::CreateNewTask > 
template<>
struct DataType< ::scheduling_msgs::CreateNewTaskRequest>
{
  static const char* value()
  {
    return DataType< ::scheduling_msgs::CreateNewTask >::value();
  }
  static const char* value(const ::scheduling_msgs::CreateNewTaskRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::scheduling_msgs::CreateNewTaskResponse> should match 
// service_traits::MD5Sum< ::scheduling_msgs::CreateNewTask > 
template<>
struct MD5Sum< ::scheduling_msgs::CreateNewTaskResponse>
{
  static const char* value()
  {
    return MD5Sum< ::scheduling_msgs::CreateNewTask >::value();
  }
  static const char* value(const ::scheduling_msgs::CreateNewTaskResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::scheduling_msgs::CreateNewTaskResponse> should match 
// service_traits::DataType< ::scheduling_msgs::CreateNewTask > 
template<>
struct DataType< ::scheduling_msgs::CreateNewTaskResponse>
{
  static const char* value()
  {
    return DataType< ::scheduling_msgs::CreateNewTask >::value();
  }
  static const char* value(const ::scheduling_msgs::CreateNewTaskResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_CREATENEWTASK_H
