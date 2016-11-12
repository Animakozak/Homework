cmake_minimum_required(VERSION 3.3)
project(Lab_4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES A.cpp B.cpp C.cpp main.cpp)
add_executable(Lab_4 ${SOURCE_FILES})