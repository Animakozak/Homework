cmake_minimum_required(VERSION 3.3)
project(Lab_3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
<<<<<<< HEAD

set(SOURCE_FILES
    Circle.cpp
    Circle.h
    main.cpp
    Point.cpp
    Point.h)

=======
set(SOURCE_FILES Circle.h Point.h main.cpp Point.cpp Circle.cpp)
>>>>>>> c8b8a18085316a0cf9d16e3b945b1c8a3d234408
add_executable(Lab_3 ${SOURCE_FILES})