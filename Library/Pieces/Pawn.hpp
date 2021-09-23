#pragma once
#include "iPiece.hpp"
class Pawn : public iPiece
{
private:
    /* data */
public:
    Pawn(/* args */);
    void move(int x,int t) override;
    ~Pawn();
};
