#include "calc.h"
#include <stdexcept>
#include <iostream>



int main() {
  while (std::cin) {
	  try {
		std::cout << '=' << calc(std::cin) << '\n';
	} catch (const std::invalid_argument & e) {
		std::cout<< "cannot be divide by zero!\n";
	}

  }
}
