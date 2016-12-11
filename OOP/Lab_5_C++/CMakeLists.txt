cmake_minimum_required(VERSION 3.3)
project(Lab_5_C__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Body.cpp Ball.cpp Parallelepiped.cpp main.cpp)
add_executable(Lab_5_C__ ${SOURCE_FILES})