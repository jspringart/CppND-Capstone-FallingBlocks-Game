#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "board.h"

class Renderer {
 public:
  Renderer(const std::size_t screenWidth, const std::size_t screenHeight,
           const std::size_t gridWidth, const std::size_t gridHeight);
  ~Renderer();
  
  void Render(Board &board);

 private:
  SDL_Window *sdlWindow;
  SDL_Renderer *sdlRenderer;
  TTF_Font* _font;
  SDL_Color _white;
  SDL_Rect _messageRect;

  const std::size_t screenWidth;
  const std::size_t screenHeight;
  const std::size_t gridWidth;
  const std::size_t gridHeight;
};

#endif