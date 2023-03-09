// Generated by gencpp from file rosapi/ServicesResponse.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_SERVICESRESPONSE_H
#define ROSAPI_MESSAGE_SERVICESRESPONSE_H


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
struct ServicesResponse_
{
  typedef ServicesResponse_<ContainerAllocator> Type;

  ServicesResponse_()
    : services()  {
    }
  ServicesResponse_(const ContainerAllocator& _alloc)
    : services(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _services_type;
  _services_type services;





  typedef boost::shared_ptr< ::rosapi::ServicesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::ServicesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ServicesResponse_

typedef ::rosapi::ServicesResponse_<std::allocator<void> > ServicesResponse;

typedef boost::shared_ptr< ::rosapi::ServicesResponse > ServicesResponsePtr;
typedef boost::shared_ptr< ::rosapi::ServicesResponse const> ServicesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::ServicesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::ServicesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosapi::ServicesResponse_<ContainerAllocator1> & lhs, const ::rosapi::ServicesResponse_<ContainerAllocator2> & rhs)
{
  return lhs.services == rhs.services;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosapi::ServicesResponse_<ContainerAllocator1> & lhs, const ::rosapi::ServicesResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosapi

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::ServicesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::ServicesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::ServicesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::ServicesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::ServicesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::ServicesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::ServicesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e44a7e7bcb900acadbcc28b132378f0c";
  }

  static const char* value(const ::rosapi::ServicesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe44a7e7bcb900acaULL;
  static const uint64_t static_value2 = 0xdbcc28b132378f0cULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::ServicesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/ServicesResponse";
  }

  static const char* value(const ::rosapi::ServicesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::ServicesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] services\n"
;
  }

  static const char* value(const ::rosapi::ServicesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::ServicesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.services);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ServicesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::ServicesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosapi::ServicesResponse_<ContainerAllocator>& v)
  {
    s << indent << "services[]" << std::endl;
    for (size_t i = 0; i < v.services.size(); ++i)
    {
      s << indent << "  services[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.services[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_SERVICESRESPONSE_H
