
#ifndef PRINTFUNCTIONTABLE_H_
#define PRINTFUNCTIONTABLE_H_

#include <iostream>
#include <functional>

void printFunctionTable(std::ostream & out,double begin,double end,int step, std::function<double(double)> f );


#endif /* PRINTFUNCTIONTABLE_H_ */
