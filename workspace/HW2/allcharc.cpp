/*
#include <iterator>
#include <iostream>
#include <algorithm>
#include <string>

int main () {
	typedef istreambuf_iterator<char> input; //istreambuf liest auch Whitespaces
	input eof;
	vector<char> zeichen(input(cin), eof);
	cout << "anzahl zeichen: " << distance(zeichen.begin(),zeichen.end()) << endl;
	cout << "anzahl zeilen: " << count(zeichen.begin(),zeichen.end(),'\n') << endl;
	return 0;


}


int main(){
   string cemil;
   getline(cin,cemil);
   cout << "this string includes "<<cemil.length()<<" characters." ;

}


Another Solution
 * int main(){
   char cemil[20];
   cin.getline(cemil,20);
   cout << "this string includes "<<cin.gcount()<<" characters." ;

	}
 */
