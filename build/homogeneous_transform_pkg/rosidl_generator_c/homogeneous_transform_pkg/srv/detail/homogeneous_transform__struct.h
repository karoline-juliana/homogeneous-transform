// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from homogeneous_transform_pkg:srv/HomogeneousTransform.idl
// generated code does not contain a copyright notice

#ifndef HOMOGENEOUS_TRANSFORM_PKG__SRV__DETAIL__HOMOGENEOUS_TRANSFORM__STRUCT_H_
#define HOMOGENEOUS_TRANSFORM_PKG__SRV__DETAIL__HOMOGENEOUS_TRANSFORM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "homogeneous_transform_pkg/msg/detail/transform_request__struct.h"

/// Struct defined in srv/HomogeneousTransform in the package homogeneous_transform_pkg.
typedef struct homogeneous_transform_pkg__srv__HomogeneousTransform_Request
{
  homogeneous_transform_pkg__msg__TransformRequest request;
} homogeneous_transform_pkg__srv__HomogeneousTransform_Request;

// Struct for a sequence of homogeneous_transform_pkg__srv__HomogeneousTransform_Request.
typedef struct homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence
{
  homogeneous_transform_pkg__srv__HomogeneousTransform_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "homogeneous_transform_pkg/msg/detail/transform_response__struct.h"

/// Struct defined in srv/HomogeneousTransform in the package homogeneous_transform_pkg.
typedef struct homogeneous_transform_pkg__srv__HomogeneousTransform_Response
{
  homogeneous_transform_pkg__msg__TransformResponse response;
} homogeneous_transform_pkg__srv__HomogeneousTransform_Response;

// Struct for a sequence of homogeneous_transform_pkg__srv__HomogeneousTransform_Response.
typedef struct homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence
{
  homogeneous_transform_pkg__srv__HomogeneousTransform_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOMOGENEOUS_TRANSFORM_PKG__SRV__DETAIL__HOMOGENEOUS_TRANSFORM__STRUCT_H_
