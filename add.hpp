#ifndef __ADD_HPP__
#define _ADD_HPP__

#include "op.hpp"
#include <iostream>
#include <string>

class Add : public Op {
     public:
     Add( Base* left, Base* right) : Base(){}
     virtual double evaluate () {return (lnum + rnum);}
     virtual std::string stringify() {return lhs + "+" + rhs;}
     private:
     std::string lhs = std::to_string(left);
     std::string rhs = std::to_string(right);
     double lnum = left;
     double rnum = right;
};

#endif
