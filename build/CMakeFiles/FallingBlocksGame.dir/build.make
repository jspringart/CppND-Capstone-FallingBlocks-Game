# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/build

# Include any dependencies generated for this target.
include CMakeFiles/FallingBlocksGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FallingBlocksGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FallingBlocksGame.dir/flags.make

CMakeFiles/FallingBlocksGame.dir/src/main.cpp.o: CMakeFiles/FallingBlocksGame.dir/flags.make
CMakeFiles/FallingBlocksGame.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FallingBlocksGame.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FallingBlocksGame.dir/src/main.cpp.o -c /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/main.cpp

CMakeFiles/FallingBlocksGame.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FallingBlocksGame.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/main.cpp > CMakeFiles/FallingBlocksGame.dir/src/main.cpp.i

CMakeFiles/FallingBlocksGame.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FallingBlocksGame.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/main.cpp -o CMakeFiles/FallingBlocksGame.dir/src/main.cpp.s

CMakeFiles/FallingBlocksGame.dir/src/renderer.cpp.o: CMakeFiles/FallingBlocksGame.dir/flags.make
CMakeFiles/FallingBlocksGame.dir/src/renderer.cpp.o: ../src/renderer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FallingBlocksGame.dir/src/renderer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FallingBlocksGame.dir/src/renderer.cpp.o -c /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/renderer.cpp

CMakeFiles/FallingBlocksGame.dir/src/renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FallingBlocksGame.dir/src/renderer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/renderer.cpp > CMakeFiles/FallingBlocksGame.dir/src/renderer.cpp.i

CMakeFiles/FallingBlocksGame.dir/src/renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FallingBlocksGame.dir/src/renderer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/renderer.cpp -o CMakeFiles/FallingBlocksGame.dir/src/renderer.cpp.s

CMakeFiles/FallingBlocksGame.dir/src/controller.cpp.o: CMakeFiles/FallingBlocksGame.dir/flags.make
CMakeFiles/FallingBlocksGame.dir/src/controller.cpp.o: ../src/controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FallingBlocksGame.dir/src/controller.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FallingBlocksGame.dir/src/controller.cpp.o -c /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/controller.cpp

CMakeFiles/FallingBlocksGame.dir/src/controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FallingBlocksGame.dir/src/controller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/controller.cpp > CMakeFiles/FallingBlocksGame.dir/src/controller.cpp.i

CMakeFiles/FallingBlocksGame.dir/src/controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FallingBlocksGame.dir/src/controller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/controller.cpp -o CMakeFiles/FallingBlocksGame.dir/src/controller.cpp.s

CMakeFiles/FallingBlocksGame.dir/src/board.cpp.o: CMakeFiles/FallingBlocksGame.dir/flags.make
CMakeFiles/FallingBlocksGame.dir/src/board.cpp.o: ../src/board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/FallingBlocksGame.dir/src/board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FallingBlocksGame.dir/src/board.cpp.o -c /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/board.cpp

CMakeFiles/FallingBlocksGame.dir/src/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FallingBlocksGame.dir/src/board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/board.cpp > CMakeFiles/FallingBlocksGame.dir/src/board.cpp.i

CMakeFiles/FallingBlocksGame.dir/src/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FallingBlocksGame.dir/src/board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/board.cpp -o CMakeFiles/FallingBlocksGame.dir/src/board.cpp.s

CMakeFiles/FallingBlocksGame.dir/src/piece.cpp.o: CMakeFiles/FallingBlocksGame.dir/flags.make
CMakeFiles/FallingBlocksGame.dir/src/piece.cpp.o: ../src/piece.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/FallingBlocksGame.dir/src/piece.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FallingBlocksGame.dir/src/piece.cpp.o -c /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/piece.cpp

CMakeFiles/FallingBlocksGame.dir/src/piece.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FallingBlocksGame.dir/src/piece.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/piece.cpp > CMakeFiles/FallingBlocksGame.dir/src/piece.cpp.i

CMakeFiles/FallingBlocksGame.dir/src/piece.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FallingBlocksGame.dir/src/piece.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/piece.cpp -o CMakeFiles/FallingBlocksGame.dir/src/piece.cpp.s

CMakeFiles/FallingBlocksGame.dir/src/game.cpp.o: CMakeFiles/FallingBlocksGame.dir/flags.make
CMakeFiles/FallingBlocksGame.dir/src/game.cpp.o: ../src/game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/FallingBlocksGame.dir/src/game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FallingBlocksGame.dir/src/game.cpp.o -c /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/game.cpp

CMakeFiles/FallingBlocksGame.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FallingBlocksGame.dir/src/game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/game.cpp > CMakeFiles/FallingBlocksGame.dir/src/game.cpp.i

CMakeFiles/FallingBlocksGame.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FallingBlocksGame.dir/src/game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/src/game.cpp -o CMakeFiles/FallingBlocksGame.dir/src/game.cpp.s

# Object files for target FallingBlocksGame
FallingBlocksGame_OBJECTS = \
"CMakeFiles/FallingBlocksGame.dir/src/main.cpp.o" \
"CMakeFiles/FallingBlocksGame.dir/src/renderer.cpp.o" \
"CMakeFiles/FallingBlocksGame.dir/src/controller.cpp.o" \
"CMakeFiles/FallingBlocksGame.dir/src/board.cpp.o" \
"CMakeFiles/FallingBlocksGame.dir/src/piece.cpp.o" \
"CMakeFiles/FallingBlocksGame.dir/src/game.cpp.o"

# External object files for target FallingBlocksGame
FallingBlocksGame_EXTERNAL_OBJECTS =

FallingBlocksGame: CMakeFiles/FallingBlocksGame.dir/src/main.cpp.o
FallingBlocksGame: CMakeFiles/FallingBlocksGame.dir/src/renderer.cpp.o
FallingBlocksGame: CMakeFiles/FallingBlocksGame.dir/src/controller.cpp.o
FallingBlocksGame: CMakeFiles/FallingBlocksGame.dir/src/board.cpp.o
FallingBlocksGame: CMakeFiles/FallingBlocksGame.dir/src/piece.cpp.o
FallingBlocksGame: CMakeFiles/FallingBlocksGame.dir/src/game.cpp.o
FallingBlocksGame: CMakeFiles/FallingBlocksGame.dir/build.make
FallingBlocksGame: /usr/lib/x86_64-linux-gnu/libSDL2_ttf.so
FallingBlocksGame: /usr/lib/x86_64-linux-gnu/libSDL2_ttf.so
FallingBlocksGame: CMakeFiles/FallingBlocksGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable FallingBlocksGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FallingBlocksGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FallingBlocksGame.dir/build: FallingBlocksGame

.PHONY : CMakeFiles/FallingBlocksGame.dir/build

CMakeFiles/FallingBlocksGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FallingBlocksGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FallingBlocksGame.dir/clean

CMakeFiles/FallingBlocksGame.dir/depend:
	cd /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/build /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/build /home/jason/Udacity/CppND-Capstone-FallingBlocks-Game/build/CMakeFiles/FallingBlocksGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FallingBlocksGame.dir/depend

