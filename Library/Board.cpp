#include "Board.hpp"
#include "Pieces/Pawn.hpp"
#include "Pieces/Knight.hpp"
#include "Pieces/King.hpp"
#include "Pieces/Bishop.hpp"
#include "Pieces/Rook.hpp"
#include "Pieces/Queen.hpp"

Board::Board()
{   
    for(int i = 0; i<8;i++)
    {
        board.push_back(std::move(*new std::vector<Square>));
        for(int j = 0; j<8; j++)
        {
            board[i].push_back(Square());
        }
    }
        
}
std::vector<std::vector <Square>> Board::getBoard()
{
    return board;
}
void Board::init()
{
    board[1][0].setPiece(new Pawn());
    board[1][1].setPiece(new Pawn());
    board[1][2].setPiece(new Pawn());
    board[1][3].setPiece(new Pawn());
    board[1][4].setPiece(new Pawn());
    board[1][5].setPiece(new Pawn());
    board[1][6].setPiece(new Pawn());
    board[1][7].setPiece(new Pawn());
    board[6][0].setPiece(new Pawn());
    board[6][1].setPiece(new Pawn());
    board[6][2].setPiece(new Pawn());
    board[6][3].setPiece(new Pawn());
    board[6][4].setPiece(new Pawn());
    board[6][5].setPiece(new Pawn());
    board[6][6].setPiece(new Pawn());
    board[6][7].setPiece(new Pawn());
    board[0][0].setPiece(new Rook());
    board[0][1].setPiece(new Knight());
    board[0][2].setPiece(new Bishop());
    board[0][3].setPiece(new Queen());
    board[0][4].setPiece(new King());
    board[0][5].setPiece(new Bishop());
    board[0][6].setPiece(new Knight());
    board[0][7].setPiece(new Rook());
    board[7][0].setPiece(new Rook());
    board[7][1].setPiece(new Knight());
    board[7][2].setPiece(new Bishop());
    board[7][3].setPiece(new Queen());
    board[7][4].setPiece(new King());
    board[7][5].setPiece(new Bishop());
    board[7][6].setPiece(new Knight());
    board[7][7].setPiece(new Rook());
}