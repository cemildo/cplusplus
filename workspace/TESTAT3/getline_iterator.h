
#ifndef GETLINE_ITERATOR_H_
#define GETLINE_ITERATOR_H_
#include <iosfwd>
#include <boost/operators.hpp>
#include <iterator>
#include <sstream>
struct line_iterator: boost::input_iterator_helper<line_iterator, std::string> {

	explicit line_iterator(std::istream &input = dummy) : in(input) {
		++(*this);
	}



	line_iterator& operator++() {
		if (in) {
			getline(in, value);
			if(in.eof() && !value.empty())
				in.clear();
		}
		return *this;
	}


	value_type operator *() const {
		return value;
	}

	bool operator==(const line_iterator& other) const {
		return !in.good() && !other.in.good();
	}

	bool operator!=(line_iterator const &other) const {
		return !(*this == other);
	}

private:
	std::istream &in;
	value_type value;
	static std::istringstream dummy;

};

#endif /* GETLINE_ITERATOR_H_ */
