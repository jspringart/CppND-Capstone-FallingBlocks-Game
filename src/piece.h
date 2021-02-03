#ifndef PIECE_H
#define PIECE_H

#include <vector>

class Piece {
 public:
    Piece(int piece);
    void Rotate();
    std::vector<std::vector<int>> GetGrid();  
    void SetGrid(std::vector<std::vector<int>> grid); 
    int GetPosition();
    void SetPosition(int p);   

 private:
    void SelectPiece();

    std::vector<std::vector<int>> _grid; 
    int _piece;
    int _position;
};

#endif