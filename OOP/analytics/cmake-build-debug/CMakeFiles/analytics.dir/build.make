# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Den\Documents\GitHub\Homework\OOP\analytics

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Den\Documents\GitHub\Homework\OOP\analytics\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/analytics.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/analytics.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/analytics.dir/flags.make

CMakeFiles/analytics.dir/main.cpp.obj: CMakeFiles/analytics.dir/flags.make
CMakeFiles/analytics.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Den\Documents\GitHub\Homework\OOP\analytics\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/analytics.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\analytics.dir\main.cpp.obj -c C:\Users\Den\Documents\GitHub\Homework\OOP\analytics\main.cpp

CMakeFiles/analytics.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/analytics.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Den\Documents\GitHub\Homework\OOP\analytics\main.cpp > CMakeFiles\analytics.dir\main.cpp.i

CMakeFiles/analytics.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/analytics.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Den\Documents\GitHub\Homework\OOP\analytics\main.cpp -o CMakeFiles\analytics.dir\main.cpp.s

CMakeFiles/analytics.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/analytics.dir/main.cpp.obj.requires

CMakeFiles/analytics.dir/main.cpp.obj.provides: CMakeFiles/analytics.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\analytics.dir\build.make CMakeFiles/analytics.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/analytics.dir/main.cpp.obj.provides

CMakeFiles/analytics.dir/main.cpp.obj.provides.build: CMakeFiles/analytics.dir/main.cpp.obj


# Object files for target analytics
analytics_OBJECTS = \
"CMakeFiles/analytics.dir/main.cpp.obj"

# External object files for target analytics
analytics_EXTERNAL_OBJECTS =

analytics.exe: CMakeFiles/analytics.dir/main.cpp.obj
analytics.exe: CMakeFiles/analytics.dir/build.make
analytics.exe: CMakeFiles/analytics.dir/linklibs.rsp
analytics.exe: CMakeFiles/analytics.dir/objects1.rsp
analytics.exe: CMakeFiles/analytics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Den\Documents\GitHub\Homework\OOP\analytics\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable analytics.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\analytics.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/analytics.dir/build: analytics.exe

.PHONY : CMakeFiles/analytics.dir/build

CMakeFiles/analytics.dir/requires: CMakeFiles/analytics.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/analytics.dir/requires

CMakeFiles/analytics.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\analytics.dir\cmake_clean.cmake
.PHONY : CMakeFiles/analytics.dir/clean

CMakeFiles/analytics.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Den\Documents\GitHub\Homework\OOP\analytics C:\Users\Den\Documents\GitHub\Homework\OOP\analytics C:\Users\Den\Documents\GitHub\Homework\OOP\analytics\cmake-build-debug C:\Users\Den\Documents\GitHub\Homework\OOP\analytics\cmake-build-debug C:\Users\Den\Documents\GitHub\Homework\OOP\analytics\cmake-build-debug\CMakeFiles\analytics.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/analytics.dir/depend

