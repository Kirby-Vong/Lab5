#ifndef __CONSTRUCTOR_TEST_HPP__
#define __CONSTRUCTOR_TEST_HPP__

#include "rectangle.cpp"

TEST(ConstructorTest, ConstructorNonZero) {
    Rectangle r1 = Rectangle(2, 4);
    EXPECT_TRUE(r1.get_width() >  0 && r1.get_height() > 0);
}
TEST(ConstructorTest, ConstructorZero) {
    Rectangle r1 = Rectangle(0, 0);
    EXPECT_TRUE(r1.get_width() == 0 && r1.get_height() == 0);
}
TEST(ConstructorTest, ConstructorNegative) {
    Rectangle r1 = Rectangle(-2, -4);
    EXPECT_TRUE(r1.get_width() > 0 && r1.get_height() > 0);
}
#endif
