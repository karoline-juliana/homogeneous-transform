// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from homogeneous_transform_pkg:srv/HomogeneousTransform.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "homogeneous_transform_pkg/srv/detail/homogeneous_transform__rosidl_typesupport_introspection_c.h"
#include "homogeneous_transform_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "homogeneous_transform_pkg/srv/detail/homogeneous_transform__functions.h"
#include "homogeneous_transform_pkg/srv/detail/homogeneous_transform__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void homogeneous_transform_pkg__srv__HomogeneousTransform_Request__rosidl_typesupport_introspection_c__HomogeneousTransform_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  homogeneous_transform_pkg__srv__HomogeneousTransform_Request__init(message_memory);
}

void homogeneous_transform_pkg__srv__HomogeneousTransform_Request__rosidl_typesupport_introspection_c__HomogeneousTransform_Request_fini_function(void * message_memory)
{
  homogeneous_transform_pkg__srv__HomogeneousTransform_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember homogeneous_transform_pkg__srv__HomogeneousTransform_Request__rosidl_typesupport_introspection_c__HomogeneousTransform_Request_message_member_array[4] = {
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homogeneous_transform_pkg__srv__HomogeneousTransform_Request, angle),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homogeneous_transform_pkg__srv__HomogeneousTransform_Request, x),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homogeneous_transform_pkg__srv__HomogeneousTransform_Request, y),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homogeneous_transform_pkg__srv__HomogeneousTransform_Request, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers homogeneous_transform_pkg__srv__HomogeneousTransform_Request__rosidl_typesupport_introspection_c__HomogeneousTransform_Request_message_members = {
  "homogeneous_transform_pkg__srv",  // message namespace
  "HomogeneousTransform_Request",  // message name
  4,  // number of fields
  sizeof(homogeneous_transform_pkg__srv__HomogeneousTransform_Request),
  homogeneous_transform_pkg__srv__HomogeneousTransform_Request__rosidl_typesupport_introspection_c__HomogeneousTransform_Request_message_member_array,  // message members
  homogeneous_transform_pkg__srv__HomogeneousTransform_Request__rosidl_typesupport_introspection_c__HomogeneousTransform_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  homogeneous_transform_pkg__srv__HomogeneousTransform_Request__rosidl_typesupport_introspection_c__HomogeneousTransform_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t homogeneous_transform_pkg__srv__HomogeneousTransform_Request__rosidl_typesupport_introspection_c__HomogeneousTransform_Request_message_type_support_handle = {
  0,
  &homogeneous_transform_pkg__srv__HomogeneousTransform_Request__rosidl_typesupport_introspection_c__HomogeneousTransform_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_homogeneous_transform_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homogeneous_transform_pkg, srv, HomogeneousTransform_Request)() {
  if (!homogeneous_transform_pkg__srv__HomogeneousTransform_Request__rosidl_typesupport_introspection_c__HomogeneousTransform_Request_message_type_support_handle.typesupport_identifier) {
    homogeneous_transform_pkg__srv__HomogeneousTransform_Request__rosidl_typesupport_introspection_c__HomogeneousTransform_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &homogeneous_transform_pkg__srv__HomogeneousTransform_Request__rosidl_typesupport_introspection_c__HomogeneousTransform_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "homogeneous_transform_pkg/srv/detail/homogeneous_transform__rosidl_typesupport_introspection_c.h"
// already included above
// #include "homogeneous_transform_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "homogeneous_transform_pkg/srv/detail/homogeneous_transform__functions.h"
// already included above
// #include "homogeneous_transform_pkg/srv/detail/homogeneous_transform__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void homogeneous_transform_pkg__srv__HomogeneousTransform_Response__rosidl_typesupport_introspection_c__HomogeneousTransform_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  homogeneous_transform_pkg__srv__HomogeneousTransform_Response__init(message_memory);
}

void homogeneous_transform_pkg__srv__HomogeneousTransform_Response__rosidl_typesupport_introspection_c__HomogeneousTransform_Response_fini_function(void * message_memory)
{
  homogeneous_transform_pkg__srv__HomogeneousTransform_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember homogeneous_transform_pkg__srv__HomogeneousTransform_Response__rosidl_typesupport_introspection_c__HomogeneousTransform_Response_message_member_array[5] = {
  {
    "transformed_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homogeneous_transform_pkg__srv__HomogeneousTransform_Response, transformed_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transformed_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homogeneous_transform_pkg__srv__HomogeneousTransform_Response, transformed_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transformed_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homogeneous_transform_pkg__srv__HomogeneousTransform_Response, transformed_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homogeneous_transform_pkg__srv__HomogeneousTransform_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homogeneous_transform_pkg__srv__HomogeneousTransform_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers homogeneous_transform_pkg__srv__HomogeneousTransform_Response__rosidl_typesupport_introspection_c__HomogeneousTransform_Response_message_members = {
  "homogeneous_transform_pkg__srv",  // message namespace
  "HomogeneousTransform_Response",  // message name
  5,  // number of fields
  sizeof(homogeneous_transform_pkg__srv__HomogeneousTransform_Response),
  homogeneous_transform_pkg__srv__HomogeneousTransform_Response__rosidl_typesupport_introspection_c__HomogeneousTransform_Response_message_member_array,  // message members
  homogeneous_transform_pkg__srv__HomogeneousTransform_Response__rosidl_typesupport_introspection_c__HomogeneousTransform_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  homogeneous_transform_pkg__srv__HomogeneousTransform_Response__rosidl_typesupport_introspection_c__HomogeneousTransform_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t homogeneous_transform_pkg__srv__HomogeneousTransform_Response__rosidl_typesupport_introspection_c__HomogeneousTransform_Response_message_type_support_handle = {
  0,
  &homogeneous_transform_pkg__srv__HomogeneousTransform_Response__rosidl_typesupport_introspection_c__HomogeneousTransform_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_homogeneous_transform_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homogeneous_transform_pkg, srv, HomogeneousTransform_Response)() {
  if (!homogeneous_transform_pkg__srv__HomogeneousTransform_Response__rosidl_typesupport_introspection_c__HomogeneousTransform_Response_message_type_support_handle.typesupport_identifier) {
    homogeneous_transform_pkg__srv__HomogeneousTransform_Response__rosidl_typesupport_introspection_c__HomogeneousTransform_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &homogeneous_transform_pkg__srv__HomogeneousTransform_Response__rosidl_typesupport_introspection_c__HomogeneousTransform_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "homogeneous_transform_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "homogeneous_transform_pkg/srv/detail/homogeneous_transform__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers homogeneous_transform_pkg__srv__detail__homogeneous_transform__rosidl_typesupport_introspection_c__HomogeneousTransform_service_members = {
  "homogeneous_transform_pkg__srv",  // service namespace
  "HomogeneousTransform",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // homogeneous_transform_pkg__srv__detail__homogeneous_transform__rosidl_typesupport_introspection_c__HomogeneousTransform_Request_message_type_support_handle,
  NULL  // response message
  // homogeneous_transform_pkg__srv__detail__homogeneous_transform__rosidl_typesupport_introspection_c__HomogeneousTransform_Response_message_type_support_handle
};

static rosidl_service_type_support_t homogeneous_transform_pkg__srv__detail__homogeneous_transform__rosidl_typesupport_introspection_c__HomogeneousTransform_service_type_support_handle = {
  0,
  &homogeneous_transform_pkg__srv__detail__homogeneous_transform__rosidl_typesupport_introspection_c__HomogeneousTransform_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homogeneous_transform_pkg, srv, HomogeneousTransform_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homogeneous_transform_pkg, srv, HomogeneousTransform_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_homogeneous_transform_pkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homogeneous_transform_pkg, srv, HomogeneousTransform)() {
  if (!homogeneous_transform_pkg__srv__detail__homogeneous_transform__rosidl_typesupport_introspection_c__HomogeneousTransform_service_type_support_handle.typesupport_identifier) {
    homogeneous_transform_pkg__srv__detail__homogeneous_transform__rosidl_typesupport_introspection_c__HomogeneousTransform_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)homogeneous_transform_pkg__srv__detail__homogeneous_transform__rosidl_typesupport_introspection_c__HomogeneousTransform_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homogeneous_transform_pkg, srv, HomogeneousTransform_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homogeneous_transform_pkg, srv, HomogeneousTransform_Response)()->data;
  }

  return &homogeneous_transform_pkg__srv__detail__homogeneous_transform__rosidl_typesupport_introspection_c__HomogeneousTransform_service_type_support_handle;
}
