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
            s+= board.getBoard()[i][j].getoccupied();
        }
        s+="\n";
    }
    s+=" 12345678\n";
    return s;
}
void ConsoleDisplay::display(Board board)
{

    for(int i = 0; i<board.getBoard().size();i++)
    {
        std::cout << i+1 << " ";
        for(int j = 0;j<=board.getBoard()[i].size();j++)
        {
            std::cout << board.getBoard()[i][j].getoccupied();
        }
        std::cout << std::endl;
    }
    std::cout << " 12345678" << std::endl;
    
}