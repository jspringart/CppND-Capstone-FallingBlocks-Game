#ifndef GAME_H
#define GAME_H

#include <vector>
#include <SDL2/SDL.h>
#include "controller.h"
#include "renderer.h"
#include "board.h"

class Game {
 public:
  void Run(Controller const &controller, Renderer &renderer, std::size_t target_frame_duration);

 private:
  std::vector<std::vector<int>> pieceGrid;
  Board board;
};

#endif