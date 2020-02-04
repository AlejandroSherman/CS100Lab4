#ifndef __Mix__TEST__HPP
#define __Mix__TEST__HPP

#include <string>
#include "op.hpp"
#include "gtest/gtest.h"
#include "Pow.hpp"
#include "Sub.hpp"
#include "add.hpp"
#include "mult.hpp"
TEST(MixTest, MixEvaluate_neg5to2_plus_4times9_divides_3_minus17) {
	Op* op1 = new Op(-5);
	Op* op2 = new Op(2);
	Pow* pow1 = new Pow(op1, op2);
	
	Op* op3 = new Op(4);
	Op* op4 = new Op(9);
	Mult* mult1 = new Mult(op3, op4);

	Add* add1 = new Add(pow1, mult1);

	Op* op5 = new Op(17);
	Sub* test = new Sub(add1, op5);

	EXPECT_EQ(test->evaluate(),44);
}
TEST(MixTest, MixStringify_neg5to2_plus_4times9_divides_3_minus17) {

	Op* op1 = new Op(-5);
	Op* op2 = new Op(2);
	Pow* pow1 = new Pow(op1, op2);
	
	Op* op3 = new Op(4);
	Op* op4 = new Op(9);
	Mult* mult1 = new Mult(op3, op4);

	Add* add1 = new Add(pow1, mult1);

	Op* op5 = new Op(17);
		
	string result = "-5 ** 2 + 4 * 9 - 17";
	Sub* test = new Sub(add1, op5);
	EXPECT_EQ(test->stringify(), result);
}
#endif
