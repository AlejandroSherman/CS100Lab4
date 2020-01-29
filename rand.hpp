#ifndef __RAND_HPP__ 
#define __RAND_HPP__

#include "base.hpp"
#include <string>
#include <iostream>

class Rand : public Base {
      public: 
      Rand(double value) : Base () {}
      virtual double evaluate() { return num }
      virtual std::string stringify() {return s_num}
      private:
      double num = rand() % 100;
      string s_num = std::to_string(num);
};

#endif 
