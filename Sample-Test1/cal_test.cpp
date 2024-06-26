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
    
TEST(TestCaseName, MinusTest) {
    Cal cal;
    int actual = cal.getMinus(10, 5);
    int expected = 5;

    EXPECT_EQ(actual, expected);
}

class CalFixture : public testing::Test {
public:
	Cal cal;

	void diviceTest(int a, int b) {
		int ret = cal.getDivide(a, b);
		if (b != 0) {
			EXPECT_EQ(ret, a / b);
		}
		else {
			EXPECT_EQ(ret, -1);
		}
	}
};

TEST_F(CalFixture, DivideTest) {
	Cal cal;
	for (int i = 0; i < 15; i++) {
		diviceTest(10, i);
	}
}

TEST(CalTest, ZegopTest) {
	int input = 2;
	int expected = 4;

	Cal cal;
	int actual = cal.getZegop(input);

	EXPECT_EQ(actual, expected);
}

TEST(TestCaseName, SumSumTest) {
    Cal cal;
    int actual = cal.getSumSum(1, 3, 7);
    int expected = 11;
    EXPECT_EQ(actual, expected);
}
