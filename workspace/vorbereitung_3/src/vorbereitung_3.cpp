#include <iostream>
#include <deque>

using namespace std;

int main() {
	deque<int> d;
	d.push_back(3);
	d.push_front(4);




	cout << d.back()<< endl; // prints !!!Hello World!!!
	return 0;
}
