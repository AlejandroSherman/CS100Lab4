#include "gtest/gtest.h"

#include "op_test.hpp"
#include "mult_test.cpp"

//TEST(OpTest, eight){
  // Op* op1 = new Op (8); 
  // EXPECT_EQ(op1->stringify, "8");
  // EXPECT_EQ(op1->evaluate, 8); 
//}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
