#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "Sub.hpp"

TEST(SubTest, SubEvaluateNonZero) {
    Sub* test = new Op(8,4);
    EXPECT_EQ(test->evaluate(), 4);
}

#endif
