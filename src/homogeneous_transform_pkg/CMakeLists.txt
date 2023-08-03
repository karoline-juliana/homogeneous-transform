cmake_minimum_required(VERSION 3.8)
project(homogeneous_transform_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

# Adicione a nova mensagem e serviço
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/HomogeneousTransform.srv"
  "msg/TransformRequest.msg"
  "msg/TransformResponse.msg"
  DEPENDENCIES std_msgs
)

# Adicione o servidor ao executável
add_executable(homogeneous_transform_server src/homogeneous_transform_server.cpp)
ament_target_dependencies(homogeneous_transform_server rclcpp std_msgs)

# Adicione o cliente ao executável
add_executable(homogeneous_transform_client src/homogeneous_transform_client.cpp)
ament_target_dependencies(homogeneous_transform_client rclcpp std_msgs)

install(TARGETS
    homogeneous_transform_client
    homogeneous_transform_server
  DESTINATION lib/${PROJECT_NAME})

rosidl_get_typesupport_target(cpp_typesupport_target
${PROJECT_NAME} rosidl_typesupport_cpp)
target_link_libraries(homogeneous_transform_client "${cpp_typesupport_target}")
target_link_libraries(homogeneous_transform_server "${cpp_typesupport_target}")

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_target_dependencies(homogeneous_transform_server rclcpp std_msgs)
ament_target_dependencies(homogeneous_transform_client rclcpp std_msgs)

ament_package()
