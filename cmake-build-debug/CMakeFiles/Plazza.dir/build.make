# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Tuncay/Desktop/T-CPP-710-Plazza_2018/Plazza

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Tuncay/Desktop/T-CPP-710-Plazza_2018/Plazza/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Plazza.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Plazza.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Plazza.dir/flags.make

CMakeFiles/Plazza.dir/main.cpp.o: CMakeFiles/Plazza.dir/flags.make
CMakeFiles/Plazza.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Tuncay/Desktop/T-CPP-710-Plazza_2018/Plazza/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Plazza.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Plazza.dir/main.cpp.o -c /Users/Tuncay/Desktop/T-CPP-710-Plazza_2018/Plazza/main.cpp

CMakeFiles/Plazza.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Plazza.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Tuncay/Desktop/T-CPP-710-Plazza_2018/Plazza/main.cpp > CMakeFiles/Plazza.dir/main.cpp.i

CMakeFiles/Plazza.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Plazza.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Tuncay/Desktop/T-CPP-710-Plazza_2018/Plazza/main.cpp -o CMakeFiles/Plazza.dir/main.cpp.s

# Object files for target Plazza
Plazza_OBJECTS = \
"CMakeFiles/Plazza.dir/main.cpp.o"

# External object files for target Plazza
Plazza_EXTERNAL_OBJECTS =

Plazza: CMakeFiles/Plazza.dir/main.cpp.o
Plazza: CMakeFiles/Plazza.dir/build.make
Plazza: CMakeFiles/Plazza.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Tuncay/Desktop/T-CPP-710-Plazza_2018/Plazza/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Plazza"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Plazza.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Plazza.dir/build: Plazza

.PHONY : CMakeFiles/Plazza.dir/build

CMakeFiles/Plazza.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Plazza.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Plazza.dir/clean

CMakeFiles/Plazza.dir/depend:
	cd /Users/Tuncay/Desktop/T-CPP-710-Plazza_2018/Plazza/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Tuncay/Desktop/T-CPP-710-Plazza_2018/Plazza /Users/Tuncay/Desktop/T-CPP-710-Plazza_2018/Plazza /Users/Tuncay/Desktop/T-CPP-710-Plazza_2018/Plazza/cmake-build-debug /Users/Tuncay/Desktop/T-CPP-710-Plazza_2018/Plazza/cmake-build-debug /Users/Tuncay/Desktop/T-CPP-710-Plazza_2018/Plazza/cmake-build-debug/CMakeFiles/Plazza.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Plazza.dir/depend
