#pragma once
#include "Square.hpp"
#include <vector>
class Board
{
private:
    std::vector <std::vector<Square>> board;
public:
    std::vector <std::vector<Square>> getBoard();
    void init();
    Board(/* args */);
    ~Board()=default;
};

