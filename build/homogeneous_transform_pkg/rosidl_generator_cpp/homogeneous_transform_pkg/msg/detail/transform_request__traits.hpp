// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from homogeneous_transform_pkg:msg/TransformRequest.idl
// generated code does not contain a copyright notice

#ifndef HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__TRAITS_HPP_
#define HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "homogeneous_transform_pkg/msg/detail/transform_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace homogeneous_transform_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const TransformRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TransformRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TransformRequest & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace homogeneous_transform_pkg

namespace rosidl_generator_traits
{

[[deprecated("use homogeneous_transform_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const homogeneous_transform_pkg::msg::TransformRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  homogeneous_transform_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use homogeneous_transform_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const homogeneous_transform_pkg::msg::TransformRequest & msg)
{
  return homogeneous_transform_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<homogeneous_transform_pkg::msg::TransformRequest>()
{
  return "homogeneous_transform_pkg::msg::TransformRequest";
}

template<>
inline const char * name<homogeneous_transform_pkg::msg::TransformRequest>()
{
  return "homogeneous_transform_pkg/msg/TransformRequest";
}

template<>
struct has_fixed_size<homogeneous_transform_pkg::msg::TransformRequest>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<homogeneous_transform_pkg::msg::TransformRequest>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<homogeneous_transform_pkg::msg::TransformRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__TRAITS_HPP_
