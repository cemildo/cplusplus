#include "palindrome.h"
#include <string>
#include <algorithm>

bool is_palindrome(std::string s) {
	return equal(s.begin(), s.begin() + s.size() / 2, s.rbegin(),
			[&](char char1, char char2) {return std::tolower(char1) == std::tolower(char2);});
}
