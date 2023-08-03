// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from homogeneous_transform_pkg:msg/TransformResponse.idl
// generated code does not contain a copyright notice

#ifndef HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__BUILDER_HPP_
#define HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "homogeneous_transform_pkg/msg/detail/transform_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace homogeneous_transform_pkg
{

namespace msg
{

namespace builder
{

class Init_TransformResponse_message
{
public:
  explicit Init_TransformResponse_message(::homogeneous_transform_pkg::msg::TransformResponse & msg)
  : msg_(msg)
  {}
  ::homogeneous_transform_pkg::msg::TransformResponse message(::homogeneous_transform_pkg::msg::TransformResponse::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::homogeneous_transform_pkg::msg::TransformResponse msg_;
};

class Init_TransformResponse_transformed_z
{
public:
  explicit Init_TransformResponse_transformed_z(::homogeneous_transform_pkg::msg::TransformResponse & msg)
  : msg_(msg)
  {}
  Init_TransformResponse_message transformed_z(::homogeneous_transform_pkg::msg::TransformResponse::_transformed_z_type arg)
  {
    msg_.transformed_z = std::move(arg);
    return Init_TransformResponse_message(msg_);
  }

private:
  ::homogeneous_transform_pkg::msg::TransformResponse msg_;
};

class Init_TransformResponse_transformed_y
{
public:
  explicit Init_TransformResponse_transformed_y(::homogeneous_transform_pkg::msg::TransformResponse & msg)
  : msg_(msg)
  {}
  Init_TransformResponse_transformed_z transformed_y(::homogeneous_transform_pkg::msg::TransformResponse::_transformed_y_type arg)
  {
    msg_.transformed_y = std::move(arg);
    return Init_TransformResponse_transformed_z(msg_);
  }

private:
  ::homogeneous_transform_pkg::msg::TransformResponse msg_;
};

class Init_TransformResponse_transformed_x
{
public:
  explicit Init_TransformResponse_transformed_x(::homogeneous_transform_pkg::msg::TransformResponse & msg)
  : msg_(msg)
  {}
  Init_TransformResponse_transformed_y transformed_x(::homogeneous_transform_pkg::msg::TransformResponse::_transformed_x_type arg)
  {
    msg_.transformed_x = std::move(arg);
    return Init_TransformResponse_transformed_y(msg_);
  }

private:
  ::homogeneous_transform_pkg::msg::TransformResponse msg_;
};

class Init_TransformResponse_success
{
public:
  Init_TransformResponse_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransformResponse_transformed_x success(::homogeneous_transform_pkg::msg::TransformResponse::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TransformResponse_transformed_x(msg_);
  }

private:
  ::homogeneous_transform_pkg::msg::TransformResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::homogeneous_transform_pkg::msg::TransformResponse>()
{
  return homogeneous_transform_pkg::msg::builder::Init_TransformResponse_success();
}

}  // namespace homogeneous_transform_pkg

#endif  // HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__BUILDER_HPP_
