#include "game.h"
#include <random>
#include <iostream>
#include <SDL2/SDL.h>
#include "piece.h"

Game::Game(std::size_t grid_width, std::size_t grid_height)
{    
}

void Game::Run(Controller const &controller, Renderer &renderer, std::size_t target_frame_duration)
{
    Uint32 title_timestamp = SDL_GetTicks();
    Uint32 frame_start;
    Uint32 frame_end;
    Uint32 frame_duration;
    int frame_count = 0;
    bool running = true;

    while(running)
    {
        frame_start = SDL_GetTicks();       

        // Keep track of how long each loop through the input/update/render cycle takes.
        frame_count++;
        frame_duration = frame_end - frame_start;

        controller.HandleInput(running, board); 

        if (frame_end - title_timestamp >= 500) 
        {   
            board.MoveDown();
            frame_count = 0;
            title_timestamp = frame_end;
        }
        
        board.LockPieces();
        renderer.Render(board);

        if(board.CheckGameOver())
        {
            running = false;
        }

        frame_end = SDL_GetTicks();

        // If the time for this frame is too small (i.e. frame_duration is
        // smaller than the target ms_per_frame), delay the loop to
        // achieve the correct frame rate.
        if (frame_duration < target_frame_duration) {
            SDL_Delay(target_frame_duration - frame_duration);
        }
    }    
}