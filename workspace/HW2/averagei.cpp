/*
#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>
#include <algorithm>
using namespace std;
int main () {
	istream_iterator<int> eof;
	vector<int> numbers;
	copy(istream_iterator<int>(cin), eof, back_inserter(numbers));

	cout << "Middle value: " <<
	accumulate(numbers.begin(),numbers.end(),0)/distance(numbers.begin(),numbers.end());
}



 * ostream_iterator --> Ostream iterators are output iterators that write sequentially to an output stream (such as cout).
 * distance --> Calculates the number of elements between first and last.
 * accumulate --> Returns the result of accumulating all the values in the range [first,last) to init.
 * back_inserter --> add an array to another array.
 * copy (begin of array( b.begin() ), end of array( b.begin() ), target array  back_inserter(numbers) )
 */




/*
#include <iostream>


using namespace std;


int main(){

	double number;
    double sum;
    int howmany = 0;



    while(cin>>number){
    	++howmany;
        sum += number;
     	if(cin.peek()== 10)break;
      }
     cout<< "Avarage is "<<  sum/howmany;

}
*/
