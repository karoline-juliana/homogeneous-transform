// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from homogeneous_transform_pkg:msg/TransformResponse.idl
// generated code does not contain a copyright notice
#include "homogeneous_transform_pkg/msg/detail/transform_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
homogeneous_transform_pkg__msg__TransformResponse__init(homogeneous_transform_pkg__msg__TransformResponse * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // transformed_x
  // transformed_y
  // transformed_z
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    homogeneous_transform_pkg__msg__TransformResponse__fini(msg);
    return false;
  }
  return true;
}

void
homogeneous_transform_pkg__msg__TransformResponse__fini(homogeneous_transform_pkg__msg__TransformResponse * msg)
{
  if (!msg) {
    return;
  }
  // success
  // transformed_x
  // transformed_y
  // transformed_z
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
homogeneous_transform_pkg__msg__TransformResponse__are_equal(const homogeneous_transform_pkg__msg__TransformResponse * lhs, const homogeneous_transform_pkg__msg__TransformResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // transformed_x
  if (lhs->transformed_x != rhs->transformed_x) {
    return false;
  }
  // transformed_y
  if (lhs->transformed_y != rhs->transformed_y) {
    return false;
  }
  // transformed_z
  if (lhs->transformed_z != rhs->transformed_z) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
homogeneous_transform_pkg__msg__TransformResponse__copy(
  const homogeneous_transform_pkg__msg__TransformResponse * input,
  homogeneous_transform_pkg__msg__TransformResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // transformed_x
  output->transformed_x = input->transformed_x;
  // transformed_y
  output->transformed_y = input->transformed_y;
  // transformed_z
  output->transformed_z = input->transformed_z;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

homogeneous_transform_pkg__msg__TransformResponse *
homogeneous_transform_pkg__msg__TransformResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homogeneous_transform_pkg__msg__TransformResponse * msg = (homogeneous_transform_pkg__msg__TransformResponse *)allocator.allocate(sizeof(homogeneous_transform_pkg__msg__TransformResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(homogeneous_transform_pkg__msg__TransformResponse));
  bool success = homogeneous_transform_pkg__msg__TransformResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
homogeneous_transform_pkg__msg__TransformResponse__destroy(homogeneous_transform_pkg__msg__TransformResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    homogeneous_transform_pkg__msg__TransformResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
homogeneous_transform_pkg__msg__TransformResponse__Sequence__init(homogeneous_transform_pkg__msg__TransformResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homogeneous_transform_pkg__msg__TransformResponse * data = NULL;

  if (size) {
    data = (homogeneous_transform_pkg__msg__TransformResponse *)allocator.zero_allocate(size, sizeof(homogeneous_transform_pkg__msg__TransformResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = homogeneous_transform_pkg__msg__TransformResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        homogeneous_transform_pkg__msg__TransformResponse__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
homogeneous_transform_pkg__msg__TransformResponse__Sequence__fini(homogeneous_transform_pkg__msg__TransformResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      homogeneous_transform_pkg__msg__TransformResponse__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

homogeneous_transform_pkg__msg__TransformResponse__Sequence *
homogeneous_transform_pkg__msg__TransformResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homogeneous_transform_pkg__msg__TransformResponse__Sequence * array = (homogeneous_transform_pkg__msg__TransformResponse__Sequence *)allocator.allocate(sizeof(homogeneous_transform_pkg__msg__TransformResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = homogeneous_transform_pkg__msg__TransformResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
homogeneous_transform_pkg__msg__TransformResponse__Sequence__destroy(homogeneous_transform_pkg__msg__TransformResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    homogeneous_transform_pkg__msg__TransformResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
homogeneous_transform_pkg__msg__TransformResponse__Sequence__are_equal(const homogeneous_transform_pkg__msg__TransformResponse__Sequence * lhs, const homogeneous_transform_pkg__msg__TransformResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!homogeneous_transform_pkg__msg__TransformResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
homogeneous_transform_pkg__msg__TransformResponse__Sequence__copy(
  const homogeneous_transform_pkg__msg__TransformResponse__Sequence * input,
  homogeneous_transform_pkg__msg__TransformResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(homogeneous_transform_pkg__msg__TransformResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    homogeneous_transform_pkg__msg__TransformResponse * data =
      (homogeneous_transform_pkg__msg__TransformResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!homogeneous_transform_pkg__msg__TransformResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          homogeneous_transform_pkg__msg__TransformResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!homogeneous_transform_pkg__msg__TransformResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
