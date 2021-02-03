#include <iostream>
#include <SDL2/SDL.h>
#include "controller.h"
#include "board.h"

void Controller::HandleInput(bool &running, Board &board) const
{
    SDL_Event e;
    while(SDL_PollEvent(&e))
    {
        if(e.type == SDL_QUIT)
        {
            running = false;
        }
        else if (e.type == SDL_KEYDOWN)
        {
            switch(e.key.keysym.sym)
            {
                case SDLK_ESCAPE:
                    running = false;
                    break;

                case SDLK_LEFT:
                    board.MoveLeft();
                    break;

                case SDLK_RIGHT:
                    board.MoveRight();
                    break;  

                case SDLK_DOWN:
                    board.MoveDown();
                    break;

                case SDLK_UP:
                    board.Rotate();
                    break;
            }
        }
        
    }
}