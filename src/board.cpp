#include "board.h"
#include <iostream>

Board::Board()
    : _currentPiece(0), _nextPiece(0), engine(dev()), randomPiece(0, static_cast<int>(6))
{
    _gameBoard = {{GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                  {GameItems::I_Floor, GameItems::I_Floor, GameItems::I_Floor, GameItems::I_Floor, GameItems::I_Floor, GameItems::I_Floor, GameItems::I_Floor, GameItems::I_Floor,GameItems::I_Floor, GameItems::I_Floor, GameItems::I_Floor, GameItems::I_Floor,}};

    _nextPieceDisplay = {{GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall},
                         {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                         {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                         {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                         {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                         {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                         {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                         {GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall}};

    _scoreDisplay = {{GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall},
                         {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                         {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                         {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall},
                         {GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall, GameItems::I_Wall}};

    floor = false;
    score = 0;
    NewPiece();   
}

std::vector<std::vector<GameItems>> Board::GetGameBoard()
{
    return _gameBoard;
}

std::vector<std::vector<GameItems>> Board::GetNextPieceDisplay()
{
    return _nextPieceDisplay;
}

std::vector<std::vector<GameItems>> Board::GetScoreDisplay()
{
    return _scoreDisplay;
}

void Board::MoveLeft()
{
    //Check if move hits wall
    std::vector<std::vector<int>> currtGrid = _currentPiece.GetGrid();
    int newPosition = _currentColumn - 1;
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        if(currtGrid[y][0] + _currentRow >= 0)
        {
            if(_gameBoard[currtGrid[y][0] + _currentRow][currtGrid[y][1] + newPosition] == GameItems::I_Wall || _gameBoard[currtGrid[y][0] + _currentRow][currtGrid[y][1] + newPosition] == GameItems::I_LockedPiece)
            {
                return;
            }
        }                
    }

    // clear 
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        if(currtGrid[y][0] + _currentRow >= 0)
        {
            _gameBoard[currtGrid[y][0] + _currentRow][currtGrid[y][1] + _currentColumn] = GameItems::I_Empty;
        }        
    }   
    
    _currentColumn = newPosition;
    // move
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        if(currtGrid[y][0] + _currentRow >= 0)
        {
            _gameBoard[currtGrid[y][0] + _currentRow][currtGrid[y][1] + _currentColumn] = GameItems::I_CurrentPiece;
        }        
    }  
}

void Board::MoveRight()
{
    //Check if move hits wall
    std::vector<std::vector<int>> currtGrid = _currentPiece.GetGrid();
    int newPosition = _currentColumn + 1;
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        if(currtGrid[y][0] + _currentRow >= 0)
        {
            if(_gameBoard[currtGrid[y][0] + _currentRow][currtGrid[y][1] + newPosition] == GameItems::I_Wall || _gameBoard[currtGrid[y][0] + _currentRow][currtGrid[y][1] + newPosition] == GameItems::I_LockedPiece)
            {
                return;
            }
        }                
    }

    // clear 
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        if(currtGrid[y][0] + _currentRow >= 0)
        {
            _gameBoard[currtGrid[y][0] + _currentRow][currtGrid[y][1] + _currentColumn] = GameItems::I_Empty;
        }        
    }   
    
    _currentColumn = newPosition;
    // move
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        if(currtGrid[y][0] + _currentRow >= 0)
        {
            _gameBoard[currtGrid[y][0] + _currentRow][currtGrid[y][1] + _currentColumn] = GameItems::I_CurrentPiece;
        }        
    }  
}

void Board::MoveDown()
{
    //Check if move hits wall
    std::vector<std::vector<int>> currtGrid = _currentPiece.GetGrid();
    int newPosition = _currentRow + 1;
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        if(currtGrid[y][0] + _currentRow >= 0)
        {
            if(_gameBoard[currtGrid[y][0] + newPosition][currtGrid[y][1] + _currentColumn] == GameItems::I_Floor || _gameBoard[currtGrid[y][0] + newPosition][currtGrid[y][1] + _currentColumn] == GameItems::I_LockedPiece)
            {
                floor = true;
                return;
            }
        }                
    }

    // clear 
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        if(currtGrid[y][0] + _currentRow >= 0)
        {
            _gameBoard[currtGrid[y][0] + _currentRow][currtGrid[y][1] + _currentColumn] = GameItems::I_Empty;
        }        
    }   
    
    _currentRow = newPosition;
    // move
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        if(currtGrid[y][0] + _currentRow >= 0)
        {
            _gameBoard[currtGrid[y][0] + _currentRow][currtGrid[y][1] + _currentColumn] = GameItems::I_CurrentPiece;
        }        
    }
}

