#include <iostream>
    std::cin;
    /*
     * cin :
     * The standard input stream is a source
     * of characters determined by the environment.
     * It is generally
     * assumed to be input from an external source,
     * such as the keyboard or a file.
     */
    std::endl;
    //Inserts a new-line character and flushes the stream.
    std::tolower;
    std::string;
    std::distance;
    //Calculates the number of elements between first and last.
    /*
     *  std::list<int>::iterator first = mylist.begin();
  	  	std::list<int>::iterator last = mylist.end();
  	  	 std::distance(first,last)
     */
    std::istream_iterator;
    //Istream iterators are input iterators that read
    //successive elements from an input stream (such as cin)
    std::size_t;  //int type .. Unsigned integral type
    std::vector ; //array

/*
int main() {
    bool cond{};
    std::cout << (cond ? "Hello" : "Peter");
}
*/

int main() {
    int number;

	//std::cin >> number;

	//std::cout<< number;
	/*
	 * cemil 1981 --> 0
	 * cemil1900  --> 0
	 * 1900cemil  --> 1900
	 */
    std::string line;
    getline(std::cin, line);
    //std::cin>>line; // gets only the first word!!!
    std::cout<< line;
}
