# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/service_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/service_test.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/service_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/service_test.dir/flags.make

tests/CMakeFiles/service_test.dir/service_test.cpp.o: tests/CMakeFiles/service_test.dir/flags.make
tests/CMakeFiles/service_test.dir/service_test.cpp.o: /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/tests/service_test.cpp
tests/CMakeFiles/service_test.dir/service_test.cpp.o: tests/CMakeFiles/service_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/service_test.dir/service_test.cpp.o"
	cd /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/service_test.dir/service_test.cpp.o -MF CMakeFiles/service_test.dir/service_test.cpp.o.d -o CMakeFiles/service_test.dir/service_test.cpp.o -c /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/tests/service_test.cpp

tests/CMakeFiles/service_test.dir/service_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/service_test.dir/service_test.cpp.i"
	cd /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/tests/service_test.cpp > CMakeFiles/service_test.dir/service_test.cpp.i

tests/CMakeFiles/service_test.dir/service_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/service_test.dir/service_test.cpp.s"
	cd /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/tests/service_test.cpp -o CMakeFiles/service_test.dir/service_test.cpp.s

# Object files for target service_test
service_test_OBJECTS = \
"CMakeFiles/service_test.dir/service_test.cpp.o"

# External object files for target service_test
service_test_EXTERNAL_OBJECTS =

tests/service_test: tests/CMakeFiles/service_test.dir/service_test.cpp.o
tests/service_test: tests/CMakeFiles/service_test.dir/build.make
tests/service_test: libservice.a
tests/service_test: /opt/homebrew/lib/libgtest.a
tests/service_test: /opt/homebrew/lib/libgmock_main.a
tests/service_test: /opt/homebrew/lib/libgmock.a
tests/service_test: /opt/homebrew/lib/libgtest.a
tests/service_test: tests/CMakeFiles/service_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable service_test"
	cd /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/service_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/service_test.dir/build: tests/service_test
.PHONY : tests/CMakeFiles/service_test.dir/build

tests/CMakeFiles/service_test.dir/clean:
	cd /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/service_test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/service_test.dir/clean

tests/CMakeFiles/service_test.dir/depend:
	cd /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/tests /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/build /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/build/tests /Users/jiten/workspace/training/cpp-testing/gtest-examples/8-gtest-gmock-example/build/tests/CMakeFiles/service_test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/service_test.dir/depend

