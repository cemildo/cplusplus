#include "squares.h"
#include <string>
#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <vector>


struct square_x {
  square_x(unsigned x) : x(x) {}
  unsigned operator()(unsigned y) {
	 unsigned result = 0;
     result = x*x;
	 x++;
	 return result;
  }

private:
  int x;
};

void print(std::vector<unsigned> & v,std::ostream &out){
	std::copy(v.begin(),v.end(), std::ostream_iterator<unsigned>(out," "));
}

void squares (std::vector<unsigned> & v,std::ostream &out){

	std::transform(v.begin(), v.end(), v.begin(), square_x(1));
    print(v,out);
}




