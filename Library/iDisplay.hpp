#pragma once
#include "Board.hpp"
class iDisplay
{
private:
    /* data */
public:
    virtual void display(Board board) = 0;

};

