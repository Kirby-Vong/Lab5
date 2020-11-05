#ifndef __CONSTRUCTOR__FAILING_TESTS_H__
#define __CONSTRUCTOR__FAILING_TESTS_H__



TEST(ConstructorTest, ConstructorFailZero) {
    Rectangle r1 = Rectangle(1,2);
    EXPECT_TRUE(r1.get_width() == 0 && r1.get_height() == 0);
}
TEST(ConstructorTest, ConstructorFailNonZero) {
    Rectangle r1 = Rectangle(0,0);
    EXPECT_TRUE(r1.get_width() > 0 && r1.get_height() > 0);
}
TEST(ConstructorTest, ConstructorFailNegative) {
    Rectangle r1 = Rectangle(1,3);
    EXPECT_TRUE(r1.get_width() < 0 && r1.get_height() < 0);
}

#endif
