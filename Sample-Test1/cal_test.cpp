#include "pch.h"
#include "../Project9/cal.cpp"

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