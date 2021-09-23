#include "ConsoleDisplay.hpp"
std::string ConsoleDisplay::getDisplayString(std::vector <std::vector <char>> board)
{
    std::string s;
    for(int i = 0; i<board.size();i++)
    {
        s+=(char)(i+1+48);
        s+=" ";
        for(int j = 0;j<board[i].size();j++)
        {
            s+= board[i][j];
        }
        s+="\n";
    }
    s+=" 12345678\n";
    return s;
}
void ConsoleDisplay::display(std::vector <std::vector <char>> board)
{
    for(int i = 0; i<board.size();i++)
    {
        std::cout << i+1 << " ";
        for(int j = 0;j<=board[i].size();j++)
        {
            std::cout << board[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << " 12345678" << std::endl;
    
}