/* Auto-generated by genmsg_cpp for file /home/jackal/ros_workspace/src/vrep/vrep_common/srv/simRosReadCollision.srv */
#ifndef VREP_COMMON_SERVICE_SIMROSREADCOLLISION_H
#define VREP_COMMON_SERVICE_SIMROSREADCOLLISION_H
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
struct simRosReadCollisionRequest_ {
  typedef simRosReadCollisionRequest_<ContainerAllocator> Type;

  simRosReadCollisionRequest_()
  : handle(0)
  {
  }

  simRosReadCollisionRequest_(const ContainerAllocator& _alloc)
  : handle(0)
  {
  }

  typedef int32_t _handle_type;
  int32_t handle;


  typedef boost::shared_ptr< ::vrep_common::simRosReadCollisionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosReadCollisionRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosReadCollisionRequest
typedef  ::vrep_common::simRosReadCollisionRequest_<std::allocator<void> > simRosReadCollisionRequest;

typedef boost::shared_ptr< ::vrep_common::simRosReadCollisionRequest> simRosReadCollisionRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosReadCollisionRequest const> simRosReadCollisionRequestConstPtr;


template <class ContainerAllocator>
struct simRosReadCollisionResponse_ {
  typedef simRosReadCollisionResponse_<ContainerAllocator> Type;

  simRosReadCollisionResponse_()
  : collisionState(0)
  {
  }

  simRosReadCollisionResponse_(const ContainerAllocator& _alloc)
  : collisionState(0)
  {
  }

  typedef int32_t _collisionState_type;
  int32_t collisionState;


  typedef boost::shared_ptr< ::vrep_common::simRosReadCollisionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosReadCollisionResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosReadCollisionResponse
typedef  ::vrep_common::simRosReadCollisionResponse_<std::allocator<void> > simRosReadCollisionResponse;

typedef boost::shared_ptr< ::vrep_common::simRosReadCollisionResponse> simRosReadCollisionResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosReadCollisionResponse const> simRosReadCollisionResponseConstPtr;

struct simRosReadCollision
{

typedef simRosReadCollisionRequest Request;
typedef simRosReadCollisionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct simRosReadCollision
} // namespace vrep_common

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosReadCollisionRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosReadCollisionRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosReadCollisionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "92535b678299d2bdda959704e78c275e";
  }

  static const char* value(const  ::vrep_common::simRosReadCollisionRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x92535b678299d2bdULL;
  static const uint64_t static_value2 = 0xda959704e78c275eULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosReadCollisionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosReadCollisionRequest";
  }

  static const char* value(const  ::vrep_common::simRosReadCollisionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosReadCollisionRequest_<ContainerAllocator> > {
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

  static const char* value(const  ::vrep_common::simRosReadCollisionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosReadCollisionRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosReadCollisionResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosReadCollisionResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosReadCollisionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a2907c10b125ac1a987b8b14c578e5f6";
  }

  static const char* value(const  ::vrep_common::simRosReadCollisionResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa2907c10b125ac1aULL;
  static const uint64_t static_value2 = 0x987b8b14c578e5f6ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosReadCollisionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosReadCollisionResponse";
  }

  static const char* value(const  ::vrep_common::simRosReadCollisionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosReadCollisionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 collisionState\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosReadCollisionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosReadCollisionResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosReadCollisionRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.handle);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosReadCollisionRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosReadCollisionResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.collisionState);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosReadCollisionResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<vrep_common::simRosReadCollision> {
  static const char* value() 
  {
    return "37515f25a62d19573a6222165e612868";
  }

  static const char* value(const vrep_common::simRosReadCollision&) { return value(); } 
};

template<>
struct DataType<vrep_common::simRosReadCollision> {
  static const char* value() 
  {
    return "vrep_common/simRosReadCollision";
  }

  static const char* value(const vrep_common::simRosReadCollision&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosReadCollisionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "37515f25a62d19573a6222165e612868";
  }

  static const char* value(const vrep_common::simRosReadCollisionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosReadCollisionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosReadCollision";
  }

  static const char* value(const vrep_common::simRosReadCollisionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosReadCollisionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "37515f25a62d19573a6222165e612868";
  }

  static const char* value(const vrep_common::simRosReadCollisionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosReadCollisionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosReadCollision";
  }

  static const char* value(const vrep_common::simRosReadCollisionResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_SERVICE_SIMROSREADCOLLISION_H

