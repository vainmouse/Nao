// Generated by gencpp from file nao_dcm_msgs/BoolService.msg
// DO NOT EDIT!


#ifndef NAO_DCM_MSGS_MESSAGE_BOOLSERVICE_H
#define NAO_DCM_MSGS_MESSAGE_BOOLSERVICE_H

#include <ros/service_traits.h>


#include <nao_dcm_msgs/BoolServiceRequest.h>
#include <nao_dcm_msgs/BoolServiceResponse.h>


namespace nao_dcm_msgs
{

struct BoolService
{

typedef BoolServiceRequest Request;
typedef BoolServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct BoolService
} // namespace nao_dcm_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::nao_dcm_msgs::BoolService > {
  static const char* value()
  {
    return "8c1211af706069c994c06e00eb59ac9e";
  }

  static const char* value(const ::nao_dcm_msgs::BoolService&) { return value(); }
};

template<>
struct DataType< ::nao_dcm_msgs::BoolService > {
  static const char* value()
  {
    return "nao_dcm_msgs/BoolService";
  }

  static const char* value(const ::nao_dcm_msgs::BoolService&) { return value(); }
};


// service_traits::MD5Sum< ::nao_dcm_msgs::BoolServiceRequest> should match 
// service_traits::MD5Sum< ::nao_dcm_msgs::BoolService > 
template<>
struct MD5Sum< ::nao_dcm_msgs::BoolServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::nao_dcm_msgs::BoolService >::value();
  }
  static const char* value(const ::nao_dcm_msgs::BoolServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::nao_dcm_msgs::BoolServiceRequest> should match 
// service_traits::DataType< ::nao_dcm_msgs::BoolService > 
template<>
struct DataType< ::nao_dcm_msgs::BoolServiceRequest>
{
  static const char* value()
  {
    return DataType< ::nao_dcm_msgs::BoolService >::value();
  }
  static const char* value(const ::nao_dcm_msgs::BoolServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::nao_dcm_msgs::BoolServiceResponse> should match 
// service_traits::MD5Sum< ::nao_dcm_msgs::BoolService > 
template<>
struct MD5Sum< ::nao_dcm_msgs::BoolServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::nao_dcm_msgs::BoolService >::value();
  }
  static const char* value(const ::nao_dcm_msgs::BoolServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::nao_dcm_msgs::BoolServiceResponse> should match 
// service_traits::DataType< ::nao_dcm_msgs::BoolService > 
template<>
struct DataType< ::nao_dcm_msgs::BoolServiceResponse>
{
  static const char* value()
  {
    return DataType< ::nao_dcm_msgs::BoolService >::value();
  }
  static const char* value(const ::nao_dcm_msgs::BoolServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NAO_DCM_MSGS_MESSAGE_BOOLSERVICE_H