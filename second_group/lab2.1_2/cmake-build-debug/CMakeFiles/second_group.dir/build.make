# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/yukish/Завантаження/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/yukish/Завантаження/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yukish/CLionProjects/DataStructure/second_group/lab2.1_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yukish/CLionProjects/DataStructure/second_group/lab2.1_2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/second_group.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/second_group.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/second_group.dir/flags.make

CMakeFiles/second_group.dir/main.cpp.o: CMakeFiles/second_group.dir/flags.make
CMakeFiles/second_group.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yukish/CLionProjects/DataStructure/second_group/lab2.1_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/second_group.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/second_group.dir/main.cpp.o -c /home/yukish/CLionProjects/DataStructure/second_group/lab2.1_2/main.cpp

CMakeFiles/second_group.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/second_group.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yukish/CLionProjects/DataStructure/second_group/lab2.1_2/main.cpp > CMakeFiles/second_group.dir/main.cpp.i

CMakeFiles/second_group.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/second_group.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yukish/CLionProjects/DataStructure/second_group/lab2.1_2/main.cpp -o CMakeFiles/second_group.dir/main.cpp.s

# Object files for target second_group
second_group_OBJECTS = \
"CMakeFiles/second_group.dir/main.cpp.o"

# External object files for target second_group
second_group_EXTERNAL_OBJECTS =

second_group: CMakeFiles/second_group.dir/main.cpp.o
second_group: CMakeFiles/second_group.dir/build.make
second_group: CMakeFiles/second_group.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yukish/CLionProjects/DataStructure/second_group/lab2.1_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable second_group"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/second_group.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/second_group.dir/build: second_group

.PHONY : CMakeFiles/second_group.dir/build

CMakeFiles/second_group.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/second_group.dir/cmake_clean.cmake
.PHONY : CMakeFiles/second_group.dir/clean

CMakeFiles/second_group.dir/depend:
	cd /home/yukish/CLionProjects/DataStructure/second_group/lab2.1_2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yukish/CLionProjects/DataStructure/second_group/lab2.1_2 /home/yukish/CLionProjects/DataStructure/second_group/lab2.1_2 /home/yukish/CLionProjects/DataStructure/second_group/lab2.1_2/cmake-build-debug /home/yukish/CLionProjects/DataStructure/second_group/lab2.1_2/cmake-build-debug /home/yukish/CLionProjects/DataStructure/second_group/lab2.1_2/cmake-build-debug/CMakeFiles/second_group.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/second_group.dir/depend
