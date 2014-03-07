/* Auto-generated by genmsg_cpp for file /home/jackal/ros_workspace/src/vrep/vrep_common/srv/simRosGetDistanceHandle.srv */
#ifndef VREP_COMMON_SERVICE_SIMROSGETDISTANCEHANDLE_H
#define VREP_COMMON_SERVICE_SIMROSGETDISTANCEHANDLE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace vrep_common
{
template <class ContainerAllocator>
struct simRosGetDistanceHandleRequest_ {
  typedef simRosGetDistanceHandleRequest_<ContainerAllocator> Type;

  simRosGetDistanceHandleRequest_()
  : distanceName()
  {
  }

  simRosGetDistanceHandleRequest_(const ContainerAllocator& _alloc)
  : distanceName(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _distanceName_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  distanceName;


  typedef boost::shared_ptr< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosGetDistanceHandleRequest
typedef  ::vrep_common::simRosGetDistanceHandleRequest_<std::allocator<void> > simRosGetDistanceHandleRequest;

typedef boost::shared_ptr< ::vrep_common::simRosGetDistanceHandleRequest> simRosGetDistanceHandleRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetDistanceHandleRequest const> simRosGetDistanceHandleRequestConstPtr;


template <class ContainerAllocator>
struct simRosGetDistanceHandleResponse_ {
  typedef simRosGetDistanceHandleResponse_<ContainerAllocator> Type;

  simRosGetDistanceHandleResponse_()
  : handle(0)
  {
  }

  simRosGetDistanceHandleResponse_(const ContainerAllocator& _alloc)
  : handle(0)
  {
  }

  typedef int32_t _handle_type;
  int32_t handle;


  typedef boost::shared_ptr< ::vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosGetDistanceHandleResponse
typedef  ::vrep_common::simRosGetDistanceHandleResponse_<std::allocator<void> > simRosGetDistanceHandleResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetDistanceHandleResponse> simRosGetDistanceHandleResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetDistanceHandleResponse const> simRosGetDistanceHandleResponseConstPtr;

struct simRosGetDistanceHandle
{

typedef simRosGetDistanceHandleRequest Request;
typedef simRosGetDistanceHandleResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct simRosGetDistanceHandle
} // namespace vrep_common

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "218566481395d1ececa0c02cd69f99ad";
  }

  static const char* value(const  ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x218566481395d1ecULL;
  static const uint64_t static_value2 = 0xeca0c02cd69f99adULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosGetDistanceHandleRequest";
  }

  static const char* value(const  ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
string distanceName\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "92535b678299d2bdda959704e78c275e";
  }

  static const char* value(const  ::vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x92535b678299d2bdULL;
  static const uint64_t static_value2 = 0xda959704e78c275eULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosGetDistanceHandleResponse";
  }

  static const char* value(const  ::vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 handle\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.distanceName);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosGetDistanceHandleRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.handle);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosGetDistanceHandleResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<vrep_common::simRosGetDistanceHandle> {
  static const char* value() 
  {
    return "78e0efe06bbf65717f2c9d16dc1a69dc";
  }

  static const char* value(const vrep_common::simRosGetDistanceHandle&) { return value(); } 
};

template<>
struct DataType<vrep_common::simRosGetDistanceHandle> {
  static const char* value() 
  {
    return "vrep_common/simRosGetDistanceHandle";
  }

  static const char* value(const vrep_common::simRosGetDistanceHandle&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "78e0efe06bbf65717f2c9d16dc1a69dc";
  }

  static const char* value(const vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosGetDistanceHandle";
  }

  static const char* value(const vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "78e0efe06bbf65717f2c9d16dc1a69dc";
  }

  static const char* value(const vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosGetDistanceHandle";
  }

  static const char* value(const vrep_common::simRosGetDistanceHandleResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_SERVICE_SIMROSGETDISTANCEHANDLE_H
