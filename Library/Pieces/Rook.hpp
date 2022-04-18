#pragma once
#include "iPiece.hpp"
class Rook : public iPiece
{
private:
    /* data */
public:
    Rook(/* args */);
    void move(int x,int t) override;
    ~Rook();
};
