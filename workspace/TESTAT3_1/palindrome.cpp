//Palindrome : cemec
#include "palindrome.h"
#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <cctype>
#include <string>



struct Palindrome {
    void print_sum()
    {
    	std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    	std::string copyStr;
    	copyStr.assign(str.rbegin(), str.rend());
    	if(copyStr == str){
    		std::cout<< str << " is palindrome";
    	}
    	else
    		std::cout<<str << " is not palindrome";

    }
    std::string str;
};
/*
int main (){
	 using namespace std::placeholders;
		Palindrome p {"CEmec"};
		auto f3 = std::bind(&Palindrome::print_sum, _1);
	    f3(p);
}
*/
