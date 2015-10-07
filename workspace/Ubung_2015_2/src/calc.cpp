#include "calc.h"
#include <istream>
#include <stdexcept>
#include <iostream>

int calc(int a,int b,char c){
   switch ( c ){
		   case '+' :
			   return a + b;
		   case '-' :
			   return a - b;
		   case '*' :
			   return a * b;
		   case '%' :
		   			   return a % b;
		   case '/' :
			    if(b == 0){
			    	throw  std::invalid_argument("Can not be divided by zero!");
			    }

				else{
					return  a/b;
				}
		   default:
			   throw std::invalid_argument("Operator is non defined!");
   }
}

int calc(std::istream & in, std::ostream & out ){
  int a;
  int b;
  char c;
  in >> a;
  in >> c;
  in >> b;
  return  calc(a,b,c);
}


int calc(std::istream & in ){
	return calc( in,  std::cout);
}
