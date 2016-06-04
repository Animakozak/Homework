cmake_minimum_required(VERSION 3.3)
project(LR4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES lr4.cpp)
add_executable(LR4 ${SOURCE_FILES})