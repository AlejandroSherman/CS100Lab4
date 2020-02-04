#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"
#include <string>

#include "op.hpp"

TEST(OpTest, OpEvaluateEight) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateZero){
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpStringZero){
    Op* test = new Op(0);
    std::string zero = "0";
    EXPECT_EQ(test->stringify(), zero);
}

TEST(OpTest, OpStringEightPtOne) {
    Op* test = new Op(8.1);
    std::string eight = "8.1";
    EXPECT_EQ(test->stringify(), eight);
}

TEST(OpTest, OpStringHundred){
    Op* test = new Op(100);
    std::string hundred = "100";
    EXPECT_EQ(test->stringify(), hundred);
}

TEST(OpTest, OpEvaluateNegNine){
    Op* test = new Op(-9);
    EXPECT_EQ(test->evaluate(), -9);
}

TEST(OpTest, OPStringNegFifty){
    Op* test = new Op(-50);
    std::string neg_fifty = "-50";
    EXPECT_EQ(test->stringify(), neg_fifty);
}

  

#endif //__OP_TEST_HPP__
