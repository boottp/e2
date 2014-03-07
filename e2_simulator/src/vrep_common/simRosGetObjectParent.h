/* Auto-generated by genmsg_cpp for file /home/jackal/ros_workspace/src/vrep/vrep_common/srv/simRosGetObjectParent.srv */
#ifndef VREP_COMMON_SERVICE_SIMROSGETOBJECTPARENT_H
#define VREP_COMMON_SERVICE_SIMROSGETOBJECTPARENT_H
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
struct simRosGetObjectParentRequest_ {
  typedef simRosGetObjectParentRequest_<ContainerAllocator> Type;

  simRosGetObjectParentRequest_()
  : handle(0)
  {
  }

  simRosGetObjectParentRequest_(const ContainerAllocator& _alloc)
  : handle(0)
  {
  }

  typedef int32_t _handle_type;
  int32_t handle;


  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectParentRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectParentRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosGetObjectParentRequest
typedef  ::vrep_common::simRosGetObjectParentRequest_<std::allocator<void> > simRosGetObjectParentRequest;

typedef boost::shared_ptr< ::vrep_common::simRosGetObjectParentRequest> simRosGetObjectParentRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetObjectParentRequest const> simRosGetObjectParentRequestConstPtr;


template <class ContainerAllocator>
struct simRosGetObjectParentResponse_ {
  typedef simRosGetObjectParentResponse_<ContainerAllocator> Type;

  simRosGetObjectParentResponse_()
  : parentHandle(0)
  {
  }

  simRosGetObjectParentResponse_(const ContainerAllocator& _alloc)
  : parentHandle(0)
  {
  }

  typedef int32_t _parentHandle_type;
  int32_t parentHandle;


  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectParentResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectParentResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosGetObjectParentResponse
typedef  ::vrep_common::simRosGetObjectParentResponse_<std::allocator<void> > simRosGetObjectParentResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetObjectParentResponse> simRosGetObjectParentResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetObjectParentResponse const> simRosGetObjectParentResponseConstPtr;

struct simRosGetObjectParent
{

typedef simRosGetObjectParentRequest Request;
typedef simRosGetObjectParentResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct simRosGetObjectParent
} // namespace vrep_common

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosGetObjectParentRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosGetObjectParentRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetObjectParentRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "92535b678299d2bdda959704e78c275e";
  }

  static const char* value(const  ::vrep_common::simRosGetObjectParentRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x92535b678299d2bdULL;
  static const uint64_t static_value2 = 0xda959704e78c275eULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetObjectParentRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosGetObjectParentRequest";
  }

  static const char* value(const  ::vrep_common::simRosGetObjectParentRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetObjectParentRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
int32 handle\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosGetObjectParentRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosGetObjectParentRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosGetObjectParentResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosGetObjectParentResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetObjectParentResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3297095044ad4bf50ba768911050d931";
  }

  static const char* value(const  ::vrep_common::simRosGetObjectParentResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3297095044ad4bf5ULL;
  static const uint64_t static_value2 = 0x0ba768911050d931ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetObjectParentResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosGetObjectParentResponse";
  }

  static const char* value(const  ::vrep_common::simRosGetObjectParentResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetObjectParentResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 parentHandle\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosGetObjectParentResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosGetObjectParentResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetObjectParentRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.handle);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosGetObjectParentRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetObjectParentResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.parentHandle);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosGetObjectParentResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<vrep_common::simRosGetObjectParent> {
  static const char* value() 
  {
    return "854ff03c655805cf1e8924bdf3e10531";
  }

  static const char* value(const vrep_common::simRosGetObjectParent&) { return value(); } 
};

template<>
struct DataType<vrep_common::simRosGetObjectParent> {
  static const char* value() 
  {
    return "vrep_common/simRosGetObjectParent";
  }

  static const char* value(const vrep_common::simRosGetObjectParent&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosGetObjectParentRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "854ff03c655805cf1e8924bdf3e10531";
  }

  static const char* value(const vrep_common::simRosGetObjectParentRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosGetObjectParentRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosGetObjectParent";
  }

  static const char* value(const vrep_common::simRosGetObjectParentRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosGetObjectParentResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "854ff03c655805cf1e8924bdf3e10531";
  }

  static const char* value(const vrep_common::simRosGetObjectParentResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosGetObjectParentResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosGetObjectParent";
  }

  static const char* value(const vrep_common::simRosGetObjectParentResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_SERVICE_SIMROSGETOBJECTPARENT_H
