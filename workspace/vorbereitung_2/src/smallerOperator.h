#include <iostream>
#include <string>
#include <set>
#include <cctype>
#include <iterator>
#include <algorithm>

using namespace std;

template <typename T>

     bool operator< (  const T  &lhs,   const T &rhs ){
		 return (::tolower(lhs) < ::tolower(rhs));
	 }

