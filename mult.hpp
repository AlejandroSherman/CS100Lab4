#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "op.hpp"
#include <iostream>
#include <string>

class Mult : public Base {
    public:
   Mult( Base* left, Base* right) : Base() {
   lnum = left->evaluate();
   rnum = right->evaluate();
   lhs = std::to_string(rnum);
   rhs = std::to_string(lnum);
}
      virtual double evaluate () {return (lnum * rnum) ;}
      virtual std::string stringify() {return lhs + "*" + rhs;}
  private:
    std::string lhs;
    std::string rhs;
    double lnum;
    double rnum;
};

#endif
 
