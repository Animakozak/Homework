cmake_minimum_required(VERSION 3.3)
project(Lab_3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp Point.cpp Circle.cpp)
add_executable(Lab_3 ${SOURCE_FILES})