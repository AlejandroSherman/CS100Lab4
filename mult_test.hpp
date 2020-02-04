#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP

#include "gtest/gtest.h"
#include "add.hpp"
#include "mult.hpp"

TEST(MultTest, MultEvaluationFourAndFive){
   Op* op1 = new Op(5);
   Op* op2 = new Op(4);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->evaluate(), 20);
}

TEST(MultTest, MultStringSevenPtFiveAndNine){
  Op* op1 = new Op(7.5);
  Op* op2 = new Op(9);
  std::string result = "7.5 * 9";
  Mult* test = new Mult (op1, op2);
  EXPECT_EQ(test->stringify(), result);
}

TEST(MultTest, MultEvaluateFromAdd){
  Op* op1 = new Op(3);
  Op* op2 = new Op(4); 
  Add* add1 = new Add(op1, op2);
  Op* op3 = new Op(5);
  Mult* test = new Mult(add1, op3);
  EXPECT_EQ(test->evaluate(), 35);
}
 
TEST(MultTest, MultStringFromAdd){
  Op* op1 = new Op(3);
  Op* op2 = new Op(4);
  Add* add1 = new Add(op1, op2);
  Op* op3 = new Op(5);
  Mult* test = new Mult(add1, op3);
  std::string result = "3 + 4 * 5";
  EXPECT_EQ(test->stringify(), result);
}     

TEST(MultTest, MultEvaluateTwoAdds){
  Op* op1 = new Op(6.2);
  Op* op2 = new Op(4.8);
  Op* op3 = new Op(3.5);
  Op* op4 = new Op(2.5);
  Add* add1 = new Add(op1,op2);
  Add* add2 = new Add(op3,op4);
  Mult* test = new Mult(add1, add2);
 EXPECT_EQ(test->evaluate(), 66);
}

TEST(MultTest, MultEvaluateZeroAndSeven){
  Op* op1 = new Op(0.0);
  Op* op2 = new Op(7);
  Mult* test = new Mult(op1, op2);
 EXPECT_EQ(test->evaluate(), 0);
}

TEST(MultTest, MultEvaluateTwoNegNums){
  Op* op1 = new Op(-4);
  Op* op2 = new Op(-4);
  Mult* test = new Mult(op1, op2);
 EXPECT_EQ(test->evaluate(), 16);
}

TEST(MultTest, MultEvaluateNegAndPosNum){
  Op* op1 = new Op(-6);
  Op* op2 = new Op(2.5);
  Mult* test = new Mult(op1, op2);
 EXPECT_EQ(test->evaluate(), -15);
}

TEST(MultTest, MultStringTwoNegNums){
  Op* op1 = new Op(-10);
  Op* op2 = new Op(-20.5);
  Mult* test = new Mult(op1, op2);
  std::string result = "-10 * -20.5";
 EXPECT_EQ(test->stringify(), result);
}

TEST(MultTest, MultStringTwoZeroes){
  Op* op1 = new Op(0);
  Op* op2 = new Op(0);
  Mult* test = new Mult(op1, op2);
  std::string result = "0 * 0";
 EXPECT_EQ(test->stringify(), result);
}

#endif
