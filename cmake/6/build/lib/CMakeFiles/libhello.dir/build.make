# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /data/home/robin/test/cmake/6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /data/home/robin/test/cmake/6/build

# Include any dependencies generated for this target.
include lib/CMakeFiles/libhello.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/libhello.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/libhello.dir/flags.make

lib/CMakeFiles/libhello.dir/hello.c.o: lib/CMakeFiles/libhello.dir/flags.make
lib/CMakeFiles/libhello.dir/hello.c.o: ../libhello/hello.c
	$(CMAKE_COMMAND) -E cmake_progress_report /data/home/robin/test/cmake/6/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object lib/CMakeFiles/libhello.dir/hello.c.o"
	cd /data/home/robin/test/cmake/6/build/lib && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libhello.dir/hello.c.o   -c /data/home/robin/test/cmake/6/libhello/hello.c

lib/CMakeFiles/libhello.dir/hello.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libhello.dir/hello.c.i"
	cd /data/home/robin/test/cmake/6/build/lib && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /data/home/robin/test/cmake/6/libhello/hello.c > CMakeFiles/libhello.dir/hello.c.i

lib/CMakeFiles/libhello.dir/hello.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libhello.dir/hello.c.s"
	cd /data/home/robin/test/cmake/6/build/lib && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /data/home/robin/test/cmake/6/libhello/hello.c -o CMakeFiles/libhello.dir/hello.c.s

lib/CMakeFiles/libhello.dir/hello.c.o.requires:
.PHONY : lib/CMakeFiles/libhello.dir/hello.c.o.requires

lib/CMakeFiles/libhello.dir/hello.c.o.provides: lib/CMakeFiles/libhello.dir/hello.c.o.requires
	$(MAKE) -f lib/CMakeFiles/libhello.dir/build.make lib/CMakeFiles/libhello.dir/hello.c.o.provides.build
.PHONY : lib/CMakeFiles/libhello.dir/hello.c.o.provides

lib/CMakeFiles/libhello.dir/hello.c.o.provides.build: lib/CMakeFiles/libhello.dir/hello.c.o

# Object files for target libhello
libhello_OBJECTS = \
"CMakeFiles/libhello.dir/hello.c.o"

# External object files for target libhello
libhello_EXTERNAL_OBJECTS =

lib/libhello.so: lib/CMakeFiles/libhello.dir/hello.c.o
lib/libhello.so: lib/CMakeFiles/libhello.dir/build.make
lib/libhello.so: lib/CMakeFiles/libhello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C shared library libhello.so"
	cd /data/home/robin/test/cmake/6/build/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libhello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/libhello.dir/build: lib/libhello.so
.PHONY : lib/CMakeFiles/libhello.dir/build

lib/CMakeFiles/libhello.dir/requires: lib/CMakeFiles/libhello.dir/hello.c.o.requires
.PHONY : lib/CMakeFiles/libhello.dir/requires

lib/CMakeFiles/libhello.dir/clean:
	cd /data/home/robin/test/cmake/6/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/libhello.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/libhello.dir/clean

lib/CMakeFiles/libhello.dir/depend:
	cd /data/home/robin/test/cmake/6/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /data/home/robin/test/cmake/6 /data/home/robin/test/cmake/6/libhello /data/home/robin/test/cmake/6/build /data/home/robin/test/cmake/6/build/lib /data/home/robin/test/cmake/6/build/lib/CMakeFiles/libhello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/libhello.dir/depend

