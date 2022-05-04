#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <string>
#include <iostream>
using namespace testing;

struct LogicTest : public Test
{
    LogicTest()
    {};
};
TEST_F(LogicTest, FirstTest)
{
    ASSERT_EQ(0,0);
}
