#include <iostream>
#include "renderer.h"
#include "controller.h"
#include "game.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{24};
  constexpr std::size_t kGridHeight{24};

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);  
  Controller controller;
  Game game;
  game.Run(controller, renderer, kMsPerFrame);
  std::cout << "Falling Blocks has terminated successfully!\n";
  return 0;
}