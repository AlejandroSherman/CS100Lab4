#ifndef _SUB_HPP_
#define _SUB_HPP_

#include "op.hpp"

using namespace std; 

class Sub : public Op{
	public:
		Sub( double left, double right) : Op()
		{
			lstring = to_string(left);
			rstring = to_string(right);
			ldouble = left;
			rdouble = right;
		}
		virtual double evaluate()
		{
			return(ldouble - rdouble);
		}
		virtual string stringify()
		{
			return(lstring + "-" + rstring);
		}
	private:
		string lstring;
		string rstring;
		double ldouble; 
		double rdouble; 
};

#endif

