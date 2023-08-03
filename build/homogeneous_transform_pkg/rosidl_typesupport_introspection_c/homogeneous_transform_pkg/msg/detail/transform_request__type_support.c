// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from homogeneous_transform_pkg:msg/TransformRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "homogeneous_transform_pkg/msg/detail/transform_request__rosidl_typesupport_introspection_c.h"
#include "homogeneous_transform_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "homogeneous_transform_pkg/msg/detail/transform_request__functions.h"
#include "homogeneous_transform_pkg/msg/detail/transform_request__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void homogeneous_transform_pkg__msg__TransformRequest__rosidl_typesupport_introspection_c__TransformRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  homogeneous_transform_pkg__msg__TransformRequest__init(message_memory);
}

void homogeneous_transform_pkg__msg__TransformRequest__rosidl_typesupport_introspection_c__TransformRequest_fini_function(void * message_memory)
{
  homogeneous_transform_pkg__msg__TransformRequest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember homogeneous_transform_pkg__msg__TransformRequest__rosidl_typesupport_introspection_c__TransformRequest_message_member_array[4] = {
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homogeneous_transform_pkg__msg__TransformRequest, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homogeneous_transform_pkg__msg__TransformRequest, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homogeneous_transform_pkg__msg__TransformRequest, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homogeneous_transform_pkg__msg__TransformRequest, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers homogeneous_transform_pkg__msg__TransformRequest__rosidl_typesupport_introspection_c__TransformRequest_message_members = {
  "homogeneous_transform_pkg__msg",  // message namespace
  "TransformRequest",  // message name
  4,  // number of fields
  sizeof(homogeneous_transform_pkg__msg__TransformRequest),
  homogeneous_transform_pkg__msg__TransformRequest__rosidl_typesupport_introspection_c__TransformRequest_message_member_array,  // message members
  homogeneous_transform_pkg__msg__TransformRequest__rosidl_typesupport_introspection_c__TransformRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  homogeneous_transform_pkg__msg__TransformRequest__rosidl_typesupport_introspection_c__TransformRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t homogeneous_transform_pkg__msg__TransformRequest__rosidl_typesupport_introspection_c__TransformRequest_message_type_support_handle = {
  0,
  &homogeneous_transform_pkg__msg__TransformRequest__rosidl_typesupport_introspection_c__TransformRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_homogeneous_transform_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homogeneous_transform_pkg, msg, TransformRequest)() {
  if (!homogeneous_transform_pkg__msg__TransformRequest__rosidl_typesupport_introspection_c__TransformRequest_message_type_support_handle.typesupport_identifier) {
    homogeneous_transform_pkg__msg__TransformRequest__rosidl_typesupport_introspection_c__TransformRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &homogeneous_transform_pkg__msg__TransformRequest__rosidl_typesupport_introspection_c__TransformRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
