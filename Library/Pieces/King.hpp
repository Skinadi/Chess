#pragma once
#include "iPiece.hpp"
class King : public iPiece
{
private:
    /* data */
public:
    King(/* args */);
    void move(int x,int t) override;
    ~King();
};

