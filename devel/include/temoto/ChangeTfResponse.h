// Generated by gencpp from file temoto/ChangeTfResponse.msg
// DO NOT EDIT!


#ifndef TEMOTO_MESSAGE_CHANGETFRESPONSE_H
#define TEMOTO_MESSAGE_CHANGETFRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace temoto
{
template <class ContainerAllocator>
struct ChangeTfResponse_
{
  typedef ChangeTfResponse_<ContainerAllocator> Type;

  ChangeTfResponse_()
    {
    }
  ChangeTfResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::temoto::ChangeTfResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::temoto::ChangeTfResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ChangeTfResponse_

typedef ::temoto::ChangeTfResponse_<std::allocator<void> > ChangeTfResponse;

typedef boost::shared_ptr< ::temoto::ChangeTfResponse > ChangeTfResponsePtr;
typedef boost::shared_ptr< ::temoto::ChangeTfResponse const> ChangeTfResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::temoto::ChangeTfResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::temoto::ChangeTfResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace temoto

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'temoto': ['/home/conor/catkin_ws/src/temoto_intuitive_teleoperator/temoto/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::temoto::ChangeTfResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::temoto::ChangeTfResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::temoto::ChangeTfResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::temoto::ChangeTfResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::temoto::ChangeTfResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::temoto::ChangeTfResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::temoto::ChangeTfResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::temoto::ChangeTfResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::temoto::ChangeTfResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "temoto/ChangeTfResponse";
  }

  static const char* value(const ::temoto::ChangeTfResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::temoto::ChangeTfResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::temoto::ChangeTfResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::temoto::ChangeTfResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChangeTfResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::temoto::ChangeTfResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::temoto::ChangeTfResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TEMOTO_MESSAGE_CHANGETFRESPONSE_H