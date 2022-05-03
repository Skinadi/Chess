#pragma once
#include "iPiece.hpp"
class Bishop : public iPiece
{
private:
    /* data */
public:
    Bishop(/* args */);
    void move(int x,int t) override;
    ~Bishop();
};

