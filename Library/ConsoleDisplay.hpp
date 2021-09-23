#include <string>
#include <iostream>
#include <vector>
#include "iDisplay.hpp"

class ConsoleDisplay : public iDisplay
{
private:
    /* data */
public:
    void display(std::vector <std::vector <char>> board) override;
    std::string getDisplayString(std::vector <std::vector <char>> board);
    ConsoleDisplay(/* args */) = default;
    ~ConsoleDisplay() = default;
};


