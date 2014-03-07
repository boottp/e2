/* Auto-generated by genmsg_cpp for file /home/jackal/ros_workspace/src/vrep/vrep_common/srv/simRosSetJointTargetPosition.srv */
#ifndef VREP_COMMON_SERVICE_SIMROSSETJOINTTARGETPOSITION_H
#define VREP_COMMON_SERVICE_SIMROSSETJOINTTARGETPOSITION_H
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
struct simRosSetJointTargetPositionRequest_ {
  typedef simRosSetJointTargetPositionRequest_<ContainerAllocator> Type;

  simRosSetJointTargetPositionRequest_()
  : handle(0)
  , targetPosition(0.0)
  {
  }

  simRosSetJointTargetPositionRequest_(const ContainerAllocator& _alloc)
  : handle(0)
  , targetPosition(0.0)
  {
  }

  typedef int32_t _handle_type;
  int32_t handle;

  typedef double _targetPosition_type;
  double targetPosition;


  typedef boost::shared_ptr< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosSetJointTargetPositionRequest
typedef  ::vrep_common::simRosSetJointTargetPositionRequest_<std::allocator<void> > simRosSetJointTargetPositionRequest;

typedef boost::shared_ptr< ::vrep_common::simRosSetJointTargetPositionRequest> simRosSetJointTargetPositionRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosSetJointTargetPositionRequest const> simRosSetJointTargetPositionRequestConstPtr;


template <class ContainerAllocator>
struct simRosSetJointTargetPositionResponse_ {
  typedef simRosSetJointTargetPositionResponse_<ContainerAllocator> Type;

  simRosSetJointTargetPositionResponse_()
  : result(0)
  {
  }

  simRosSetJointTargetPositionResponse_(const ContainerAllocator& _alloc)
  : result(0)
  {
  }

  typedef int32_t _result_type;
  int32_t result;


  typedef boost::shared_ptr< ::vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosSetJointTargetPositionResponse
typedef  ::vrep_common::simRosSetJointTargetPositionResponse_<std::allocator<void> > simRosSetJointTargetPositionResponse;

typedef boost::shared_ptr< ::vrep_common::simRosSetJointTargetPositionResponse> simRosSetJointTargetPositionResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosSetJointTargetPositionResponse const> simRosSetJointTargetPositionResponseConstPtr;

struct simRosSetJointTargetPosition
{

typedef simRosSetJointTargetPositionRequest Request;
typedef simRosSetJointTargetPositionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct simRosSetJointTargetPosition
} // namespace vrep_common

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6485fab2027885fabc22e244511b58c0";
  }

  static const char* value(const  ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6485fab2027885faULL;
  static const uint64_t static_value2 = 0xbc22e244511b58c0ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointTargetPositionRequest";
  }

  static const char* value(const  ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
int32 handle\n\
float64 targetPosition\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const  ::vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x034a8e20d6a30666ULL;
  static const uint64_t static_value2 = 0x5e3a5b340fab3f09ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointTargetPositionResponse";
  }

  static const char* value(const  ::vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 result\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.handle);
    stream.next(m.targetPosition);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosSetJointTargetPositionRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosSetJointTargetPositionResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<vrep_common::simRosSetJointTargetPosition> {
  static const char* value() 
  {
    return "b23bfbd3cc670ebc2b50d027597762b2";
  }

  static const char* value(const vrep_common::simRosSetJointTargetPosition&) { return value(); } 
};

template<>
struct DataType<vrep_common::simRosSetJointTargetPosition> {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointTargetPosition";
  }

  static const char* value(const vrep_common::simRosSetJointTargetPosition&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b23bfbd3cc670ebc2b50d027597762b2";
  }

  static const char* value(const vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointTargetPosition";
  }

  static const char* value(const vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b23bfbd3cc670ebc2b50d027597762b2";
  }

  static const char* value(const vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointTargetPosition";
  }

  static const char* value(const vrep_common::simRosSetJointTargetPositionResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_SERVICE_SIMROSSETJOINTTARGETPOSITION_H
