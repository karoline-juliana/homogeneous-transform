// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from homogeneous_transform_pkg:msg/TransformRequest.idl
// generated code does not contain a copyright notice

#ifndef HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__FUNCTIONS_H_
#define HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "homogeneous_transform_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "homogeneous_transform_pkg/msg/detail/transform_request__struct.h"

/// Initialize msg/TransformRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * homogeneous_transform_pkg__msg__TransformRequest
 * )) before or use
 * homogeneous_transform_pkg__msg__TransformRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
bool
homogeneous_transform_pkg__msg__TransformRequest__init(homogeneous_transform_pkg__msg__TransformRequest * msg);

/// Finalize msg/TransformRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
void
homogeneous_transform_pkg__msg__TransformRequest__fini(homogeneous_transform_pkg__msg__TransformRequest * msg);

/// Create msg/TransformRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * homogeneous_transform_pkg__msg__TransformRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
homogeneous_transform_pkg__msg__TransformRequest *
homogeneous_transform_pkg__msg__TransformRequest__create();

/// Destroy msg/TransformRequest message.
/**
 * It calls
 * homogeneous_transform_pkg__msg__TransformRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
void
homogeneous_transform_pkg__msg__TransformRequest__destroy(homogeneous_transform_pkg__msg__TransformRequest * msg);

/// Check for msg/TransformRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
bool
homogeneous_transform_pkg__msg__TransformRequest__are_equal(const homogeneous_transform_pkg__msg__TransformRequest * lhs, const homogeneous_transform_pkg__msg__TransformRequest * rhs);

/// Copy a msg/TransformRequest message.
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
homogeneous_transform_pkg__msg__TransformRequest__copy(
  const homogeneous_transform_pkg__msg__TransformRequest * input,
  homogeneous_transform_pkg__msg__TransformRequest * output);

/// Initialize array of msg/TransformRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * homogeneous_transform_pkg__msg__TransformRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
bool
homogeneous_transform_pkg__msg__TransformRequest__Sequence__init(homogeneous_transform_pkg__msg__TransformRequest__Sequence * array, size_t size);

/// Finalize array of msg/TransformRequest messages.
/**
 * It calls
 * homogeneous_transform_pkg__msg__TransformRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
void
homogeneous_transform_pkg__msg__TransformRequest__Sequence__fini(homogeneous_transform_pkg__msg__TransformRequest__Sequence * array);

/// Create array of msg/TransformRequest messages.
/**
 * It allocates the memory for the array and calls
 * homogeneous_transform_pkg__msg__TransformRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
homogeneous_transform_pkg__msg__TransformRequest__Sequence *
homogeneous_transform_pkg__msg__TransformRequest__Sequence__create(size_t size);

/// Destroy array of msg/TransformRequest messages.
/**
 * It calls
 * homogeneous_transform_pkg__msg__TransformRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
void
homogeneous_transform_pkg__msg__TransformRequest__Sequence__destroy(homogeneous_transform_pkg__msg__TransformRequest__Sequence * array);

/// Check for msg/TransformRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_homogeneous_transform_pkg
bool
homogeneous_transform_pkg__msg__TransformRequest__Sequence__are_equal(const homogeneous_transform_pkg__msg__TransformRequest__Sequence * lhs, const homogeneous_transform_pkg__msg__TransformRequest__Sequence * rhs);

/// Copy an array of msg/TransformRequest messages.
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
homogeneous_transform_pkg__msg__TransformRequest__Sequence__copy(
  const homogeneous_transform_pkg__msg__TransformRequest__Sequence * input,
  homogeneous_transform_pkg__msg__TransformRequest__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HOMOGENEOUS_TRANSFORM_PKG__MSG__DETAIL__TRANSFORM_REQUEST__FUNCTIONS_H_
