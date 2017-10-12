/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/viki/school/PTT7/new-launch/ESA-PROJ/esa_proj/src/fontys_at_work/denpendencies/pr2_common/pr2_msgs/msg/AccelerometerState.msg
 *
 */


#ifndef PR2_MSGS_MESSAGE_ACCELEROMETERSTATE_H
#define PR2_MSGS_MESSAGE_ACCELEROMETERSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>

namespace pr2_msgs
{
template <class ContainerAllocator>
struct AccelerometerState_
{
  typedef AccelerometerState_<ContainerAllocator> Type;

  AccelerometerState_()
    : header()
    , samples()  {
    }
  AccelerometerState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , samples(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::geometry_msgs::Vector3_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Vector3_<ContainerAllocator> >::other >  _samples_type;
  _samples_type samples;




  typedef boost::shared_ptr< ::pr2_msgs::AccelerometerState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_msgs::AccelerometerState_<ContainerAllocator> const> ConstPtr;

}; // struct AccelerometerState_

typedef ::pr2_msgs::AccelerometerState_<std::allocator<void> > AccelerometerState;

typedef boost::shared_ptr< ::pr2_msgs::AccelerometerState > AccelerometerStatePtr;
typedef boost::shared_ptr< ::pr2_msgs::AccelerometerState const> AccelerometerStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_msgs::AccelerometerState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_msgs::AccelerometerState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'pr2_msgs': ['/home/viki/school/PTT7/new-launch/ESA-PROJ/esa_proj/src/fontys_at_work/denpendencies/pr2_common/pr2_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_msgs::AccelerometerState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_msgs::AccelerometerState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_msgs::AccelerometerState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_msgs::AccelerometerState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_msgs::AccelerometerState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_msgs::AccelerometerState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_msgs::AccelerometerState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "26492e97ed8c13252c4a85592d3e93fd";
  }

  static const char* value(const ::pr2_msgs::AccelerometerState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x26492e97ed8c1325ULL;
  static const uint64_t static_value2 = 0x2c4a85592d3e93fdULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_msgs::AccelerometerState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_msgs/AccelerometerState";
  }

  static const char* value(const ::pr2_msgs::AccelerometerState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_msgs::AccelerometerState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#This captures acceleration measurements from the 3-dof accelerometer in the hand of the PR2\n\
#Units are meters / second / second\n\
#Vectors should be <X, Y, Z> in the frame of the gripper\n\
\n\
#The communication with the accelerometer is at approximately 3khz, but there is only good timestamping every 1ms\n\
#This means the samples should be interpreted as all having come from the 1 ms before the time in the header\n\
\n\
Header header\n\
geometry_msgs/Vector3[] samples\n\
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
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::pr2_msgs::AccelerometerState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_msgs::AccelerometerState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.samples);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct AccelerometerState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_msgs::AccelerometerState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_msgs::AccelerometerState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "samples[]" << std::endl;
    for (size_t i = 0; i < v.samples.size(); ++i)
    {
      s << indent << "  samples[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "    ", v.samples[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_MSGS_MESSAGE_ACCELEROMETERSTATE_H
