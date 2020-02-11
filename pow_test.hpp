#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "Pow.hpp"
#include <string>
using namespace std; 
TEST(PowTest, PowEvaluate_2_pow_2) {
	Op* op1 = new Op(2);
	Op* op2 = new Op(2);
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->evaluate(), 4);
}
TEST(PowTest, PowStringify_2_pow_2) {
	Op* op1 = new Op(2);
	Op* op2 = new Op(2);
	string result = "2 ** 2";
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(PowTest, PowEvaluate_10_pow_0) {
	Op* op1 = new Op(10);
	Op* op2 = new Op(0);
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->evaluate(), 1);
}
TEST(PowTest, PowStringify_10_pow_0) {
	Op* op1 = new Op(10);
	Op* op2 = new Op(0);
	string result = "10 ** 0";
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(PowTest, PowEvaluate_0_pow_19) {
	Op* op1 = new Op(0);
	Op* op2 = new Op(19);
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->evaluate(), 0);
}
TEST(PowTest, PowStringify_0_pow_19) {
	Op* op1 = new Op(0);
	Op* op2 = new Op(19);
	string result = "0 ** 19";
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(PowTest, PowEvaluate_neg_3_pow_2) {
	Op* op1 = new Op(-3);
	Op* op2 = new Op(2);
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->evaluate(), 9);
}
TEST(PowTest, PowStringify_neg_3_pow_2) {
	Op* op1 = new Op(-3);
	Op* op2 = new Op(2);
	string result = "-3 ** 2";
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(PowTest, PowEvaluate_neg_1_pow_3) {
	Op* op1 = new Op(-1);
	Op* op2 = new Op(3);
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->evaluate(), -1);
}
TEST(PowTest, PowStringify_neg_1_pow_3) {
	Op* op1 = new Op(-1);
	Op* op2 = new Op(3);
	string result = "-1 ** 3";
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(PowTest, PowEvaluate_2_pow_neg_2) {
	Op* op1 = new Op(2);
	Op* op2 = new Op(-2);
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->evaluate(), 0.25);
}
TEST(PowTest, PowStringify_2_pow_neg_2) {
	Op* op1 = new Op(2);
	Op* op2 = new Op(-2);
	string result = "2 ** -2";
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
#endif
