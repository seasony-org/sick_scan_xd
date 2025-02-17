REM 
REM Run sick_scan on ROS-2 Windows with multiScan emulator
REM 

if exist "c:\dev\ros2_foxy\local_setup.bat" ( call C:\dev\ros2_foxy\local_setup.bat )
if exist "c:\opt\ros\foxy\x64\setup.bat" ( call c:\opt\ros\foxy\x64\setup.bat )
rem set PATH=c:\vcpkg\installed\x64-windows\bin;%PATH%

pushd ..\..\..\..
call .\install\setup.bat
rem start "ros2 echo cloud" ros2 topic echo /cloud
start "rviz2 multiscan" ros2 run rviz2 rviz2 -d ./src/sick_scan_xd/test/emulator/config/rviz2_cfg_multiscan_windows.rviz
start "rviz2 multiscan 360" ros2 run rviz2 rviz2 -d ./src/sick_scan_xd/test/emulator/config/rviz2_cfg_multiscan_windows_360.rviz
@timeout /t 3

REM 
REM Start multiscan emulator
REM 

rem call run_win64_multiscan_emulator.cmd

REM 
REM Start sick_scan on ROS-2 Windows
REM 

rem ros2 run sick_scan sick_generic_caller ./src/sick_scan_xd/launch/sick_multiscan.launch hostname:=127.0.0.1 udp_receiver_ip:=127.0.0.1 publish_topic:=/cloud publish_topic_all_segments:=/cloud_fullframe publish_frame_id:=world add_transform_xyz_rpy:=0,0,0,0,0,0
ros2 launch sick_scan sick_multiscan.launch.py hostname:=127.0.0.1 udp_receiver_ip:=127.0.0.1

popd
@pause

