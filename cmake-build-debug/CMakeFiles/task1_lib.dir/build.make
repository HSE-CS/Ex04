# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\1\Desktop\Ex04

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\1\Desktop\Ex04\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task1_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task1_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task1_lib.dir/flags.make

CMakeFiles/task1_lib.dir/src/task1.cpp.obj: CMakeFiles/task1_lib.dir/flags.make
CMakeFiles/task1_lib.dir/src/task1.cpp.obj: CMakeFiles/task1_lib.dir/includes_CXX.rsp
CMakeFiles/task1_lib.dir/src/task1.cpp.obj: ../src/task1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\1\Desktop\Ex04\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task1_lib.dir/src/task1.cpp.obj"
	C:\Users\1\Study\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\task1_lib.dir\src\task1.cpp.obj -c C:\Users\1\Desktop\Ex04\src\task1.cpp

CMakeFiles/task1_lib.dir/src/task1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task1_lib.dir/src/task1.cpp.i"
	C:\Users\1\Study\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\1\Desktop\Ex04\src\task1.cpp > CMakeFiles\task1_lib.dir\src\task1.cpp.i

CMakeFiles/task1_lib.dir/src/task1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task1_lib.dir/src/task1.cpp.s"
	C:\Users\1\Study\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\1\Desktop\Ex04\src\task1.cpp -o CMakeFiles\task1_lib.dir\src\task1.cpp.s

# Object files for target task1_lib
task1_lib_OBJECTS = \
"CMakeFiles/task1_lib.dir/src/task1.cpp.obj"

# External object files for target task1_lib
task1_lib_EXTERNAL_OBJECTS =

libtask1_lib.a: CMakeFiles/task1_lib.dir/src/task1.cpp.obj
libtask1_lib.a: CMakeFiles/task1_lib.dir/build.make
libtask1_lib.a: CMakeFiles/task1_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\1\Desktop\Ex04\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libtask1_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles\task1_lib.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\task1_lib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task1_lib.dir/build: libtask1_lib.a

.PHONY : CMakeFiles/task1_lib.dir/build

CMakeFiles/task1_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\task1_lib.dir\cmake_clean.cmake
.PHONY : CMakeFiles/task1_lib.dir/clean

CMakeFiles/task1_lib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\1\Desktop\Ex04 C:\Users\1\Desktop\Ex04 C:\Users\1\Desktop\Ex04\cmake-build-debug C:\Users\1\Desktop\Ex04\cmake-build-debug C:\Users\1\Desktop\Ex04\cmake-build-debug\CMakeFiles\task1_lib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task1_lib.dir/depend

