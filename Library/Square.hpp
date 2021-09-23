#pragma once
#include <memory>
#include <iPiece.hpp>

class Square
{
private:
    bool occupied;
    bool color;
    std::unique_ptr <iPiece> piece;
public:
    Square(/* args */);
    ~Square();
};


