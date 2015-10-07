#include "Date.h"
#include <iostream>

using namespace date;
using date::Month;

int main (){
	Date day{2012, August,20};
	day.print(std::cout);
	std::cout<<std::endl;
	Date a {2012,Nov,1} ;
	a.print(std::cout);
	std::cout<<std::endl;
	Date b {Nov,2012,1} ;
	a.print(std::cout);

}
