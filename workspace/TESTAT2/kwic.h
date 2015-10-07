
#ifndef KWIC_H_
#define KWIC_H_
#include "word.h"
#include <string>
#include <iosfwd>
#include <vector>
#include <set>


	 void changeOrderOfTheWords(std::vector<Word>   n, std::ostream &out);

	 void print(std::vector<Word> const &v, std::ostream& os);
	 void kwic(std::istream& in, std::ostream& out);






#endif /* KWIC_H_ */
