// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from homogeneous_transform_pkg:srv/HomogeneousTransform.idl
// generated code does not contain a copyright notice

#ifndef HOMOGENEOUS_TRANSFORM_PKG__SRV__DETAIL__HOMOGENEOUS_TRANSFORM__BUILDER_HPP_
#define HOMOGENEOUS_TRANSFORM_PKG__SRV__DETAIL__HOMOGENEOUS_TRANSFORM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "homogeneous_transform_pkg/srv/detail/homogeneous_transform__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace homogeneous_transform_pkg
{

namespace srv
{

namespace builder
{

class Init_HomogeneousTransform_Request_request
{
public:
  Init_HomogeneousTransform_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::homogeneous_transform_pkg::srv::HomogeneousTransform_Request request(::homogeneous_transform_pkg::srv::HomogeneousTransform_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::homogeneous_transform_pkg::srv::HomogeneousTransform_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::homogeneous_transform_pkg::srv::HomogeneousTransform_Request>()
{
  return homogeneous_transform_pkg::srv::builder::Init_HomogeneousTransform_Request_request();
}

}  // namespace homogeneous_transform_pkg


namespace homogeneous_transform_pkg
{

namespace srv
{

namespace builder
{

class Init_HomogeneousTransform_Response_response
{
public:
  Init_HomogeneousTransform_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::homogeneous_transform_pkg::srv::HomogeneousTransform_Response response(::homogeneous_transform_pkg::srv::HomogeneousTransform_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::homogeneous_transform_pkg::srv::HomogeneousTransform_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::homogeneous_transform_pkg::srv::HomogeneousTransform_Response>()
{
  return homogeneous_transform_pkg::srv::builder::Init_HomogeneousTransform_Response_response();
}

}  // namespace homogeneous_transform_pkg

#endif  // HOMOGENEOUS_TRANSFORM_PKG__SRV__DETAIL__HOMOGENEOUS_TRANSFORM__BUILDER_HPP_
