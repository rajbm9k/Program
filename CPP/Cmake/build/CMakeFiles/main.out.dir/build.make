# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rajbm9k/Program/CPP/Cmake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rajbm9k/Program/CPP/Cmake/build

# Include any dependencies generated for this target.
include CMakeFiles/main.out.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.out.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.out.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.out.dir/flags.make

CMakeFiles/main.out.dir/main.cpp.o: CMakeFiles/main.out.dir/flags.make
CMakeFiles/main.out.dir/main.cpp.o: /home/rajbm9k/Program/CPP/Cmake/main.cpp
CMakeFiles/main.out.dir/main.cpp.o: CMakeFiles/main.out.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rajbm9k/Program/CPP/Cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.out.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.out.dir/main.cpp.o -MF CMakeFiles/main.out.dir/main.cpp.o.d -o CMakeFiles/main.out.dir/main.cpp.o -c /home/rajbm9k/Program/CPP/Cmake/main.cpp

CMakeFiles/main.out.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.out.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rajbm9k/Program/CPP/Cmake/main.cpp > CMakeFiles/main.out.dir/main.cpp.i

CMakeFiles/main.out.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.out.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rajbm9k/Program/CPP/Cmake/main.cpp -o CMakeFiles/main.out.dir/main.cpp.s

# Object files for target main.out
main_out_OBJECTS = \
"CMakeFiles/main.out.dir/main.cpp.o"

# External object files for target main.out
main_out_EXTERNAL_OBJECTS =

main.out: CMakeFiles/main.out.dir/main.cpp.o
main.out: CMakeFiles/main.out.dir/build.make
main.out: CMakeFiles/main.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rajbm9k/Program/CPP/Cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable main.out"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.out.dir/build: main.out
.PHONY : CMakeFiles/main.out.dir/build

CMakeFiles/main.out.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.out.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.out.dir/clean

CMakeFiles/main.out.dir/depend:
	cd /home/rajbm9k/Program/CPP/Cmake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rajbm9k/Program/CPP/Cmake /home/rajbm9k/Program/CPP/Cmake /home/rajbm9k/Program/CPP/Cmake/build /home/rajbm9k/Program/CPP/Cmake/build /home/rajbm9k/Program/CPP/Cmake/build/CMakeFiles/main.out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.out.dir/depend

