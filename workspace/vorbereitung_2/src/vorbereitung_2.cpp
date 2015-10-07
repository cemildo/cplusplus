
#include <iostream>
#include <string>
#include <set>
#include <cctype>
#include <iterator>
#include <algorithm>//copy

using namespace std;

template <typename T>
struct  CaseLess {
     bool operator () (  const T  &lhs,   const T &rhs ){
		 return (::tolower(lhs) < ::tolower(rhs));
	 }
};



void teil(){
	using namespace std;
	string wood("AppleTreetrunk");

	set <char,CaseLess<char>> s{wood.begin(),wood.end()};

	copy(s.begin(),s.end(),ostream_iterator<char>{cout});
}

//AeklnprTu


int main() {
	//teil();
	int i = {42};

}