void Board::Rotate()
{
    std::vector<std::vector<int>> currtGrid = _currentPiece.GetGrid();
    int position = _currentPiece.GetPosition();
    _currentPiece.Rotate();
    std::vector<std::vector<int>> rotatedGrid = _currentPiece.GetGrid();
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        if(currtGrid[y][0] + _currentRow >= 0)
        {
            if(_gameBoard[rotatedGrid[y][0] + _currentRow][rotatedGrid[y][1] + _currentColumn] == GameItems::I_Floor || _gameBoard[rotatedGrid[y][0] + _currentRow][rotatedGrid[y][1] + _currentColumn] == GameItems::I_Wall || _gameBoard[rotatedGrid[y][0] + _currentRow][rotatedGrid[y][1] + _currentColumn] == GameItems::I_LockedPiece)
            {
                _currentPiece.SetGrid(currtGrid);
                _currentPiece.SetPosition(position);
                return;
            }
        }                
    }
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        if(currtGrid[y][0] + _currentRow >= 0)
        {
            _gameBoard[currtGrid[y][0] + _currentRow][currtGrid[y][1] + _currentColumn] = GameItems::I_Empty;
        }        
    }  
    
    currtGrid = _currentPiece.GetGrid();
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        if(currtGrid[y][0] + _currentRow >= 0)
        {
            _gameBoard[currtGrid[y][0] + _currentRow][currtGrid[y][1] + _currentColumn] = GameItems::I_CurrentPiece;
        }        
    }
}

void Board::LockPieces()
{
    if(floor)
    {
        std::vector<std::vector<int>> currtGrid = _currentPiece.GetGrid();
        for (size_t y = 0; y < currtGrid.size(); y++)
        {
            if(currtGrid[y][0] + _currentRow >= 0)
            {
                _gameBoard[currtGrid[y][0] + _currentRow][currtGrid[y][1] + _currentColumn] = GameItems::I_LockedPiece;
                std::cout << std::to_string(currtGrid[y][0] + _currentRow) << "\n";
            }        
        }
        floor = false;
        if(!CheckGameOver())
        {
            NewPiece(); 
            CheckIfNeedToDeleteRows();
            //DeleteRows();  
            DropRows();
        }             
    }
}

void Board::NewPiece()
{
    _currentPiece = _nextPiece;
    _nextPiece = Piece(randomPiece(engine));
    std::vector<std::vector<int>> currtGrid = _currentPiece.GetGrid();
    _currentRow = 0;
    _currentColumn = 5;
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        if(currtGrid[y][0] + _currentRow >= 0)
        {
            _gameBoard[currtGrid[y][0] + _currentRow][currtGrid[y][1] + _currentColumn] = GameItems::I_CurrentPiece;
        }        
    }


    int centerRow = (_nextPieceDisplay.size() / 2);
    int centerCol = (_nextPieceDisplay[0].size() / 2);
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        _nextPieceDisplay[currtGrid[y][0] + centerRow][currtGrid[y][1] + centerCol] = GameItems::I_Empty;     
    } 
    currtGrid = _nextPiece.GetGrid();
    for (size_t y = 0; y < currtGrid.size(); y++)
    {
        _nextPieceDisplay[currtGrid[y][0] + centerRow][currtGrid[y][1] + centerCol] = GameItems::I_CurrentPiece;     
    } 
}

void Board::CheckIfNeedToDeleteRows()
{
    for (size_t row = _gameBoard.size() - 2; row > 0; row--)
    {
        for (size_t i = 1; i < _gameBoard[row].size() - 1; i++)
        {
            if(_gameBoard[row][i] == GameItems::I_Empty)
            {
                break;
            } 
            if(i == _gameBoard[row].size() - 2)    
            {
                rowsToDelete.push_back(row);
            }  
            if(row == 0)
            {
                return;
            }  
        }        
    }        
}

void Board::DeleteRows()
{
    if(rowsToDelete.size() > 0)
    {
        for (size_t i = 0; i < rowsToDelete.size(); i++)
        {
            for (size_t c = 1; c < _gameBoard[i].size(); c++)
            {
                _gameBoard[rowsToDelete[i]][c] = GameItems::I_Empty;
            }
        }        
    }    
}

int Board::GetScore()
{
    return score;
}

void Board::DropRows()
{
    for (size_t i = 0; i < rowsToDelete.size(); i++)
    {
        _gameBoard.erase(_gameBoard.begin() + rowsToDelete[i]);        
    }
    for (size_t i = 0; i < rowsToDelete.size(); i++)
    {
        _gameBoard.insert(_gameBoard.begin(), std::vector<GameItems> {GameItems::I_Wall, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Empty, GameItems::I_Wall});
    }

    score = score + (rowsToDelete.size() * 10);
    
    rowsToDelete.clear();
}

bool Board::CheckGameOver()
{
    int row = 0;
    bool gameOver = false;
    for (size_t i = 0; i < _gameBoard[row].size(); i++)
    {
        if(_gameBoard[row][i] == GameItems::I_LockedPiece)
        {
            gameOver = true;
        }
    }

    return gameOver;
    
}