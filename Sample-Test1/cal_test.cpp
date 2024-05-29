#include "pch.h"
#include "../Project9/cal.cpp"

TEST(TestCaseName, SumTest) {
    Cal cal;
    int actual = cal.getSum(3, 7);
    int expected = 10;

    EXPECT_EQ(actual, expected);
}

TEST(TestCaseName, SumSumTest) {
    Cal cal;
    int actual = cal.getSumSum(1, 3, 7);
    int expected = 11;

    EXPECT_EQ(actual, expected);
}