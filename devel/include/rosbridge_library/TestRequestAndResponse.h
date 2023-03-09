// Generated by gencpp from file rosbridge_library/TestRequestAndResponse.msg
// DO NOT EDIT!


#ifndef ROSBRIDGE_LIBRARY_MESSAGE_TESTREQUESTANDRESPONSE_H
#define ROSBRIDGE_LIBRARY_MESSAGE_TESTREQUESTANDRESPONSE_H

#include <ros/service_traits.h>


#include <rosbridge_library/TestRequestAndResponseRequest.h>
#include <rosbridge_library/TestRequestAndResponseResponse.h>


namespace rosbridge_library
{

struct TestRequestAndResponse
{

typedef TestRequestAndResponseRequest Request;
typedef TestRequestAndResponseResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct TestRequestAndResponse
} // namespace rosbridge_library


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosbridge_library::TestRequestAndResponse > {
  static const char* value()
  {
    return "491d316f183df11876531749005b31d1";
  }

  static const char* value(const ::rosbridge_library::TestRequestAndResponse&) { return value(); }
};

template<>
struct DataType< ::rosbridge_library::TestRequestAndResponse > {
  static const char* value()
  {
    return "rosbridge_library/TestRequestAndResponse";
  }

  static const char* value(const ::rosbridge_library::TestRequestAndResponse&) { return value(); }
};


// service_traits::MD5Sum< ::rosbridge_library::TestRequestAndResponseRequest> should match
// service_traits::MD5Sum< ::rosbridge_library::TestRequestAndResponse >
template<>
struct MD5Sum< ::rosbridge_library::TestRequestAndResponseRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosbridge_library::TestRequestAndResponse >::value();
  }
  static const char* value(const ::rosbridge_library::TestRequestAndResponseRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosbridge_library::TestRequestAndResponseRequest> should match
// service_traits::DataType< ::rosbridge_library::TestRequestAndResponse >
template<>
struct DataType< ::rosbridge_library::TestRequestAndResponseRequest>
{
  static const char* value()
  {
    return DataType< ::rosbridge_library::TestRequestAndResponse >::value();
  }
  static const char* value(const ::rosbridge_library::TestRequestAndResponseRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosbridge_library::TestRequestAndResponseResponse> should match
// service_traits::MD5Sum< ::rosbridge_library::TestRequestAndResponse >
template<>
struct MD5Sum< ::rosbridge_library::TestRequestAndResponseResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosbridge_library::TestRequestAndResponse >::value();
  }
  static const char* value(const ::rosbridge_library::TestRequestAndResponseResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosbridge_library::TestRequestAndResponseResponse> should match
// service_traits::DataType< ::rosbridge_library::TestRequestAndResponse >
template<>
struct DataType< ::rosbridge_library::TestRequestAndResponseResponse>
{
  static const char* value()
  {
    return DataType< ::rosbridge_library::TestRequestAndResponse >::value();
  }
  static const char* value(const ::rosbridge_library::TestRequestAndResponseResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSBRIDGE_LIBRARY_MESSAGE_TESTREQUESTANDRESPONSE_H
