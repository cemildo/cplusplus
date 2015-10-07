
#ifndef PRINTLARGEDIGIT_H_
#define PRINTLARGEDIGIT_H_
#include <string>


void printLargeDigit(unsigned i, std::ostream &out);
void printLargeDigit(unsigned i,  std::ostream &out, int scalingFactor);
void printMoreLargeDigits(int i, std::ostream &out);
void scaleLargeNumbers (unsigned a,  std::ostream &out,int scale);


#endif /* PRINTLARGEDIGIT_H_ */
