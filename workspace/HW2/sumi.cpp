/*

#include <iostream>
#include <iterator>
#include <numeric> //Accumulate braucht <numeric>



using namespace std;
int main () {
	istream_iterator<int> eof;
	int n = accumulate(istream_iterator<int>(cin),eof,0.f);
	cout << "Summe: " << n;
}
*/



/*accumulate(istream_iterator<int>(cin),      eof,           0         );
 *   			starting point             end point     starting value to sum up
 */


/*for float numbers
 * int main () {
	istream_iterator<float> eof;
	float n = accumulate(istream_iterator<float>(cin),eof,0.f);
	cout << "Summe: " << n << endl;
}
 *
 *
 *
 *
 *
#include <iostream>


using namespace std;


  int main(){

    float number;
    float sum;



    while(cin>>number){
        sum += number;
     	if(cin.peek()== 10)break;
      }
     cout<< "total number is "<< sum;

}


*/
