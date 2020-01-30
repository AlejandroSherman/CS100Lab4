#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "Sub.hpp"
#include <string>
using namespace std; 
TEST(SubTest, SubEvaluate_Eight_Minus_Four) {
	Op* op1 = new Op(8);
	Op* op2 = new Op(4);
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->evaluate(), 4);
}
TEST(SubTest, SubEvaluate_Three_Minus_Six) {
	Op* op1 = new Op(3);
	Op* op2 = new Op(6);
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->evaluate(), -3);
}
TEST(SubTest, SubEvaluate_Neg_One_Minus_Ten) {
	Op* op1 = new Op(-1);
	Op* op2 = new Op(10);
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->evaluate(), -11);
}
TEST(SubTest, SubEvaluate_One_Minus_Zero) {
	Op* op1 = new Op(1);
	Op* op2 = new Op(0);
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->evaluate(), 1);
}
TEST(SubTest, SubEvaluate_Neg_Two_Minus_Neg_Five) {
	Op* op1 = new Op(-2);
	Op* op2 = new Op(-5);
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->evaluate(), -7);
}
TEST(SubTest, SubStringify_Eight_Minus_Four) {
	Op* op1 = new Op(8);
	Op* op2 = new Op(4);
	string result = "8-4";
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(SubTest, SubStringify_Three_Minus_Six) {
	Op* op1 = new Op(3);
	Op* op2 = new Op(6);
	string result = "3-6";
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(SubTest, SubStringify_Neg_One_Minus_Ten) {
	Op* op1 = new Op(-1);
	Op* op2 = new Op(10);
	string result = "-1-10";
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(SubTest, SubStringify_One_Minus_Zero) {
	Op* op1 = new Op(1);
	Op* op2 = new Op(0);
	string result = "1-0";
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(SubTest, SubStringify_Neg_Two_Minus_Neg_Five) {
	Op* op1 = new Op(-2);
	Op* op2 = new Op(-5);
	string result = "-2--5";
	Sub* test = new Sub(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
#endif
