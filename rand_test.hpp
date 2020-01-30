#ifndef __RAND__TEST_HPP__
#define __RAND__TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "rand.hpp"
#include <string>
#include <stdlib.h>



TEST(RandTest, RandEvalutateLT101){
    Rand* test = new Rand();
    EXPECT_LT(test->evaluate(), 101);
}

TEST(RandTest, RandEvaluateGTNegOne){
     Rand* test = new Rand();
     EXPECT_GT(test->evaluate(), -1);
}

TEST(RandTest, RandStringNot101){
    Rand* test = new Rand();
    std::string result = "101";
    EXPECT_NE(test->stringify(), result);
}

TEST(RandTest, RandEvauateValEightyThree){
    srand(1);
    Rand* test = new Rand();
    EXPECT_EQ(test->evaluate(), 83);
}

TEST(RandTest, RandStringValEightyThree){
    srand(1);
    Rand* test = new Rand();
    EXPECT_EQ(test->stringify(), "83");
}


#endif
