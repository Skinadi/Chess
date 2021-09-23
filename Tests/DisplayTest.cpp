#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <string>
#include <iostream>
#include "DisplayMock.hpp"
#include "ConsoleDisplay.hpp"
#include "Board.hpp"
using namespace testing;

struct DisplayTest : public Test
{
    StrictMock <DisplayMock> displayMock;
    DisplayTest()
    {};
};
TEST_F(DisplayTest,FirstTest)
{
    ASSERT_EQ(0,0);
}
TEST_F(DisplayTest,EmptyBoardConsoleCheck)
{
    std::string s;
    s+="1 EEEEEEEE\n";
    s+="2 EEEEEEEE\n";
    s+="3 EEEEEEEE\n";
    s+="4 EEEEEEEE\n";
    s+="5 EEEEEEEE\n";
    s+="6 EEEEEEEE\n";
    s+="7 EEEEEEEE\n";
    s+="8 EEEEEEEE\n";
    s+=" 12345678\n";
    Board board;
    ConsoleDisplay display;
    EXPECT_EQ(s,display.getDisplayString(board));
}
TEST_F(DisplayTest,InitBoard)
{
    std::string s;
    s+="1 RJBQKBJR\n";
    s+="2 PPPPPPPP\n";
    s+="3 EEEEEEEE\n";
    s+="4 EEEEEEEE\n";
    s+="5 EEEEEEEE\n";
    s+="6 EEEEEEEE\n";
    s+="7 PPPPPPPP\n";
    s+="8 RJBQKBJR\n";
    s+=" 12345678\n";
    Board board;
    ConsoleDisplay display;
    board.init();
    EXPECT_EQ(s,display.getDisplayString(board));
}