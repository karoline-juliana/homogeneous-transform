// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from homogeneous_transform_pkg:msg/TransformResponse.idl
// generated code does not contain a copyright notice

#ifndef HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__STRUCT_H_
#define HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TransformResponse in the package homogeneous_transform_pkg.
typedef struct homogeneous_transform_pkg__msg__TransformResponse
{
  bool success;
  double transformed_x;
  double transformed_y;
  double transformed_z;
  rosidl_runtime_c__String message;
} homogeneous_transform_pkg__msg__TransformResponse;

// Struct for a sequence of homogeneous_transform_pkg__msg__TransformResponse.
typedef struct homogeneous_transform_pkg__msg__TransformResponse__Sequence
{
  homogeneous_transform_pkg__msg__TransformResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} homogeneous_transform_pkg__msg__TransformResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__STRUCT_H_
