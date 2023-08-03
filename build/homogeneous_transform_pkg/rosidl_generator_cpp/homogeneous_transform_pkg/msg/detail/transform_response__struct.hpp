// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from homogeneous_transform_pkg:msg/TransformResponse.idl
// generated code does not contain a copyright notice

#ifndef HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__STRUCT_HPP_
#define HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__homogeneous_transform_pkg__msg__TransformResponse __attribute__((deprecated))
#else
# define DEPRECATED__homogeneous_transform_pkg__msg__TransformResponse __declspec(deprecated)
#endif

namespace homogeneous_transform_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TransformResponse_
{
  using Type = TransformResponse_<ContainerAllocator>;

  explicit TransformResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->transformed_x = 0.0;
      this->transformed_y = 0.0;
      this->transformed_z = 0.0;
      this->message = "";
    }
  }

  explicit TransformResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->transformed_x = 0.0;
      this->transformed_y = 0.0;
      this->transformed_z = 0.0;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _transformed_x_type =
    double;
  _transformed_x_type transformed_x;
  using _transformed_y_type =
    double;
  _transformed_y_type transformed_y;
  using _transformed_z_type =
    double;
  _transformed_z_type transformed_z;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__transformed_x(
    const double & _arg)
  {
    this->transformed_x = _arg;
    return *this;
  }
  Type & set__transformed_y(
    const double & _arg)
  {
    this->transformed_y = _arg;
    return *this;
  }
  Type & set__transformed_z(
    const double & _arg)
  {
    this->transformed_z = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    homogeneous_transform_pkg::msg::TransformResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const homogeneous_transform_pkg::msg::TransformResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<homogeneous_transform_pkg::msg::TransformResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<homogeneous_transform_pkg::msg::TransformResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      homogeneous_transform_pkg::msg::TransformResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<homogeneous_transform_pkg::msg::TransformResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      homogeneous_transform_pkg::msg::TransformResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<homogeneous_transform_pkg::msg::TransformResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<homogeneous_transform_pkg::msg::TransformResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<homogeneous_transform_pkg::msg::TransformResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__homogeneous_transform_pkg__msg__TransformResponse
    std::shared_ptr<homogeneous_transform_pkg::msg::TransformResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__homogeneous_transform_pkg__msg__TransformResponse
    std::shared_ptr<homogeneous_transform_pkg::msg::TransformResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TransformResponse_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->transformed_x != other.transformed_x) {
      return false;
    }
    if (this->transformed_y != other.transformed_y) {
      return false;
    }
    if (this->transformed_z != other.transformed_z) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const TransformResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TransformResponse_

// alias to use template instance with default allocator
using TransformResponse =
  homogeneous_transform_pkg::msg::TransformResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace homogeneous_transform_pkg

#endif  // HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__STRUCT_HPP_
