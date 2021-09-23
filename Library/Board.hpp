#include <vector>
#include "iPiece.hpp"
class Board
{
private:
    std::vector <std::vector<char>> board;
public:
    std::vector <std::vector<char>> getBoard();
    void init();
    Board(/* args */);
    ~Board()=default;
};

