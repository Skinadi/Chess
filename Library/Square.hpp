#pragma once
#include <memory>
#include "iPiece.hpp"

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
};


