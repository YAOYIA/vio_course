cmake_minimum_required(VERSION 3.0)
project(eigen_rotation)
find_library(sophus REQUIRED)
include_directories(${Sophus_INCLUDE_DIRS})
add_executable(eigen_rotation eigen_rotation.cpp)
target_link_libraries(eigen_rotation ${Sophus_LIBRARIES})