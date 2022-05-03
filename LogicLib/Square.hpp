#pragma once
#include <memory>
#include "iPiece.hpp"
#include "PiecesEnum.hpp"
class Square
{
private:
    bool occupied;
    bool color;
    iPiece * piece;
public:
    Square(/* args */);
    ~Square();
    bool getoccupied();
    void setPiece(iPiece * piece);
    iPiece * getPiece();
    SQUARES getSquareId();
};


