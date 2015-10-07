#include "sevensegment.h"
#include <iterator>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <iomanip>


using namespace std;



const vector<vector<string>> numbers{
								{
									" - ",
									"| |",
									"   ",
									"| |",
									" - "
								},
								{
									"   ",
									"  |",
									"   ",
									"  |",
									"   "
								},
								{
									" - ",
									"  |",
									" - ",
									"|  ",
									" - "
								},
								{
									" - ",
									"  |",
									" - ",
									"  |",
									" - "
								},
								{
									"   ",
									"| |",
									" - ",
									"  |",
									"   "
								},
								{
									" - ",
									"|  ",
									" - ",
									"  |",
									" - "
								},
								{
									" - ",
									"|  ",
									" - ",
									"| |",
									" - "
								},
								{
									" - ",
									"  |",
									"   ",
									"  |",
									"   "
								},
								{
									" - ",
									"| |",
									" - ",
									"| |",
									" - "
								},
								{
									" - ",
									"| |",
									" - ",
									"  |",
									" - "
								},
					            {
									" - ",
									"|  ",
									" - ",
									"|  ",
									" - "
								},
								{
									"   ",
									"   ",
									" - ",
									"|  ",
									"   "
								},
								{
									"   ",
									"   ",
									" - ",
									"| |",
									" - "
								}

	                           };

void printLargeDigits(const vector<int>& digits, std::ostream &out) {
	for(int line = 0; line < 5; ++line) {
		for(int d : digits) {
			out << numbers.at(d).at(line);
		}
		out << "\n";
	}
}

void printError(std::ostream &out) {
	std::vector<int> error{10,11,11,12,11};
	printLargeDigits(error, out);
}

void printLargeNumber(unsigned num, std::ostream &out) {

	string numstr = to_string(num);
	if(numstr.length() < 10){
		std::vector<int> digits{};
			for(char d : numstr) {
				digits.push_back(d-'0');
			}
			printLargeDigits(digits, out);
	}
	else{
		printError(out);
	}

}


