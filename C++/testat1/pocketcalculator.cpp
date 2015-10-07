#include <iostream>
#include "calc.h"
#include "sevensegment.h"
#include <stdexcept>

void pocketCalculator (std::istream & in,std::ostream & out){
	while(in) {
		try {
			printLargeNumber(  calc(in),out);
		}
		catch(const std::invalid_argument& e){
			if(!in.eof()) {
				printError(out);
			}
		}
	}
}
