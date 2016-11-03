cmake_minimum_required(VERSION 3.3)
project(Lab_3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    Circle.cpp
    Circle.h
    main.cpp
    Point.cpp
    Point.h)

add_executable(Lab_3 ${SOURCE_FILES})