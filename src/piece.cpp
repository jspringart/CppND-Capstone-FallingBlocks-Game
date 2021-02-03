#include "piece.h"

Piece::Piece(int piece)
{
    _piece = piece;
    _position = 0;
    SelectPiece();   
}

void Piece::SelectPiece()
{
    switch(_piece)
    {
        // Square
        case 0:
            _grid = {{0, 0},
                    {0, 1},
                    {1, 0},
                    {1, 1}};
            break;

        // Line
        case 1:
            if(_position == 0 || _position == 2)
            {
                _grid = {{-1, 0},
                         {0, 0},
                         {1, 0},
                         {2, 0}};
            }
            else if(_position == 1 || _position == 3)
            {
                _grid = {{0, -1},
                         {0, 0},
                         {0, 1},
                         {0, 2}};
            }            
            break;

        // T
        case 2:
            if(_position == 0)
            {
                _grid = {{0, 0},
                         {0, -1},
                         {-1, 0},
                         {0, 1}};
            }
            else if(_position == 1)
            {
                _grid = {{0, 0},
                         {-1, 0},
                         {0, 1},
                         {1, 0}};
            }     
            else if(_position == 2)
            {
                _grid = {{0, 0},
                         {0, -1},
                         {0, 1},
                         {1, 0}};
            } 
            else if(_position == 3)
            {
                _grid = {{0, 0},
                         {0, -1},
                         {-1, 0},
                         {1, 0}};
            }        
            break;

        // L
        case 3:
            if(_position == 0)
            {
                _grid = {{0, 0},
                         {-1, 0},
                         {-2, 0}, 
                         {0, 1}};
            }
            else if(_position == 1)
            {
                _grid = {{0, 0},
                         {0, 1},
                         {0, 2}, 
                         {1, 0}};
            }
            else if(_position == 2)
            {
                _grid = {{0, 0},
                         {1, 0},
                         {2, 0}, 
                         {0, -1}};
            }
            else if(_position == 3)
            {
                _grid = {{0, 0},
                         {0, -1},
                         {0, -2}, 
                         {-1, 0}};
            }
            break;

        // J
        case 4:
            if(_position == 0)
            {
                _grid = {{0, 0},
                         {-1, 0},
                         {-2, 0}, 
                         {0, -1}};
            }
            else if(_position == 1)
            {
                _grid = {{0, 0},
                         {0, 1},
                         {0, 2}, 
                         {-1, 0}};
            }
            else if(_position == 2)
            {
                _grid = {{0, 0},
                         {1, 0},
                         {2, 0}, 
                         {0, 1}};
            }
            else if(_position == 3)
            {
                _grid = {{0, 0},
                         {0, -1},
                         {0, -2}, 
                         {1, 0}};
            }
            break;

        // Z
        case 5:
            if(_position == 0 || _position == 2)
            {
                _grid = {{0, 0},
                         {-1, -1},
                         {-1, 0}, 
                         {0, 1}};
            }
            else if(_position == 1 || _position == 3)
            {
                _grid = {{0, 0},
                         {-1, 1},
                         {0, 1}, 
                         {1, 0}};
            }
            break;

        // Rev Z
        case 6:
            if(_position == 0 || _position == 2)
            {
                _grid = {{0, 0},
                         {0, -1},
                         {-1, 0}, 
                         {-1, 1}};
            }
            else if(_position == 1 || _position == 3)
            {
                _grid = {{0, 0},
                         {-1, 0},
                         {0, 1}, 
                         {1, 1}};
            }
            break;
    } 
}

void Piece::Rotate()
{
    if(_position == 3)
    {
        _position = 0;
    }
    else
    {
        _position++;
    }
    SelectPiece();       
}

std::vector<std::vector<int>> Piece::GetGrid()
{
    return _grid;
}

void Piece::SetGrid(std::vector<std::vector<int>> grid)
{
    _grid = grid;
}

int Piece::GetPosition()
{
    return _position;
}

void Piece::SetPosition(int p)
{
    _position = p;
}