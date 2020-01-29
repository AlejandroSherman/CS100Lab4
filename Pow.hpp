#ifndef _POW_HPP_
#define _POW_HPP_

#include <math.h>
#include "op.hpp"
using namespace std; 
class Pow : public Op
{
	public: 
		Pow( Base* left, Base* right):Op()	
		{
			lstring = to_string(left);
			rstring = to_string(right);
			ldouble = left;
			rdouble = right;
		}
		virtual double evaluate()
		{
			return(pow(ldouble, rdouble);
		}
		virtual string stringify()
		{
			return(lstring + "**" + rstring);
		}
	private:
		string lstring;
		string rstring;
		double ldouble;
		double rdouble;
};

#endif
