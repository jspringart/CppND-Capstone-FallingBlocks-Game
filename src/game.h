#ifndef GAME_H
#define GAME_H


#include <vector>
#include <SDL2/SDL.h>
#include "controller.h"
#include "renderer.h"
#include "board.h"

class Game {
 public:
  Game(std::size_t grid_width, std::size_t grid_height);
  void Run(Controller const &controller, Renderer &renderer, std::size_t target_frame_duration);

 private:
  std::vector<std::vector<int>> pieceGrid;

  //std::random_device dev;
  //std::mt19937 engine;
  //std::uniform_int_distribution<int> randomPiece;
  Board board;

  void Update(int &r, int &c, int newR, int newC, int oldR, int oldC, Piece &p);
  bool CheckIfWall(int r, int c);
  bool CheckIfFloor(int r, int c);
};

#endif