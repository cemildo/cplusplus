

#ifndef WORD_H_
#define WORD_H_

#include <iosfwd>


class Word{
public:


	void read(std::istream & in);
	void print(std::ostream & out) const;


private:
	std::string str ;
};

std::istream& operator>>(std::istream & in, Word & word);
std::ostream& operator<<(std::ostream & out, const Word & word);


#endif /* WORD_H_ */
