// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from homogeneous_transform_pkg:msg/TransformResponse.idl
// generated code does not contain a copyright notice

#ifndef HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__FUNCTIONS_H_
#define HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "homogeneous_transform_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "homogeneous_transform_pkg/msg/detail/transform_response__struct.h"

/// Initialize msg/TransformResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * homogeneous_transform_pkg__msg__TransformResponse
 * )) before or use
 * homogeneous_transform_pkg__msg__TransformResponse__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
bool
homogeneous_transform_pkg__msg__TransformResponse__init(homogeneous_transform_pkg__msg__TransformResponse * msg);

/// Finalize msg/TransformResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
void
homogeneous_transform_pkg__msg__TransformResponse__fini(homogeneous_transform_pkg__msg__TransformResponse * msg);

/// Create msg/TransformResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * homogeneous_transform_pkg__msg__TransformResponse__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
homogeneous_transform_pkg__msg__TransformResponse *
homogeneous_transform_pkg__msg__TransformResponse__create();

/// Destroy msg/TransformResponse message.
/**
 * It calls
 * homogeneous_transform_pkg__msg__TransformResponse__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
void
homogeneous_transform_pkg__msg__TransformResponse__destroy(homogeneous_transform_pkg__msg__TransformResponse * msg);

/// Check for msg/TransformResponse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
bool
homogeneous_transform_pkg__msg__TransformResponse__are_equal(const homogeneous_transform_pkg__msg__TransformResponse * lhs, const homogeneous_transform_pkg__msg__TransformResponse * rhs);

/// Copy a msg/TransformResponse message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
bool
homogeneous_transform_pkg__msg__TransformResponse__copy(
  const homogeneous_transform_pkg__msg__TransformResponse * input,
  homogeneous_transform_pkg__msg__TransformResponse * output);

/// Initialize array of msg/TransformResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * homogeneous_transform_pkg__msg__TransformResponse__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
bool
homogeneous_transform_pkg__msg__TransformResponse__Sequence__init(homogeneous_transform_pkg__msg__TransformResponse__Sequence * array, size_t size);

/// Finalize array of msg/TransformResponse messages.
/**
 * It calls
 * homogeneous_transform_pkg__msg__TransformResponse__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
void
homogeneous_transform_pkg__msg__TransformResponse__Sequence__fini(homogeneous_transform_pkg__msg__TransformResponse__Sequence * array);

/// Create array of msg/TransformResponse messages.
/**
 * It allocates the memory for the array and calls
 * homogeneous_transform_pkg__msg__TransformResponse__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
homogeneous_transform_pkg__msg__TransformResponse__Sequence *
homogeneous_transform_pkg__msg__TransformResponse__Sequence__create(size_t size);

/// Destroy array of msg/TransformResponse messages.
/**
 * It calls
 * homogeneous_transform_pkg__msg__TransformResponse__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
void
homogeneous_transform_pkg__msg__TransformResponse__Sequence__destroy(homogeneous_transform_pkg__msg__TransformResponse__Sequence * array);

/// Check for msg/TransformResponse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
bool
homogeneous_transform_pkg__msg__TransformResponse__Sequence__are_equal(const homogeneous_transform_pkg__msg__TransformResponse__Sequence * lhs, const homogeneous_transform_pkg__msg__TransformResponse__Sequence * rhs);

/// Copy an array of msg/TransformResponse messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
bool
homogeneous_transform_pkg__msg__TransformResponse__Sequence__copy(
  const homogeneous_transform_pkg__msg__TransformResponse__Sequence * input,
  homogeneous_transform_pkg__msg__TransformResponse__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_RESPONSE__FUNCTIONS_H_
