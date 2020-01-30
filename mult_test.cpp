#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, MultEvaluationZero){
   Op* op1 = new Op(5);
   Op* op2 = new Op(4);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->evaluate(), 20);
}

#endif
