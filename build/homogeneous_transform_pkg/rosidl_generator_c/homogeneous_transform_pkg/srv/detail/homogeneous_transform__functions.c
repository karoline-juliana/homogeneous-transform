// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from homogeneous_transform_pkg:srv/HomogeneousTransform.idl
// generated code does not contain a copyright notice
#include "homogeneous_transform_pkg/srv/detail/homogeneous_transform__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `request`
#include "homogeneous_transform_pkg/msg/detail/transform_request__functions.h"

bool
homogeneous_transform_pkg__srv__HomogeneousTransform_Request__init(homogeneous_transform_pkg__srv__HomogeneousTransform_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!homogeneous_transform_pkg__msg__TransformRequest__init(&msg->request)) {
    homogeneous_transform_pkg__srv__HomogeneousTransform_Request__fini(msg);
    return false;
  }
  return true;
}

void
homogeneous_transform_pkg__srv__HomogeneousTransform_Request__fini(homogeneous_transform_pkg__srv__HomogeneousTransform_Request * msg)
{
  if (!msg) {
    return;
  }
  // request
  homogeneous_transform_pkg__msg__TransformRequest__fini(&msg->request);
}

bool
homogeneous_transform_pkg__srv__HomogeneousTransform_Request__are_equal(const homogeneous_transform_pkg__srv__HomogeneousTransform_Request * lhs, const homogeneous_transform_pkg__srv__HomogeneousTransform_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (!homogeneous_transform_pkg__msg__TransformRequest__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  return true;
}

bool
homogeneous_transform_pkg__srv__HomogeneousTransform_Request__copy(
  const homogeneous_transform_pkg__srv__HomogeneousTransform_Request * input,
  homogeneous_transform_pkg__srv__HomogeneousTransform_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  if (!homogeneous_transform_pkg__msg__TransformRequest__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  return true;
}

homogeneous_transform_pkg__srv__HomogeneousTransform_Request *
homogeneous_transform_pkg__srv__HomogeneousTransform_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homogeneous_transform_pkg__srv__HomogeneousTransform_Request * msg = (homogeneous_transform_pkg__srv__HomogeneousTransform_Request *)allocator.allocate(sizeof(homogeneous_transform_pkg__srv__HomogeneousTransform_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(homogeneous_transform_pkg__srv__HomogeneousTransform_Request));
  bool success = homogeneous_transform_pkg__srv__HomogeneousTransform_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
homogeneous_transform_pkg__srv__HomogeneousTransform_Request__destroy(homogeneous_transform_pkg__srv__HomogeneousTransform_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    homogeneous_transform_pkg__srv__HomogeneousTransform_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence__init(homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homogeneous_transform_pkg__srv__HomogeneousTransform_Request * data = NULL;

  if (size) {
    data = (homogeneous_transform_pkg__srv__HomogeneousTransform_Request *)allocator.zero_allocate(size, sizeof(homogeneous_transform_pkg__srv__HomogeneousTransform_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = homogeneous_transform_pkg__srv__HomogeneousTransform_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        homogeneous_transform_pkg__srv__HomogeneousTransform_Request__fini(&data[i - 1]);
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
homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence__fini(homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence * array)
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
      homogeneous_transform_pkg__srv__HomogeneousTransform_Request__fini(&array->data[i]);
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

homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence *
homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence * array = (homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence *)allocator.allocate(sizeof(homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence__destroy(homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence__are_equal(const homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence * lhs, const homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!homogeneous_transform_pkg__srv__HomogeneousTransform_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence__copy(
  const homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence * input,
  homogeneous_transform_pkg__srv__HomogeneousTransform_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(homogeneous_transform_pkg__srv__HomogeneousTransform_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    homogeneous_transform_pkg__srv__HomogeneousTransform_Request * data =
      (homogeneous_transform_pkg__srv__HomogeneousTransform_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!homogeneous_transform_pkg__srv__HomogeneousTransform_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          homogeneous_transform_pkg__srv__HomogeneousTransform_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!homogeneous_transform_pkg__srv__HomogeneousTransform_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
#include "homogeneous_transform_pkg/msg/detail/transform_response__functions.h"

bool
homogeneous_transform_pkg__srv__HomogeneousTransform_Response__init(homogeneous_transform_pkg__srv__HomogeneousTransform_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!homogeneous_transform_pkg__msg__TransformResponse__init(&msg->response)) {
    homogeneous_transform_pkg__srv__HomogeneousTransform_Response__fini(msg);
    return false;
  }
  return true;
}

void
homogeneous_transform_pkg__srv__HomogeneousTransform_Response__fini(homogeneous_transform_pkg__srv__HomogeneousTransform_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  homogeneous_transform_pkg__msg__TransformResponse__fini(&msg->response);
}

bool
homogeneous_transform_pkg__srv__HomogeneousTransform_Response__are_equal(const homogeneous_transform_pkg__srv__HomogeneousTransform_Response * lhs, const homogeneous_transform_pkg__srv__HomogeneousTransform_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!homogeneous_transform_pkg__msg__TransformResponse__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
homogeneous_transform_pkg__srv__HomogeneousTransform_Response__copy(
  const homogeneous_transform_pkg__srv__HomogeneousTransform_Response * input,
  homogeneous_transform_pkg__srv__HomogeneousTransform_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!homogeneous_transform_pkg__msg__TransformResponse__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

homogeneous_transform_pkg__srv__HomogeneousTransform_Response *
homogeneous_transform_pkg__srv__HomogeneousTransform_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homogeneous_transform_pkg__srv__HomogeneousTransform_Response * msg = (homogeneous_transform_pkg__srv__HomogeneousTransform_Response *)allocator.allocate(sizeof(homogeneous_transform_pkg__srv__HomogeneousTransform_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(homogeneous_transform_pkg__srv__HomogeneousTransform_Response));
  bool success = homogeneous_transform_pkg__srv__HomogeneousTransform_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
homogeneous_transform_pkg__srv__HomogeneousTransform_Response__destroy(homogeneous_transform_pkg__srv__HomogeneousTransform_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    homogeneous_transform_pkg__srv__HomogeneousTransform_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence__init(homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homogeneous_transform_pkg__srv__HomogeneousTransform_Response * data = NULL;

  if (size) {
    data = (homogeneous_transform_pkg__srv__HomogeneousTransform_Response *)allocator.zero_allocate(size, sizeof(homogeneous_transform_pkg__srv__HomogeneousTransform_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = homogeneous_transform_pkg__srv__HomogeneousTransform_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        homogeneous_transform_pkg__srv__HomogeneousTransform_Response__fini(&data[i - 1]);
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
homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence__fini(homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence * array)
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
      homogeneous_transform_pkg__srv__HomogeneousTransform_Response__fini(&array->data[i]);
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

homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence *
homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence * array = (homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence *)allocator.allocate(sizeof(homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence__destroy(homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence__are_equal(const homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence * lhs, const homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!homogeneous_transform_pkg__srv__HomogeneousTransform_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence__copy(
  const homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence * input,
  homogeneous_transform_pkg__srv__HomogeneousTransform_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(homogeneous_transform_pkg__srv__HomogeneousTransform_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    homogeneous_transform_pkg__srv__HomogeneousTransform_Response * data =
      (homogeneous_transform_pkg__srv__HomogeneousTransform_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!homogeneous_transform_pkg__srv__HomogeneousTransform_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          homogeneous_transform_pkg__srv__HomogeneousTransform_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!homogeneous_transform_pkg__srv__HomogeneousTransform_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
