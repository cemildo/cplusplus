#include <iostream>
#include <algorithm>
#include <iterator>
#include <set>
#include <vector>
#include "word.h"
#include <cctype>
#include <stdexcept>

using namespace std;



Word::Word(std::string const &inputString)
    {
    if(inputString.empty())
      {
      throw std::invalid_argument("empty string supplied");
      }

    copy_if(inputString.cbegin(), inputString.cend(), std::back_inserter(str), [](char const character)
      {
      if(!std::isalpha(character))
        {
        throw std::invalid_argument("invalid character in input");
        }
      return true;
      });
    }



istream& Word::read( istream & in){

	 string buffer{};
	 while(!isalpha(in.peek()) && in) {
		 //peek() returns the next character without extracting it
         if(in.peek() == '\n'){
        	 str = '\n';
        	 in.ignore(1);
        	 return in;
         }

		 in.ignore(1);
	 }


	 if(!in) {

		 return in;
	 }

	 while(std::isalpha(in.peek())){

		 buffer += in.get();
	 }

	 str = buffer;


	 //std::cout<< str<<" ++ \n ";
	 if(!in){
		 in.clear(std::ios_base::eofbit);
	 }

	 return in;
 }

std::string Word::toString(){
	return str;
 }



 std::istream& operator>>(std::istream &in, Word& word) {

	 word.read(in);
	 return in;
 }

 std::ostream& operator<<(std::ostream& out, const Word& word) {

	 word.print( out);
	 return out;
 }

 std::string Word::lowerCaseStr() const
     {
     std::string neuStr{};
     transform(str.cbegin(), str.cend(), std::back_inserter(neuStr), (int(*)(int))std::tolower);
     return neuStr;
     }

