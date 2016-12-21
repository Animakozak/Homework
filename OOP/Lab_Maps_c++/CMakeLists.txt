cmake_minimum_required(VERSION 3.3)
project(Lab_Maps_c__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp dataBase.cpp)
add_executable(Lab_Maps_c__ ${SOURCE_FILES})