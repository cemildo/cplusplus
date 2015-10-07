#include <iostream>


float calc (float a, float b, char operant){

	 if(operant == '+')
		return a+b;
	 else if(operant == '-')
		return a-b;
	 else if (operant == '*')
		return a*b;
	 else if(operant == '/'){
		if(b == 0){
				std::cout<< "\n by division second number cant be zero!";
			return 0;
		}
		return a/b;
	 }
	 else if(operant == '%')
		return (float)((int) a % (int)b);

	 std::cout<< " calculation cant be complated \n please put inputs accordingly : number operand number";
	 return 0;
};

float calc (std::istream& in){

   float first,third;
   char second;
   in>>first;
   in>>second;
   in>>third;
   std::cout <<first<<second<<third;
   return calc(first,third,second);
};

