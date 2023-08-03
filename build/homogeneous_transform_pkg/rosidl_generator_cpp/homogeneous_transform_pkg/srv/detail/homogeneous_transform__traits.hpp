// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from homogeneous_transform_pkg:srv/HomogeneousTransform.idl
// generated code does not contain a copyright notice

#ifndef HOMOGENEOUS_TRANSFORM_PKG__SRV__DETAIL__HOMOGENEOUS_TRANSFORM__TRAITS_HPP_
#define HOMOGENEOUS_TRANSFORM_PKG__SRV__DETAIL__HOMOGENEOUS_TRANSFORM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "homogeneous_transform_pkg/srv/detail/homogeneous_transform__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "homogeneous_transform_pkg/msg/detail/transform_request__traits.hpp"

namespace homogeneous_transform_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const HomogeneousTransform_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HomogeneousTransform_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_block_style_yaml(msg.request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HomogeneousTransform_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace homogeneous_transform_pkg

namespace rosidl_generator_traits
{

[[deprecated("use homogeneous_transform_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const homogeneous_transform_pkg::srv::HomogeneousTransform_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  homogeneous_transform_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use homogeneous_transform_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const homogeneous_transform_pkg::srv::HomogeneousTransform_Request & msg)
{
  return homogeneous_transform_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<homogeneous_transform_pkg::srv::HomogeneousTransform_Request>()
{
  return "homogeneous_transform_pkg::srv::HomogeneousTransform_Request";
}

template<>
inline const char * name<homogeneous_transform_pkg::srv::HomogeneousTransform_Request>()
{
  return "homogeneous_transform_pkg/srv/HomogeneousTransform_Request";
}

template<>
struct has_fixed_size<homogeneous_transform_pkg::srv::HomogeneousTransform_Request>
  : std::integral_constant<bool, has_fixed_size<homogeneous_transform_pkg::msg::TransformRequest>::value> {};

template<>
struct has_bounded_size<homogeneous_transform_pkg::srv::HomogeneousTransform_Request>
  : std::integral_constant<bool, has_bounded_size<homogeneous_transform_pkg::msg::TransformRequest>::value> {};

template<>
struct is_message<homogeneous_transform_pkg::srv::HomogeneousTransform_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "homogeneous_transform_pkg/msg/detail/transform_response__traits.hpp"

namespace homogeneous_transform_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const HomogeneousTransform_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HomogeneousTransform_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response:\n";
    to_block_style_yaml(msg.response, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HomogeneousTransform_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace homogeneous_transform_pkg

namespace rosidl_generator_traits
{

[[deprecated("use homogeneous_transform_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const homogeneous_transform_pkg::srv::HomogeneousTransform_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  homogeneous_transform_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use homogeneous_transform_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const homogeneous_transform_pkg::srv::HomogeneousTransform_Response & msg)
{
  return homogeneous_transform_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<homogeneous_transform_pkg::srv::HomogeneousTransform_Response>()
{
  return "homogeneous_transform_pkg::srv::HomogeneousTransform_Response";
}

template<>
inline const char * name<homogeneous_transform_pkg::srv::HomogeneousTransform_Response>()
{
  return "homogeneous_transform_pkg/srv/HomogeneousTransform_Response";
}

template<>
struct has_fixed_size<homogeneous_transform_pkg::srv::HomogeneousTransform_Response>
  : std::integral_constant<bool, has_fixed_size<homogeneous_transform_pkg::msg::TransformResponse>::value> {};

template<>
struct has_bounded_size<homogeneous_transform_pkg::srv::HomogeneousTransform_Response>
  : std::integral_constant<bool, has_bounded_size<homogeneous_transform_pkg::msg::TransformResponse>::value> {};

template<>
struct is_message<homogeneous_transform_pkg::srv::HomogeneousTransform_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<homogeneous_transform_pkg::srv::HomogeneousTransform>()
{
  return "homogeneous_transform_pkg::srv::HomogeneousTransform";
}

template<>
inline const char * name<homogeneous_transform_pkg::srv::HomogeneousTransform>()
{
  return "homogeneous_transform_pkg/srv/HomogeneousTransform";
}

template<>
struct has_fixed_size<homogeneous_transform_pkg::srv::HomogeneousTransform>
  : std::integral_constant<
    bool,
    has_fixed_size<homogeneous_transform_pkg::srv::HomogeneousTransform_Request>::value &&
    has_fixed_size<homogeneous_transform_pkg::srv::HomogeneousTransform_Response>::value
  >
{
};

template<>
struct has_bounded_size<homogeneous_transform_pkg::srv::HomogeneousTransform>
  : std::integral_constant<
    bool,
    has_bounded_size<homogeneous_transform_pkg::srv::HomogeneousTransform_Request>::value &&
    has_bounded_size<homogeneous_transform_pkg::srv::HomogeneousTransform_Response>::value
  >
{
};

template<>
struct is_service<homogeneous_transform_pkg::srv::HomogeneousTransform>
  : std::true_type
{
};

template<>
struct is_service_request<homogeneous_transform_pkg::srv::HomogeneousTransform_Request>
  : std::true_type
{
};

template<>
struct is_service_response<homogeneous_transform_pkg::srv::HomogeneousTransform_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HOMOGENEOUS_TRANSFORM_PKG__SRV__DETAIL__HOMOGENEOUS_TRANSFORM__TRAITS_HPP_
