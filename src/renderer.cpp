#include <iostream>
#include <string>
#include "renderer.h"

Renderer::Renderer(const std::size_t screenWidth, const std::size_t screenHeight, const std::size_t gridWidth, const std::size_t gridHeight)
    : screenWidth(screenWidth), screenHeight(screenHeight), gridWidth(gridWidth), gridHeight(gridHeight) 
{
  // Initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) 
  {
    std::cerr << "SDL could not initialize.\n";
    std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  }

  if(TTF_Init() < 0)
  {
    std::cerr << "TTF could not initialize.\n";
    std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  }

  // Create Window
  sdlWindow = SDL_CreateWindow("Falling Blocks Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screenWidth, screenHeight, SDL_WINDOW_SHOWN);

  if (nullptr == sdlWindow) 
  {
    std::cerr << "Window could not be created.\n";
    std::cerr << " SDL_Error: " << SDL_GetError() << "\n";
  }

  // Create renderer
  sdlRenderer = SDL_CreateRenderer(sdlWindow, -1, SDL_RENDERER_ACCELERATED);
  if (nullptr == sdlRenderer) 
  {
    std::cerr << "Renderer could not be created.\n";
    std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  }

  _font = TTF_OpenFont("../src/OpenSans-Regular.ttf", 24);
  if(!_font)
  {
    std::cerr << "TTF Error: " << TTF_GetError() << "\n";
  }

  _white = {255, 255, 255};
  _messageRect.x = 370;  //controls the rect's x coordinate 
  _messageRect.y = 270; // controls the rect's y coordinte
  _messageRect.w = 220; // controls the width of the rect
  _messageRect.h = 100; // controls the height of the rect
}

Renderer::~Renderer() {
  SDL_DestroyWindow(sdlWindow);
  SDL_Quit();
}

void Renderer::Render(Board &board)
{
    SDL_Rect block;
    block.w = screenWidth / gridWidth;
    block.h = screenHeight / gridHeight;

    // Clear screen
    SDL_SetRenderDrawColor(sdlRenderer, 0x00, 0x00, 0x00, 0xFF);
    SDL_RenderClear(sdlRenderer);

    //Render board
    std::vector<std::vector<GameItems>> b = board.GetGameBoard();
    for (size_t r = 0; r < b.size(); r++)
    {
      for (size_t c = 0; c < b[r].size(); c++)
      {
        if(b[r][c] == GameItems::I_Wall || b[r][c] == GameItems::I_Floor)
        {
          SDL_SetRenderDrawColor(sdlRenderer, 0xFF, 0xCC, 0x00, 0xFF); 
          block.x = c * block.w;
          block.y = r * block.h;
          SDL_RenderFillRect(sdlRenderer, &block);         
        }
        else if(b[r][c] == GameItems::I_CurrentPiece)
        {
          SDL_SetRenderDrawColor(sdlRenderer, 0xFF, 0x00, 0x00, 0xFF);
          block.x = c * block.w;
          block.y = r * block.h;
          SDL_RenderFillRect(sdlRenderer, &block);
        }        
        else if(b[r][c] == GameItems::I_LockedPiece)
        {
          SDL_SetRenderDrawColor(sdlRenderer, 0x00, 0x00, 0xFF, 0xFF);
          block.x = c * block.w;
          block.y = r * block.h;
          SDL_RenderFillRect(sdlRenderer, &block);
        }     
      }
    }

    // Render Next Piece
    b = board.GetNextPieceDisplay();
    int cOffset = 14;
    int rOffset = 1;
    for (size_t r = 0; r < b.size(); r++)
    {
      for (size_t c = 0; c < b[r].size(); c++)
      {
        if(b[r][c] == GameItems::I_Wall)
        {
          SDL_SetRenderDrawColor(sdlRenderer, 0xFF, 0xCC, 0x00, 0xFF); 
          block.x = (c + cOffset) * block.w;
          block.y = (r + rOffset) * block.h;
          SDL_RenderFillRect(sdlRenderer, &block);         
        }
        else if(b[r][c] == GameItems::I_CurrentPiece)
        {
          SDL_SetRenderDrawColor(sdlRenderer, 0xFF, 0x00, 0x00, 0xFF);
          block.x = (c + cOffset) * block.w;
          block.y = (r + rOffset) * block.h;
          SDL_RenderFillRect(sdlRenderer, &block);
        }        
        else if(b[r][c] == GameItems::I_LockedPiece)
        {
          SDL_SetRenderDrawColor(sdlRenderer, 0x00, 0x00, 0xFF, 0xFF);
          block.x = c + cOffset * block.w;
          block.y = r + rOffset * block.h;
          SDL_RenderFillRect(sdlRenderer, &block);
        }     
      }
    }

    // Render Next Piece
    b = board.GetScoreDisplay();
    cOffset = 13;
    rOffset = 10;
    for (size_t r = 0; r < b.size(); r++)
    {
      for (size_t c = 0; c < b[r].size(); c++)
      {
        if(b[r][c] == GameItems::I_Wall)
        {
          SDL_SetRenderDrawColor(sdlRenderer, 0xFF, 0xCC, 0x00, 0xFF); 
          block.x = (c + cOffset) * block.w;
          block.y = (r + rOffset) * block.h;
          SDL_RenderFillRect(sdlRenderer, &block);         
        }    
      }
    }

    // Render Score   
    std::string score = "Score: " + std::to_string(board.GetScore()); 
    SDL_Surface* surfaceMessage = TTF_RenderText_Solid(_font, score.c_str(), _white);
    SDL_Texture* Message = SDL_CreateTextureFromSurface(sdlRenderer, surfaceMessage);
    SDL_RenderCopy(sdlRenderer, Message, NULL, &_messageRect); //you put the renderer's name first, the Message, the crop size(you can ignore this if you don't want to dabble with cropping), and the rect which is the size and coordinate of your texture

    //Don't forget to free your surface and texture
    SDL_FreeSurface(surfaceMessage);
    SDL_DestroyTexture(Message);

    // Update Screen
    SDL_RenderPresent(sdlRenderer);
}