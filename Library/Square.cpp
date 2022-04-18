#include "Square.hpp"
Square::Square(/* args */)
{
    occupied = false;
    piece = nullptr;
}

Square::~Square()
{

}
bool Square::getoccupied()
{
    return occupied;
}
void Square::setPiece(iPiece * piece)
{
    if(!occupied)
        occupied = true;
    if(this->piece!=nullptr)
        delete this->piece;
    this->piece = piece;
}
iPiece * Square::getPiece()
{
    if(piece!=nullptr)
    return piece;
}
SQUARES Square::getSquareId()
{
    if(!occupied)
        return SQUARES::EMPTY;
    else
        switch (piece->getID())
        {
        case 'K':
            return SQUARES::KING;
        case 'Q':
            return SQUARES::QUEEN;
        case 'J':
            return SQUARES::KNIGHT;
        case 'B':
            return SQUARES::BISHOP;
        case 'R':
            return SQUARES::ROOK;
        case 'P':
            return SQUARES::PAWN;
        default:
            break;
        }

}