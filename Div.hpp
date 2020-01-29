#ifndef __Div_HPP__
#define __DIV_HPP__

#include "op.hpp"
using namespace std;
class Div : publie Op {
	public:
		Div( Base* left, Base* right) : Op()
		{
			lstring = to_string(left); 
			rstring = to_stirng(right);
			ldouble = left; 
			rdouble = rdouble; 
		}		
		virtual double evaluate()
		{
			return(ldouble / rdouble);
		}
		virtual string stringify()
		{
			return (lstring + "/" + rstring); 
		}			
	private:
		string lstring; 
		string rstring; 
		double ldouble; 
		double rdouble; 
};

#endif
