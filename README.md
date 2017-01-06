# jpmsc_reactive_robot

Wall following eactive robot using ROS and STDR_Simulator.

### Installation intructions:

* Configure the catkin workspace - http://wiki.ros.org/ROS/Tutorials/InstallingandConfiguringROSEnvironment
* Install STDR from Github and not from apt packages (they are not up to date) into it's own package in the workspace - http://wiki.ros.org/stdr_simulator/Tutorials/Set%20up%20STDR%20Simulator
* Create a package for the project
```
cd ~/catkin_ws/src
catkin_create_pkg jpmsc_reactive_robot
```
* Copy the files to this folder

* Copy the files in jpmsc_reactive_robot/stdr_files to the stdr_simulator package
```
jpmsc_reactive_robot/stdr_files/stdr_launchers/launch --> stdr_simulator/stdr_launchers/launch
jpmsc_reactive_robot/stdr_files/stdr_resources/maps --> stdr_simulator/stdr_resources/maps
jpmsc_reactive_robot/stdr_files/stdr_resources/resources/robots --> stdr_simulator/stdr_resources/resources/robots
```

* Build the package with the following commands:
```
cd ~/catkin_ws
catkin_make
```

### To run the software

* Open a terminal and choose a map:
```
roslaunch stdr_launchers jpmsc_SV2.launch <-- Square Map
roslaunch stdr_launchers jpmsc_UV2.launch <-- U Map
roslaunch stdr_launchers jpmsc_CV2.launch <-- Circle Map
roslaunch stdr_launchers jpmsc_SAV2.launch <-- Square Assortment Map
```

* Open a second terminal and deploy the robot:
```
rosrun jpmsc_reactive_robot robot_linefollow_node robot0 laser_0
```
