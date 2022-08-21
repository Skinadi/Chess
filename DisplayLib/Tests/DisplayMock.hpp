#pragma once
#include <gmock/gmock.h>
#include "iDisplay.hpp"
#include <string>
#include <vector>

class DisplayMock : public iDisplay
{

public:
    DisplayMock();
    ~DisplayMock();
    MOCK_METHOD(void, display, (Board board), (override));
};

