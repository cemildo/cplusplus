#include <iostream>
#include <string>
#include <cctype>

int countingToLower(std::string & str){

	int counter = 0;
	for (int i= 0; i < str.length(); ++i) {
		if(isupper(str.at(i))){
			counter++;
			str.at(i) = tolower(str.at(i));
		}

	}

	return counter;
}
