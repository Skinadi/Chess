#include "Board.hpp"
Board::Board()
{   
    for(int i = 0; i<8;i++)
    {
        board.push_back(std::move(*new std::vector<char>));
        for(int j = 0; j<8; j++)
        {
            board[i].push_back('E');
        }
    }
        
}
std::vector<std::vector <char>> Board::getBoard()
{
    return board;
}
void Board::init()
{
    board[1][0]='P';
    board[1][1]='P';
    board[1][2]='P';
    board[1][3]='P';
    board[1][4]='P';
    board[1][5]='P';
    board[1][6]='P';
    board[1][7]='P';
    board[6][0]='P';
    board[6][1]='P';
    board[6][2]='P';
    board[6][3]='P';
    board[6][4]='P';
    board[6][5]='P';
    board[6][6]='P';
    board[6][7]='P';
    board[0][0]='R';
    board[0][1]='J';
    board[0][2]='B';
    board[0][3]='Q';
    board[0][4]='K';
    board[0][5]='B';
    board[0][6]='J';
    board[0][7]='R';
    board[7][0]='R';
    board[7][1]='J';
    board[7][2]='B';
    board[7][3]='Q';
    board[7][4]='K';
    board[7][5]='B';
    board[7][6]='J';
    board[7][7]='R';
}