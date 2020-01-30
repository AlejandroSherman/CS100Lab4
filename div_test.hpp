#ifndef __Div_TEST_HPP__
#define __Div_TEST_HPP__

#include "gtest/gtest.h"
#include "Div.hpp"
#include <string>
using namespace std; 
TEST(DivTest, DivEvaluate_Eight_Divides_Four) {
	Op* op1 = new Op(8);
	Op* op2 = new Op(4);
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->evaluate(), 2);
}
TEST(DivTest, DivEvaluate_Zero_Divides_Six) {
	Op* op1 = new Op(0);
	Op* op2 = new Op(6);
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->evaluate(), 0);
}
TEST(DivTest, DivEvaluate_Neg_One_Divides_Ten) {
	Op* op1 = new Op(-1);
	Op* op2 = new Op(10);
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->evaluate(), -0.1);
}
TEST(DivTest, DivEvaluate_One_Divies_Zero){
	Op* op1 = new Op(1);
	Op* op2 = new Op(0);
	Div* test = new Div(op1, op2);
	EXPECT_NE(test->evaluate(), 1);
}
TEST(DivTest, DivEvaluate_Neg_Two_Divides_Neg_Five) {
	Op* op1 = new Op(-2);
	Op* op2 = new Op(-5);
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->evaluate(),0.4);
}
TEST(DivTest, DivStringify_Eight_Divides_Four) {
	Op* op1 = new Op(8);
	Op* op2 = new Op(4);
	string result = "8/4";
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(DivTest, DivStringify_Zero_Divides_Six) {
	Op* op1 = new Op(0);
	Op* op2 = new Op(6);
	string result = "0/6";
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(DivTest, DivStringify_Neg_One_Divides_Ten) {
	Op* op1 = new Op(-1);
	Op* op2 = new Op(10);
	string result = "-1/10";
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(DivTest, DivStringify_One_Divides_Zero) {
	Op* op1 = new Op(1);
	Op* op2 = new Op(0);
	string result = "1/0";
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
TEST(DivTest, DivStringify_Neg_Two_Divides_Neg_Five) {
	Op* op1 = new Op(-2);
	Op* op2 = new Op(-5);
	string result = "-2/-5";
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}
#endif
