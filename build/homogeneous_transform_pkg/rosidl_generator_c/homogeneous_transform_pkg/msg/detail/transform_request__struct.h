// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from homogeneous_transform_pkg:msg/TransformRequest.idl
// generated code does not contain a copyright notice

#ifndef HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__STRUCT_H_
#define HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TransformRequest in the package homogeneous_transform_pkg.
typedef struct homogeneous_transform_pkg__msg__TransformRequest
{
  double angle;
  double x;
  double y;
  double z;
} homogeneous_transform_pkg__msg__TransformRequest;

// Struct for a sequence of homogeneous_transform_pkg__msg__TransformRequest.
typedef struct homogeneous_transform_pkg__msg__TransformRequest__Sequence
{
  homogeneous_transform_pkg__msg__TransformRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} homogeneous_transform_pkg__msg__TransformRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__STRUCT_H_
