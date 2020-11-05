#ifndef __AREA_FAILING_TESTS_H__
#define __AREA_FAILING_TESTS_H__

TEST(AreaTest, AreaFailingZero) {
    Rectangle r1 = Rectangle(0,0);
    EXPECT_EQ(r1.area(), 10);
}
TEST(AreaTest, AreaFailingNonZero) {
    Rectangle r1 = Rectangle(3, 5);
    EXPECT_EQ(r1.area(), 10);
}
TEST(AreaTest, AreaFailingNegative) {
     Rectangle r1 = Rectangle(-3, -5);
     EXPECT_EQ(r1.area(), -15);
}

#endif
