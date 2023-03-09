// Generated by gencpp from file rosapi/ServiceProvidersRequest.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_SERVICEPROVIDERSREQUEST_H
#define ROSAPI_MESSAGE_SERVICEPROVIDERSREQUEST_H


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
struct ServiceProvidersRequest_
{
  typedef ServiceProvidersRequest_<ContainerAllocator> Type;

  ServiceProvidersRequest_()
    : service()  {
    }
  ServiceProvidersRequest_(const ContainerAllocator& _alloc)
    : service(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _service_type;
  _service_type service;





  typedef boost::shared_ptr< ::rosapi::ServiceProvidersRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::ServiceProvidersRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ServiceProvidersRequest_

typedef ::rosapi::ServiceProvidersRequest_<std::allocator<void> > ServiceProvidersRequest;

typedef boost::shared_ptr< ::rosapi::ServiceProvidersRequest > ServiceProvidersRequestPtr;
typedef boost::shared_ptr< ::rosapi::ServiceProvidersRequest const> ServiceProvidersRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::ServiceProvidersRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::ServiceProvidersRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosapi::ServiceProvidersRequest_<ContainerAllocator1> & lhs, const ::rosapi::ServiceProvidersRequest_<ContainerAllocator2> & rhs)
{
  return lhs.service == rhs.service;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosapi::ServiceProvidersRequest_<ContainerAllocator1> & lhs, const ::rosapi::ServiceProvidersRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosapi

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::ServiceProvidersRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::ServiceProvidersRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::ServiceProvidersRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::ServiceProvidersRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::ServiceProvidersRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::ServiceProvidersRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::ServiceProvidersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1cbcfa13b08f6d36710b9af8741e6112";
  }

  static const char* value(const ::rosapi::ServiceProvidersRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1cbcfa13b08f6d36ULL;
  static const uint64_t static_value2 = 0x710b9af8741e6112ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::ServiceProvidersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/ServiceProvidersRequest";
  }

  static const char* value(const ::rosapi::ServiceProvidersRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::ServiceProvidersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string service\n"
;
  }

  static const char* value(const ::rosapi::ServiceProvidersRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::ServiceProvidersRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.service);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ServiceProvidersRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::ServiceProvidersRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosapi::ServiceProvidersRequest_<ContainerAllocator>& v)
  {
    s << indent << "service: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.service);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_SERVICEPROVIDERSREQUEST_H
