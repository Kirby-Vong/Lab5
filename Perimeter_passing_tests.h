#ifndef __PERIMETER_PASSING_TESTS_HPP__
#define __PERIMETER_PASSING_TESTS_HPP__

#include "rectangle.cpp"

TEST(PerimeterTest, PerimeterNonZero) {
	Rectangle r1 = Rectangle(3, 5);
	EXPECT_EQ(r1.perimeter(), 16);
}

TEST(PerimeterTest, PerimeterNegative) {
	Rectangle r1 = Rectangle(-5,5);
	EXPECT_EQ(r1.perimeter(), -20);
}

TEST(PerimeterTest, PerimeterZero) {
	Rectangle r1 = Rectangle(0,0);
	EXPECT_EQ(r1.perimeter(), 0);
}

TEST(PerimeterTest, PerimeterNoInput) {
	Rectangle r1 = Rectangle("","");
	EXPECT_EQ(r1.perimeter(), "");
}

#endif
