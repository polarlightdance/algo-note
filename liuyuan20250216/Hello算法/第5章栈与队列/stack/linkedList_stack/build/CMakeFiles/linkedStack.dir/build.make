# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack/build

# Include any dependencies generated for this target.
include CMakeFiles/linkedStack.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/linkedStack.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/linkedStack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linkedStack.dir/flags.make

CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.o: CMakeFiles/linkedStack.dir/flags.make
CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.o: ../src/linkedList_stack.cpp
CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.o: CMakeFiles/linkedStack.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.o -MF CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.o.d -o CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.o -c /root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack/src/linkedList_stack.cpp

CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack/src/linkedList_stack.cpp > CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.i

CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack/src/linkedList_stack.cpp -o CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.s

CMakeFiles/linkedStack.dir/src/main.cpp.o: CMakeFiles/linkedStack.dir/flags.make
CMakeFiles/linkedStack.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/linkedStack.dir/src/main.cpp.o: CMakeFiles/linkedStack.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/linkedStack.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/linkedStack.dir/src/main.cpp.o -MF CMakeFiles/linkedStack.dir/src/main.cpp.o.d -o CMakeFiles/linkedStack.dir/src/main.cpp.o -c /root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack/src/main.cpp

CMakeFiles/linkedStack.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linkedStack.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack/src/main.cpp > CMakeFiles/linkedStack.dir/src/main.cpp.i

CMakeFiles/linkedStack.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linkedStack.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack/src/main.cpp -o CMakeFiles/linkedStack.dir/src/main.cpp.s

# Object files for target linkedStack
linkedStack_OBJECTS = \
"CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.o" \
"CMakeFiles/linkedStack.dir/src/main.cpp.o"

# External object files for target linkedStack
linkedStack_EXTERNAL_OBJECTS =

linkedStack: CMakeFiles/linkedStack.dir/src/linkedList_stack.cpp.o
linkedStack: CMakeFiles/linkedStack.dir/src/main.cpp.o
linkedStack: CMakeFiles/linkedStack.dir/build.make
linkedStack: CMakeFiles/linkedStack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable linkedStack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/linkedStack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linkedStack.dir/build: linkedStack
.PHONY : CMakeFiles/linkedStack.dir/build

CMakeFiles/linkedStack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/linkedStack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/linkedStack.dir/clean

CMakeFiles/linkedStack.dir/depend:
	cd /root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack /root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack /root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack/build /root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack/build /root/study/algo-note/liuyuan20250216/Hello算法/第5章栈与队列/stack/linkedList_stack/build/CMakeFiles/linkedStack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/linkedStack.dir/depend

