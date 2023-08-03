# Robotics challenge
Simple ROS 2 package to a service and client in C++.

## Objective
Create a service that applies an homogeneous transform from a given rotation angle around x-axis. The service shall receive the angle information in degrees and the 3D point coordinates. Then it shall return the transformed point.

The homogeneous matrix:

![](https://github.com/karoline-juliana/homogeneous-transform/blob/main/utils/matrix.png)

## How to run
- Git clone the repository:
```
https://github.com/karoline-juliana/homogeneous-transform.git
```
- Open a terminal
- Open the workspace paste
```
cd homogeneous_transform_ws
```
- Build the workspace with colcon
```
colcon build --packages-select homogeneous_transform_ws
```
- Open another terminal
- Go to workspace paste
```
cd homogeneous_transform_ws
```
- Source the setup files
```
source install/setup.bash
```
- Run the service node
```
ros2 run homogeneous_transform_pkg homogeneous_transform_server
```
- Open another terminal
-  Go to workspace paste
```
cd homogeneous_transform_ws
```
- Source the setup files
```
source install/setup.bash
```
- Run the client node with the angle values and the x y and z values
```
ros2 run homogeneous_transform_pkg homogeneous_transform_client angle x y z
```

The result will show in the terminal.