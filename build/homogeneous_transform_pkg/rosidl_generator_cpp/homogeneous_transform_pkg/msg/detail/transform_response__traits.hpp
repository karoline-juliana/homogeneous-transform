// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from homogeneous_transform_pkg:msg/TransformResponse.idl
// generated code does not contain a copyright notice

#ifndef HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__TRAITS_HPP_
#define HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "homogeneous_transform_pkg/msg/detail/transform_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace homogeneous_transform_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const TransformResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: transformed_x
  {
    out << "transformed_x: ";
    rosidl_generator_traits::value_to_yaml(msg.transformed_x, out);
    out << ", ";
  }

  // member: transformed_y
  {
    out << "transformed_y: ";
    rosidl_generator_traits::value_to_yaml(msg.transformed_y, out);
    out << ", ";
  }

  // member: transformed_z
  {
    out << "transformed_z: ";
    rosidl_generator_traits::value_to_yaml(msg.transformed_z, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TransformResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: transformed_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transformed_x: ";
    rosidl_generator_traits::value_to_yaml(msg.transformed_x, out);
    out << "\n";
  }

  // member: transformed_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transformed_y: ";
    rosidl_generator_traits::value_to_yaml(msg.transformed_y, out);
    out << "\n";
  }

  // member: transformed_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transformed_z: ";
    rosidl_generator_traits::value_to_yaml(msg.transformed_z, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TransformResponse & msg, bool use_flow_style = false)
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
  const homogeneous_transform_pkg::msg::TransformResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  homogeneous_transform_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use homogeneous_transform_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const homogeneous_transform_pkg::msg::TransformResponse & msg)
{
  return homogeneous_transform_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<homogeneous_transform_pkg::msg::TransformResponse>()
{
  return "homogeneous_transform_pkg::msg::TransformResponse";
}

template<>
inline const char * name<homogeneous_transform_pkg::msg::TransformResponse>()
{
  return "homogeneous_transform_pkg/msg/TransformResponse";
}

template<>
struct has_fixed_size<homogeneous_transform_pkg::msg::TransformResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<homogeneous_transform_pkg::msg::TransformResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<homogeneous_transform_pkg::msg::TransformResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__TRAITS_HPP_
