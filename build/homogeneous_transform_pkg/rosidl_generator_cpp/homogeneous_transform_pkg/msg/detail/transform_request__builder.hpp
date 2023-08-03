// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from homogeneous_transform_pkg:msg/TransformRequest.idl
// generated code does not contain a copyright notice

#ifndef HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__BUILDER_HPP_
#define HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "homogeneous_transform_pkg/msg/detail/transform_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace homogeneous_transform_pkg
{

namespace msg
{

namespace builder
{

class Init_TransformRequest_z
{
public:
  explicit Init_TransformRequest_z(::homogeneous_transform_pkg::msg::TransformRequest & msg)
  : msg_(msg)
  {}
  ::homogeneous_transform_pkg::msg::TransformRequest z(::homogeneous_transform_pkg::msg::TransformRequest::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::homogeneous_transform_pkg::msg::TransformRequest msg_;
};

class Init_TransformRequest_y
{
public:
  explicit Init_TransformRequest_y(::homogeneous_transform_pkg::msg::TransformRequest & msg)
  : msg_(msg)
  {}
  Init_TransformRequest_z y(::homogeneous_transform_pkg::msg::TransformRequest::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TransformRequest_z(msg_);
  }

private:
  ::homogeneous_transform_pkg::msg::TransformRequest msg_;
};

class Init_TransformRequest_x
{
public:
  explicit Init_TransformRequest_x(::homogeneous_transform_pkg::msg::TransformRequest & msg)
  : msg_(msg)
  {}
  Init_TransformRequest_y x(::homogeneous_transform_pkg::msg::TransformRequest::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TransformRequest_y(msg_);
  }

private:
  ::homogeneous_transform_pkg::msg::TransformRequest msg_;
};

class Init_TransformRequest_angle
{
public:
  Init_TransformRequest_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransformRequest_x angle(::homogeneous_transform_pkg::msg::TransformRequest::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_TransformRequest_x(msg_);
  }

private:
  ::homogeneous_transform_pkg::msg::TransformRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::homogeneous_transform_pkg::msg::TransformRequest>()
{
  return homogeneous_transform_pkg::msg::builder::Init_TransformRequest_angle();
}

}  // namespace homogeneous_transform_pkg

#endif  // HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__BUILDER_HPP_
