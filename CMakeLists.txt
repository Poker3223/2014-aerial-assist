cmake_minimum_required(VERSION 2.8)
include(FRCDeploy)

project(MyRobot)
add_compile_options(-std=c++11)
find_package(WPILib)
include_directories(${WPILib_INCLUDE_DIRS})

file(GLOB_RECURSE SOURCE_CODE *.cpp)

add_executable(my-code ${SOURCE_CODE})
target_link_libraries(my-code ${WPILib_LIBRARY})

add_make_deploy(my-code 10.32.23.2)
