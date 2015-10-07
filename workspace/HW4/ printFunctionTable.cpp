#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>
#include <iterator>
#include "printFunctionTable.h"


using namespace std;



void printFunctionTable(std::ostream & out,double begin,double end,int step, std::function<double(double)> f  )
 {
	  vector<double> ar;

	  cout<< "x    :";
	  for(int a = 1; a < step+1 ;++a)
	  {
		  double result = 0;
		  result = begin*a;
          ar.push_back(f(result)*10);
		  cout<< begin*a <<" ";
	  }
	  out<<"\n"<< "f(x) :";
	  for(int a = 0; a < step ;++a)
	  {
		  cout<< ar.at(a) <<" ";
	  }
 }
