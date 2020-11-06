#include "gtest/gtest.h"

#include "constructor_passing_tests.h"
#include "constructor_failing_tests.h"
#include "area_failing_tests.h"
#include "perimeter_failing_tests.h"
#include "Area_passing_tests.h"
#include "Perimeter_passing_tests.h"

int main(int argc, char **argv) {
      ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
