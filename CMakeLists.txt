cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)
add_definitions(-DCMAKE_BUILD_TYPE=debug)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(SDL2Test)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(SDL2TTF REQUIRED)
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS} src)

add_executable(FallingBlocksGame src/main.cpp src/renderer.cpp src/controller.cpp src/board.cpp src/piece.cpp src/game.cpp)
string(STRIP ${SDL2_LIBRARIES} SDL2_LIBRARIES)
target_link_libraries(FallingBlocksGame ${SDL2_LIBRARIES} ${SDL2TTF_LIBRARY})
