// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from homogeneous_transform_pkg:msg/TransformRequest.idl
// generated code does not contain a copyright notice

#ifndef HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__STRUCT_HPP_
#define HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__homogeneous_transform_pkg__msg__TransformRequest __attribute__((deprecated))
#else
# define DEPRECATED__homogeneous_transform_pkg__msg__TransformRequest __declspec(deprecated)
#endif

namespace homogeneous_transform_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TransformRequest_
{
  using Type = TransformRequest_<ContainerAllocator>;

  explicit TransformRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit TransformRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _angle_type =
    double;
  _angle_type angle;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;

  // setters for named parameter idiom
  Type & set__angle(
    const double & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    homogeneous_transform_pkg::msg::TransformRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const homogeneous_transform_pkg::msg::TransformRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<homogeneous_transform_pkg::msg::TransformRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<homogeneous_transform_pkg::msg::TransformRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      homogeneous_transform_pkg::msg::TransformRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<homogeneous_transform_pkg::msg::TransformRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      homogeneous_transform_pkg::msg::TransformRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<homogeneous_transform_pkg::msg::TransformRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<homogeneous_transform_pkg::msg::TransformRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<homogeneous_transform_pkg::msg::TransformRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__homogeneous_transform_pkg__msg__TransformRequest
    std::shared_ptr<homogeneous_transform_pkg::msg::TransformRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__homogeneous_transform_pkg__msg__TransformRequest
    std::shared_ptr<homogeneous_transform_pkg::msg::TransformRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TransformRequest_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const TransformRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TransformRequest_

// alias to use template instance with default allocator
using TransformRequest =
  homogeneous_transform_pkg::msg::TransformRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace homogeneous_transform_pkg

#endif  // HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__STRUCT_HPP_
