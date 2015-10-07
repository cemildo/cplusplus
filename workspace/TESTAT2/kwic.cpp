#include "word.h"
#include "kwic.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
#include <sstream>

std::set<std::string> lines;

void print(std::ostream& os) {

 while (!lines.empty()) {
	os <<*lines.begin()<<"\n";
	lines.erase(lines.begin());
  }

}


void kwic(std::istream& in, std::ostream& out) {
	//read lines
	std::string line{};
	std::vector<std::vector<Word>> word_lines{};

	while(getline(in, line)) {

		std::vector<Word> word_line{};
		Word w{};
		std::istringstream linestream{line};
		while(linestream >> w) {
			word_line.push_back(w);

		}
		word_lines.push_back(word_line);

	}

	for(std::vector<Word> const& l : word_lines) {

		changeOrderOfTheWords(l, out);
	}

	print(out);
}




void changeOrderOfTheWords( std::vector<Word> n,std::ostream & os) {

     std::string line;

       for(int b = 0; b <= n.size();b++){
		   std::rotate(n.begin(),n.begin()+b,n.end());
		   for(int a = 0; a < n.size();a++){

					line.append( n.at(a).toString());
					line.append(" ");

		   }
		   lines.insert(line);
		   line.clear();
        }



	}


