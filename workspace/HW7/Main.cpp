#include "palindrome.h"
#include "anagrams.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm> // next_permutation() via stl_algo.h

#include <iterator> // ostream_iterator
#include <stdlib.h>

int main () {

/*

	  std::ifstream infile("/usr/share/dict/words");
	  std::string line;
	  while (!infile.eof())
	  {
		  std::string word;
		  getline(infile,word);

	      if(is_palindrome(word))
	    	  std::cout<< word<<std::endl;
	  }
*/
	 //std::cout << is_palindrome("cemec");

	 anagrams(std::cout, std::string {"listen"});



}
