cmake_minimum_required(VERSION 3.3)
project(Lab_Collection)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Book.cpp)
add_executable(Lab_Collection ${SOURCE_FILES})