// Generated by gencpp from file rosapi/TopicsAndRawTypesRequest.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_TOPICSANDRAWTYPESREQUEST_H
#define ROSAPI_MESSAGE_TOPICSANDRAWTYPESREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosapi
{
template <class ContainerAllocator>
struct TopicsAndRawTypesRequest_
{
  typedef TopicsAndRawTypesRequest_<ContainerAllocator> Type;

  TopicsAndRawTypesRequest_()
    {
    }
  TopicsAndRawTypesRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TopicsAndRawTypesRequest_

typedef ::rosapi::TopicsAndRawTypesRequest_<std::allocator<void> > TopicsAndRawTypesRequest;

typedef boost::shared_ptr< ::rosapi::TopicsAndRawTypesRequest > TopicsAndRawTypesRequestPtr;
typedef boost::shared_ptr< ::rosapi::TopicsAndRawTypesRequest const> TopicsAndRawTypesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace rosapi

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/TopicsAndRawTypesRequest";
  }

  static const char* value(const ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TopicsAndRawTypesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::rosapi::TopicsAndRawTypesRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_TOPICSANDRAWTYPESREQUEST_H
