#include <iostream>
#include <algorithm>
#include <iterator>
#include <set>
#include <vector>
#include "Word.h"
using namespace std;



 void Word::read( istream & in){

	 std::string temp, word;
	 in >> temp;

	 if (temp.size() > 0) {
         //compl33tely ~ weird !!??!! 4matted in_put
		 int a = 0, start = 0,end = 0;
		 while(a < temp.length()){
			 for(int  i= end; i<temp.length();i++){
				  if(isalpha(temp.at(i))){
					  start = i;
					  break;
				   }
			  }

			 for(int  i = start; i<temp.length();i++){
				  if(!isalpha(temp.at(i))){
					  end  = i;

					  break;
				   }
			 }
			 a++;
			 cout<< start <<" "<<(end-start)<<" --"<< a<<"-- ";
			 str = temp.substr(start,(end-start));

		 }






	 }
 }


 void Word::print(std::ostream & out) const{
	out << str;
 }

 std::istream& operator>>(std::istream &in, Word& word) {
	 word.read(in);
	 return in;
 }

 std::ostream& operator<<(std::ostream& out, const Word& word) {
	 word.print( out);
	 return out;
 }


