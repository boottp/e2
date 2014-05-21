/* Auto-generated by genmsg_cpp for file /home/e2/Desktop/TesiMandeZamponi/Project/robot_brain/msg/HighLevelData.msg */
#ifndef ROBOT_BRAIN_MESSAGE_HIGHLEVELDATA_H
#define ROBOT_BRAIN_MESSAGE_HIGHLEVELDATA_H
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

#include "std_msgs/Header.h"
#include "std_msgs/String.h"
#include "std_msgs/String.h"

namespace robot_brain
{
template <class ContainerAllocator>
struct HighLevelData_ {
  typedef HighLevelData_<ContainerAllocator> Type;

  HighLevelData_()
  : header()
  , primitives()
  , parameters()
  {
  }

  HighLevelData_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , primitives(_alloc)
  , parameters(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::std_msgs::String_<ContainerAllocator>  _primitives_type;
   ::std_msgs::String_<ContainerAllocator>  primitives;

  typedef  ::std_msgs::String_<ContainerAllocator>  _parameters_type;
   ::std_msgs::String_<ContainerAllocator>  parameters;


private:
  static const char* __s_getDataType_() { return "robot_brain/HighLevelData"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "18f2070099471189acbf4f0a469c7131"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Header header\n\
std_msgs/String primitives\n\
std_msgs/String parameters\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, primitives);
    ros::serialization::serialize(stream, parameters);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, primitives);
    ros::serialization::deserialize(stream, parameters);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(primitives);
    size += ros::serialization::serializationLength(parameters);
    return size;
  }

  typedef boost::shared_ptr< ::robot_brain::HighLevelData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_brain::HighLevelData_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HighLevelData
typedef  ::robot_brain::HighLevelData_<std::allocator<void> > HighLevelData;

typedef boost::shared_ptr< ::robot_brain::HighLevelData> HighLevelDataPtr;
typedef boost::shared_ptr< ::robot_brain::HighLevelData const> HighLevelDataConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::robot_brain::HighLevelData_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::robot_brain::HighLevelData_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace robot_brain

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::robot_brain::HighLevelData_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::robot_brain::HighLevelData_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::robot_brain::HighLevelData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "18f2070099471189acbf4f0a469c7131";
  }

  static const char* value(const  ::robot_brain::HighLevelData_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x18f2070099471189ULL;
  static const uint64_t static_value2 = 0xacbf4f0a469c7131ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_brain::HighLevelData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robot_brain/HighLevelData";
  }

  static const char* value(const  ::robot_brain::HighLevelData_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::robot_brain::HighLevelData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
std_msgs/String primitives\n\
std_msgs/String parameters\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
\n\
";
  }

  static const char* value(const  ::robot_brain::HighLevelData_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::robot_brain::HighLevelData_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::robot_brain::HighLevelData_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::robot_brain::HighLevelData_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.primitives);
    stream.next(m.parameters);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HighLevelData_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_brain::HighLevelData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::robot_brain::HighLevelData_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "primitives: ";
s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.primitives);
    s << indent << "parameters: ";
s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.parameters);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROBOT_BRAIN_MESSAGE_HIGHLEVELDATA_H

