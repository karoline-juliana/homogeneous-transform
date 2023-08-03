// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from homogeneous_transform_pkg:srv/HomogeneousTransform.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "homogeneous_transform_pkg/srv/detail/homogeneous_transform__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace homogeneous_transform_pkg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _HomogeneousTransform_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HomogeneousTransform_Request_type_support_ids_t;

static const _HomogeneousTransform_Request_type_support_ids_t _HomogeneousTransform_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HomogeneousTransform_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HomogeneousTransform_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HomogeneousTransform_Request_type_support_symbol_names_t _HomogeneousTransform_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, homogeneous_transform_pkg, srv, HomogeneousTransform_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, homogeneous_transform_pkg, srv, HomogeneousTransform_Request)),
  }
};

typedef struct _HomogeneousTransform_Request_type_support_data_t
{
  void * data[2];
} _HomogeneousTransform_Request_type_support_data_t;

static _HomogeneousTransform_Request_type_support_data_t _HomogeneousTransform_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HomogeneousTransform_Request_message_typesupport_map = {
  2,
  "homogeneous_transform_pkg",
  &_HomogeneousTransform_Request_message_typesupport_ids.typesupport_identifier[0],
  &_HomogeneousTransform_Request_message_typesupport_symbol_names.symbol_name[0],
  &_HomogeneousTransform_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HomogeneousTransform_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HomogeneousTransform_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace homogeneous_transform_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<homogeneous_transform_pkg::srv::HomogeneousTransform_Request>()
{
  return &::homogeneous_transform_pkg::srv::rosidl_typesupport_cpp::HomogeneousTransform_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, homogeneous_transform_pkg, srv, HomogeneousTransform_Request)() {
  return get_message_type_support_handle<homogeneous_transform_pkg::srv::HomogeneousTransform_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "homogeneous_transform_pkg/srv/detail/homogeneous_transform__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace homogeneous_transform_pkg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _HomogeneousTransform_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HomogeneousTransform_Response_type_support_ids_t;

static const _HomogeneousTransform_Response_type_support_ids_t _HomogeneousTransform_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HomogeneousTransform_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HomogeneousTransform_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HomogeneousTransform_Response_type_support_symbol_names_t _HomogeneousTransform_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, homogeneous_transform_pkg, srv, HomogeneousTransform_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, homogeneous_transform_pkg, srv, HomogeneousTransform_Response)),
  }
};

typedef struct _HomogeneousTransform_Response_type_support_data_t
{
  void * data[2];
} _HomogeneousTransform_Response_type_support_data_t;

static _HomogeneousTransform_Response_type_support_data_t _HomogeneousTransform_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HomogeneousTransform_Response_message_typesupport_map = {
  2,
  "homogeneous_transform_pkg",
  &_HomogeneousTransform_Response_message_typesupport_ids.typesupport_identifier[0],
  &_HomogeneousTransform_Response_message_typesupport_symbol_names.symbol_name[0],
  &_HomogeneousTransform_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HomogeneousTransform_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HomogeneousTransform_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace homogeneous_transform_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<homogeneous_transform_pkg::srv::HomogeneousTransform_Response>()
{
  return &::homogeneous_transform_pkg::srv::rosidl_typesupport_cpp::HomogeneousTransform_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, homogeneous_transform_pkg, srv, HomogeneousTransform_Response)() {
  return get_message_type_support_handle<homogeneous_transform_pkg::srv::HomogeneousTransform_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "homogeneous_transform_pkg/srv/detail/homogeneous_transform__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace homogeneous_transform_pkg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _HomogeneousTransform_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HomogeneousTransform_type_support_ids_t;

static const _HomogeneousTransform_type_support_ids_t _HomogeneousTransform_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HomogeneousTransform_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HomogeneousTransform_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HomogeneousTransform_type_support_symbol_names_t _HomogeneousTransform_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, homogeneous_transform_pkg, srv, HomogeneousTransform)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, homogeneous_transform_pkg, srv, HomogeneousTransform)),
  }
};

typedef struct _HomogeneousTransform_type_support_data_t
{
  void * data[2];
} _HomogeneousTransform_type_support_data_t;

static _HomogeneousTransform_type_support_data_t _HomogeneousTransform_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HomogeneousTransform_service_typesupport_map = {
  2,
  "homogeneous_transform_pkg",
  &_HomogeneousTransform_service_typesupport_ids.typesupport_identifier[0],
  &_HomogeneousTransform_service_typesupport_symbol_names.symbol_name[0],
  &_HomogeneousTransform_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t HomogeneousTransform_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HomogeneousTransform_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace homogeneous_transform_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<homogeneous_transform_pkg::srv::HomogeneousTransform>()
{
  return &::homogeneous_transform_pkg::srv::rosidl_typesupport_cpp::HomogeneousTransform_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
