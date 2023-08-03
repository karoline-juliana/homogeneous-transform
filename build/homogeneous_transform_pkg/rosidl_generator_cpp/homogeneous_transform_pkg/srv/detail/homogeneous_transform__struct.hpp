// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from homogeneous_transform_pkg:srv/HomogeneousTransform.idl
// generated code does not contain a copyright notice

#ifndef HOMOGENEOUS_TRANSFORM_PKG__SRV__DETAIL__HOMOGENEOUS_TRANSFORM__STRUCT_HPP_
#define HOMOGENEOUS_TRANSFORM_PKG__SRV__DETAIL__HOMOGENEOUS_TRANSFORM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request'
#include "homogeneous_transform_pkg/msg/detail/transform_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__homogeneous_transform_pkg__srv__HomogeneousTransform_Request __attribute__((deprecated))
#else
# define DEPRECATED__homogeneous_transform_pkg__srv__HomogeneousTransform_Request __declspec(deprecated)
#endif

namespace homogeneous_transform_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HomogeneousTransform_Request_
{
  using Type = HomogeneousTransform_Request_<ContainerAllocator>;

  explicit HomogeneousTransform_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    (void)_init;
  }

  explicit HomogeneousTransform_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    homogeneous_transform_pkg::msg::TransformRequest_<ContainerAllocator>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const homogeneous_transform_pkg::msg::TransformRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    homogeneous_transform_pkg::srv::HomogeneousTransform_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const homogeneous_transform_pkg::srv::HomogeneousTransform_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      homogeneous_transform_pkg::srv::HomogeneousTransform_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      homogeneous_transform_pkg::srv::HomogeneousTransform_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__homogeneous_transform_pkg__srv__HomogeneousTransform_Request
    std::shared_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__homogeneous_transform_pkg__srv__HomogeneousTransform_Request
    std::shared_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HomogeneousTransform_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const HomogeneousTransform_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HomogeneousTransform_Request_

// alias to use template instance with default allocator
using HomogeneousTransform_Request =
  homogeneous_transform_pkg::srv::HomogeneousTransform_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace homogeneous_transform_pkg


// Include directives for member types
// Member 'response'
#include "homogeneous_transform_pkg/msg/detail/transform_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__homogeneous_transform_pkg__srv__HomogeneousTransform_Response __attribute__((deprecated))
#else
# define DEPRECATED__homogeneous_transform_pkg__srv__HomogeneousTransform_Response __declspec(deprecated)
#endif

namespace homogeneous_transform_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HomogeneousTransform_Response_
{
  using Type = HomogeneousTransform_Response_<ContainerAllocator>;

  explicit HomogeneousTransform_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit HomogeneousTransform_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    homogeneous_transform_pkg::msg::TransformResponse_<ContainerAllocator>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const homogeneous_transform_pkg::msg::TransformResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    homogeneous_transform_pkg::srv::HomogeneousTransform_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const homogeneous_transform_pkg::srv::HomogeneousTransform_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      homogeneous_transform_pkg::srv::HomogeneousTransform_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      homogeneous_transform_pkg::srv::HomogeneousTransform_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__homogeneous_transform_pkg__srv__HomogeneousTransform_Response
    std::shared_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__homogeneous_transform_pkg__srv__HomogeneousTransform_Response
    std::shared_ptr<homogeneous_transform_pkg::srv::HomogeneousTransform_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HomogeneousTransform_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const HomogeneousTransform_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HomogeneousTransform_Response_

// alias to use template instance with default allocator
using HomogeneousTransform_Response =
  homogeneous_transform_pkg::srv::HomogeneousTransform_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace homogeneous_transform_pkg

namespace homogeneous_transform_pkg
{

namespace srv
{

struct HomogeneousTransform
{
  using Request = homogeneous_transform_pkg::srv::HomogeneousTransform_Request;
  using Response = homogeneous_transform_pkg::srv::HomogeneousTransform_Response;
};

}  // namespace srv

}  // namespace homogeneous_transform_pkg

#endif  // HOMOGENEOUS_TRANSFORM_PKG__SRV__DETAIL__HOMOGENEOUS_TRANSFORM__STRUCT_HPP_
