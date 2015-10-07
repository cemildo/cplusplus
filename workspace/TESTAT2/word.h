

#ifndef WORD_H_
#define WORD_H_

#include <iosfwd>
#include <string>
#include <vector>

class Word{
public:
	Word() = default;
    explicit Word(std::string const &inputString);

    inline bool operator <  (const Word  &rhs) const { return lowerCaseStr() < rhs.lowerCaseStr(); }
    inline bool operator >  (const Word  &rhs) const { return rhs < *this; }
	inline bool operator == (const Word  &rhs) const { return !(*this < rhs || *this > rhs ); }
	inline bool operator != (const Word  &rhs) const { return !(*this == rhs); }
	inline bool operator >= (const Word  &rhs) const { return !(*this < rhs); }
	inline bool operator <= (const Word  &rhs) const { return !(*this > rhs); }



	std::string toString();
	operator std::string() { return str; }
	std::ostream& print(std::ostream &outputStream) const { return (outputStream << str); }
	std::istream& read(std::istream &in);
	std::string lowerCaseStr() const;


private:

	std::string str;
};

std::istream& operator>>(std::istream & in, Word & word);
std::ostream& operator<<(std::ostream & out, const Word & word);


#endif /* WORD_H_ */
