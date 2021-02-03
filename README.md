# CPPND: Capstone Falling Blocks Game

This is a Falling Blocks Game clone of Tetris.

The TFalling Blocks Game requires players to strategically rotate, move, and drop a procession of Blocks that fall into the rectangular Matrix. Players attempt to clear as many lines as possible by completing horizontal rows of blocks without empty space, but if the Block surpass the Skyline the game is over! It might sound simple, but strategy and speed can go a long way! Are YOU up for the challenge?

left arrow - move the block left
right arrow - move the block right
up arrow - rotate the block clock wise
down arrow  - move the block down

Project description
Program is divided into three classes.

classes:

Game.cpp Game.cpp (class) - the game loop is done here.

Board.cpp (class) - in this class we Place Grid in the background and calculate the score , also we check if there is Solid Line to be deleted or not.

Piece.cpp (class) - in this class we Initialize Blocks and render and move and rotate them.

The following rubric points are addressed
The project uses Object Oriented Programming techniques.
Classes use appropriate access specifiers for class members.
Class constructors utilize member initialization lists - ./src/Board.cpp:5
The project demonstrates an understanding of C++ functions and control structures.- src/main.cpp:14:17
The project uses destructors appropriately. - src/Renderer.cpp:51
Classes encapsulate behavior - ./src/Game.cpp/ - ./src/Piece.cpp - ./src/Board.cpp - ./src/controller.cpp - ./src/renderer.cpp
The project makes use of references in function declarations ./src/renderer.cpp:56 - ./src/controller.cpp:6


## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* SDL2_TTF >= 2.0
  * sudo apt-get install libsdl2-ttf-dev
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./FallingBlocksGame`.
