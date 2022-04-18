#pragma once
#include "iPiece.hpp"
class Queen : public iPiece
{
private:
    /* data */
public:
    Queen(/* args */);
    void move(int x,int t) override;
    ~Queen();
};

