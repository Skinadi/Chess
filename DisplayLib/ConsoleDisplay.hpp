#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "iDisplay.hpp"

class ConsoleDisplay : public iDisplay
{
private:
    /* data */
public:
    void display(Board board) override;
    std::string getDisplayString(Board board);
    ConsoleDisplay(/* args */) = default;
    ~ConsoleDisplay() = default;
};


