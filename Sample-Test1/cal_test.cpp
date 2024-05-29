#include "pch.h"
#include "../Project9/cal.cpp"

TEST(TestCaseName, SumTest) {
    Cal cal;
    int actual = cal.getSum(3, 7);
    int expected = 10;

    EXPECT_EQ(actual, expected);
}

TEST(CalTest, ZegoTest) {
	int input = 2;
	int expected = 4;

	Cal cal;
	int actual = cal.getZegop(input);

	EXPECT_EQ(actual, expected);
}