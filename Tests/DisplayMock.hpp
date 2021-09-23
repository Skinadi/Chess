#pragma once
#include <gmock/gmock.h>
#include "iDisplay.hpp"
#include <string>

class DisplayMock : public iDisplay
{

public:
    DisplayMock();
    ~DisplayMock();
    MOCK_METHOD(void,display,(std::vector <std::vector <char>> board),(override));
};

