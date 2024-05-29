#include "pch.h"
#include "../Project9/cal.cpp"

TEST(TestCaseName, SumTest) {
    Cal cal;
    int actual = cal.getSum(3, 7);
    int expected = 10;

    EXPECT_EQ(actual, expected);
}

TEST(TestCaseName, GopTest) {
    Cal cal;
    int actual = cal.getGop(3, 7);
    int expected = 21;

    EXPECT_EQ(actual, expected);
}