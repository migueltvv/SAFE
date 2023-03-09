// Generated by gencpp from file rosapi/TopicTypeResponse.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_TOPICTYPERESPONSE_H
#define ROSAPI_MESSAGE_TOPICTYPERESPONSE_H


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
struct TopicTypeResponse_
{
  typedef TopicTypeResponse_<ContainerAllocator> Type;

  TopicTypeResponse_()
    : type()  {
    }
  TopicTypeResponse_(const ContainerAllocator& _alloc)
    : type(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _type_type;
  _type_type type;





  typedef boost::shared_ptr< ::rosapi::TopicTypeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::TopicTypeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TopicTypeResponse_

typedef ::rosapi::TopicTypeResponse_<std::allocator<void> > TopicTypeResponse;

typedef boost::shared_ptr< ::rosapi::TopicTypeResponse > TopicTypeResponsePtr;
typedef boost::shared_ptr< ::rosapi::TopicTypeResponse const> TopicTypeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::TopicTypeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::TopicTypeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosapi::TopicTypeResponse_<ContainerAllocator1> & lhs, const ::rosapi::TopicTypeResponse_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosapi::TopicTypeResponse_<ContainerAllocator1> & lhs, const ::rosapi::TopicTypeResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosapi

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::TopicTypeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::TopicTypeResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::TopicTypeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::TopicTypeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::TopicTypeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::TopicTypeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::TopicTypeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dc67331de85cf97091b7d45e5c64ab75";
  }

  static const char* value(const ::rosapi::TopicTypeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdc67331de85cf970ULL;
  static const uint64_t static_value2 = 0x91b7d45e5c64ab75ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::TopicTypeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/TopicTypeResponse";
  }

  static const char* value(const ::rosapi::TopicTypeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::TopicTypeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string type\n"
;
  }

  static const char* value(const ::rosapi::TopicTypeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::TopicTypeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TopicTypeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::TopicTypeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosapi::TopicTypeResponse_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_TOPICTYPERESPONSE_H
