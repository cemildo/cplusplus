#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <set>
#include <cctype>


using namespace std;


void sortWords ( istream& in ){

	typedef istream_iterator<string> input ;
    input eof;

    vector<string> text(input(in),eof);

    transform(text.begin(), text.end(),text.begin(), [](string el){

    	for(int a= 0; a < el.length(); a++){
    		if(isalpha ( el.at(a) )){
    			el.at(a) = tolower(el.at(a));
    		}
    		else
    			el.at(a) = ' ';

    	};
    	return el;
    });

    set<string> wlist(text.begin() ,text.end()); //Set ist autom. sortiert

	copy(wlist.begin(),wlist.end(),ostream_iterator<string>(cout  , " "));

}
