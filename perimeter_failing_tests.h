#ifndef __PERIMETER_FAILING_TESTS_H__
#define __PERIMETER_FAILING_TESTS_H__

TEST(PerimeterTest, PerimeterFailZero) {
    Rectangle r1 = Rectangle(0, 0);
    EXPECT_EQ(r1.perimeter(), 6);
}
TEST(PerimeterTest, PerimeterFailNonZero) {
    Rectangle r1 = Rectangle(1, 5);
    EXPECT_EQ(r1.perimeter(), 6);
}
TEST(PerimeterTest, PerimeterFailNeg) {
    Rectangle r1 = Rectangle(1, -5);
    EXPECT_EQ(r1.perimeter(), -6);
}
#endif
