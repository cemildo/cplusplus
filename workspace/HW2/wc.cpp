/*
#include <iostream>     // std::cin, std::cout
#include <iterator>     // std::istream_iterator
#include <string>
using namespace std;

int main () {

  int number = 0;
  istream_iterator<string> eos;              // end-of-stream iterator
  istream_iterator<string> it (std::cin);   // stdin iterator

  while(it!=eos){
	  ++number;
	  ++it;

  }

  cout<< "total number of words are "<< number;



}



*/

















/*
 * I keep tracking of the white spaces
 * if it is white space then the word has not come yet,
 * if the current index is not an empty value then  a word is being read
 * that s the point where i set the privousChar and check it till the word ends.
 * next step is checking if the word is ended with an empty index
 * at that point i am increasing counter one more
 * coz the word has just been read
 *
 *
 */

/*
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::string;


int main(){
	string text;
	int numberOfWords;
	bool currentChar = true;
	bool privousChar;

	getline(cin,text);

	for(int i= 0; i< int(text.length());i++){
		//get the previous char
		privousChar = currentChar;
		//get next char
		currentChar = (bool)isspace( text.at(i));
		//word is beginned.
		if(privousChar)
		{   //word is ended
			if(!currentChar){
				++numberOfWords;
			}

		}


    }

	cout<<"";
	cout  <<"the number of words in the text is "<< numberOfWords<< endl;

}

*/
