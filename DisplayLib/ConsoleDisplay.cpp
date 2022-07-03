#include "ConsoleDisplay.hpp"
std::string ConsoleDisplay::getDisplayString(Board board)
{
    std::string s;
    for(int i = 0; i<board.getBoard().size();i++)
    {
        s+=(char)(i+1+48);
        s+=" ";
        for(int j = 0;j<board.getBoard()[i].size();j++)
        {
            switch (board.getBoard()[i][j].getSquareId())
            {
            case EMPTY:
                s+='E';
                break;
            case KNIGHT:
                s+='J';
                break;
            case KING:
                s+='K';
                break;
            case ROOK:
                s+='R';
                break;
            case BISHOP:
                s+='B';
                break;
            case QUEEN:
                s+='Q';
                break;
            case PAWN:
                s+='P';
                break;
            default:
                break;
            }
        }
        s+="\n";
    }
    s+="  12345678\n";
    return s;
}
void ConsoleDisplay::display(Board board)
{

    for(int i = 0; i<board.getBoard().size();i++)
    {
        std::cout << i+1 << " ";
        for(int j = 0;j<=board.getBoard()[i].size();j++)
        {
            switch (board.getBoard()[i][j].getSquareId())
            {
            case EMPTY:
                std::cout << 'E';
                break;
            case KNIGHT:
                std::cout << 'J';
                break;
            case KING:
                std::cout << 'K';
                break;
            case ROOK:
                std::cout << 'R';
                break;
            case BISHOP:
                std::cout << 'B';
                break;
            case QUEEN:
                std::cout << 'Q';
                break;
            case PAWN:
                std::cout << 'P';
                break;
            default:
                break;
            }
        }
        std::cout << std::endl;
    }
    std::cout << "  12345678" << std::endl;
    
}