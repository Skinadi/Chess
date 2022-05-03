#pragma once
#include "iPiece.hpp"
class Knight : public iPiece
{
private:
    /* data */
public:
    Knight(/* args */);
    void move(int x,int t) override;
    ~Knight();
};
