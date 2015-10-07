/*
#include <iterator>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main () {
	typedef istreambuf_iterator<char> input; //istreambuf liest auch Whitespaces
	input eof;
	vector<char> zeichen(input(cin), eof);

	cout << "anzahl zeilen: " << count(zeichen.begin(),zeichen.end(),'\n') << endl;
	return 0;


}


*/



















/*
 *
 * #include <iostream>
#include <string>
#include <fstream>

using namespace std;
using std::cout;
using std::string;
using std::getline;




int main (){



    ifstream file;
    string line;

    int i = 0 ;

    file.open("text.txt");

    if (file.is_open())
      {

        while ( getline (file,line) )
        {
        	i++;
        	//cout << "sira "<< i++ << line <<"\n";
        }
        file.close();
      }

    //cin.get();
    file.close();
     cout <<"the number of lines is "<< i ;
}
*/
