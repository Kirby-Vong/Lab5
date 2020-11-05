#ifndef __AREA_PASSING_TESTS_HPP__
#define __AREA_PASSING_TESTS_HPP__

#include "rectangle.cpp"

TEST(AreaTest, AreaNonZero) {
	Rectangle r1 = Rectangle(2.0, 4.0);
	EXPECT_EQ(r1.area(), 8.0);
}

TEST(AreaTest, AreaZero) {
	Rectangle r1 = Rectangle(5.0,0.0);
	EXPECT_EQ(r1.area(), 0.0);
}

TEST(AreaTest, AreaNegative) {
	Rectangle r1 = Rectangle(-4.0, 5.0);
	EXPECT_EQ(r1.area(), 20.0);
}

TEST(AreaTest, AreaNoInput) {
	Rectangle r1 = Rectangle("","");
	EXPECT_EQ(r1.area(), "");
}

#endif
