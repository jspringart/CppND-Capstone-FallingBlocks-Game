#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <random>
#include "piece.h"

enum class GameItems
{
    I_Empty,
    I_Wall,
    I_CurrentPiece,
    I_LockedPiece,
    I_Floor,
};

class Board {
 public:
    Board();
    std::vector<std::vector<GameItems>> GetGameBoard();
    std::vector<std::vector<GameItems>> GetNextPieceDisplay();
    std::vector<std::vector<GameItems>> GetScoreDisplay();

    void MoveRight();
    void MoveLeft(); 
    void MoveDown(); 
    void Rotate();
    void LockPieces(); 
    int GetScore();
    bool CheckGameOver();    

 private:
    std::vector<std::vector<GameItems>> _gameBoard;
    std::vector<std::vector<GameItems>> _nextPieceDisplay;
    std::vector<std::vector<GameItems>> _scoreDisplay;
    Piece _currentPiece;
    Piece _nextPiece;
    int _currentRow;
    int _currentColumn;
    bool floor;
    std::vector<int> rowsToDelete;
    int score;

    std::random_device dev;
    std::mt19937 engine;
    std::uniform_int_distribution<int> randomPiece;

    void NewPiece();
    void DeleteRows();
    void CheckIfNeedToDeleteRows();
    void DropRows();    
};

#endif