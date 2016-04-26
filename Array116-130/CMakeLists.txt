cmake_minimum_required(VERSION 2.8.11)

project(Array116-130)



include_directories(
    D:/Denis/Homework/Array116-130/
    D:/Denis/Homework/Array116-130/

)

# Linker options
set(CMAKE_LDFLAGS "${CMAKE_LDFLAGS}  ")

# Library path
set(CMAKE_LDFLAGS "${CMAKE_LDFLAGS} -L\".\" ")

# Define the CXX sources
set ( CXX_SRCS
    main_menu.cpp
    array116.cpp
    array120.cpp
    array124.cpp
    array125.cpp
    array128.cpp
)

set_source_files_properties(
    ${CXX_SRCS} PROPERTIES COMPILE_FLAGS 
    " -g -O0 -Wall")

add_executable(Array116-130 ${CXX_SRCS} ${C_SRCS})

