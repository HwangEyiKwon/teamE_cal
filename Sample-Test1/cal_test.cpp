#include "pch.h"
#include "../Project9/cal.cpp"

TEST(CalTest, ZegoTest) {
	int input = 2;
	int expected = 4;

	Cal cal;
	int actual = cal.getZegop(input);

	EXPECT_EQ(actual, expected);
}