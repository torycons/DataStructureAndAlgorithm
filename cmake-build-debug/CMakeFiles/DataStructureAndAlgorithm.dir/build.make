# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/thanapat/Documents/Explore/DataStructureAndAlgorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/thanapat/Documents/Explore/DataStructureAndAlgorithm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DataStructureAndAlgorithm.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/DataStructureAndAlgorithm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DataStructureAndAlgorithm.dir/flags.make

CMakeFiles/DataStructureAndAlgorithm.dir/03-singly-linked-list.cpp.o: CMakeFiles/DataStructureAndAlgorithm.dir/flags.make
CMakeFiles/DataStructureAndAlgorithm.dir/03-singly-linked-list.cpp.o: ../03-singly-linked-list.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/thanapat/Documents/Explore/DataStructureAndAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DataStructureAndAlgorithm.dir/03-singly-linked-list.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DataStructureAndAlgorithm.dir/03-singly-linked-list.cpp.o -c /Users/thanapat/Documents/Explore/DataStructureAndAlgorithm/03-singly-linked-list.cpp

CMakeFiles/DataStructureAndAlgorithm.dir/03-singly-linked-list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataStructureAndAlgorithm.dir/03-singly-linked-list.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/thanapat/Documents/Explore/DataStructureAndAlgorithm/03-singly-linked-list.cpp > CMakeFiles/DataStructureAndAlgorithm.dir/03-singly-linked-list.cpp.i

CMakeFiles/DataStructureAndAlgorithm.dir/03-singly-linked-list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataStructureAndAlgorithm.dir/03-singly-linked-list.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/thanapat/Documents/Explore/DataStructureAndAlgorithm/03-singly-linked-list.cpp -o CMakeFiles/DataStructureAndAlgorithm.dir/03-singly-linked-list.cpp.s

# Object files for target DataStructureAndAlgorithm
DataStructureAndAlgorithm_OBJECTS = \
"CMakeFiles/DataStructureAndAlgorithm.dir/03-singly-linked-list.cpp.o"

# External object files for target DataStructureAndAlgorithm
DataStructureAndAlgorithm_EXTERNAL_OBJECTS =

DataStructureAndAlgorithm: CMakeFiles/DataStructureAndAlgorithm.dir/03-singly-linked-list.cpp.o
DataStructureAndAlgorithm: CMakeFiles/DataStructureAndAlgorithm.dir/build.make
DataStructureAndAlgorithm: CMakeFiles/DataStructureAndAlgorithm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/thanapat/Documents/Explore/DataStructureAndAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DataStructureAndAlgorithm"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DataStructureAndAlgorithm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DataStructureAndAlgorithm.dir/build: DataStructureAndAlgorithm
.PHONY : CMakeFiles/DataStructureAndAlgorithm.dir/build

CMakeFiles/DataStructureAndAlgorithm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DataStructureAndAlgorithm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DataStructureAndAlgorithm.dir/clean

CMakeFiles/DataStructureAndAlgorithm.dir/depend:
	cd /Users/thanapat/Documents/Explore/DataStructureAndAlgorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/thanapat/Documents/Explore/DataStructureAndAlgorithm /Users/thanapat/Documents/Explore/DataStructureAndAlgorithm /Users/thanapat/Documents/Explore/DataStructureAndAlgorithm/cmake-build-debug /Users/thanapat/Documents/Explore/DataStructureAndAlgorithm/cmake-build-debug /Users/thanapat/Documents/Explore/DataStructureAndAlgorithm/cmake-build-debug/CMakeFiles/DataStructureAndAlgorithm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DataStructureAndAlgorithm.dir/depend
