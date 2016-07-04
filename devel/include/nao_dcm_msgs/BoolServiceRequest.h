// Generated by gencpp from file nao_dcm_msgs/BoolServiceRequest.msg
// DO NOT EDIT!


#ifndef NAO_DCM_MSGS_MESSAGE_BOOLSERVICEREQUEST_H
#define NAO_DCM_MSGS_MESSAGE_BOOLSERVICEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nao_dcm_msgs
{
template <class ContainerAllocator>
struct BoolServiceRequest_
{
  typedef BoolServiceRequest_<ContainerAllocator> Type;

  BoolServiceRequest_()
    : enable(false)  {
    }
  BoolServiceRequest_(const ContainerAllocator& _alloc)
    : enable(false)  {
  (void)_alloc;
    }



   typedef uint8_t _enable_type;
  _enable_type enable;




  typedef boost::shared_ptr< ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct BoolServiceRequest_

typedef ::nao_dcm_msgs::BoolServiceRequest_<std::allocator<void> > BoolServiceRequest;

typedef boost::shared_ptr< ::nao_dcm_msgs::BoolServiceRequest > BoolServiceRequestPtr;
typedef boost::shared_ptr< ::nao_dcm_msgs::BoolServiceRequest const> BoolServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nao_dcm_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nao_dcm_msgs': ['/home/charles/catkin_ws/src/nao_dcm/nao_dcm_robot/nao_dcm_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8c1211af706069c994c06e00eb59ac9e";
  }

  static const char* value(const ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8c1211af706069c9ULL;
  static const uint64_t static_value2 = 0x94c06e00eb59ac9eULL;
};

template<class ContainerAllocator>
struct DataType< ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nao_dcm_msgs/BoolServiceRequest";
  }

  static const char* value(const ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool enable\n\
";
  }

  static const char* value(const ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enable);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct BoolServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nao_dcm_msgs::BoolServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAO_DCM_MSGS_MESSAGE_BOOLSERVICEREQUEST_H