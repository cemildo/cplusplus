


#include "CDMATH.h"
#include <iostream>
using namespace std;


int deneme() { // change this to main method
	CDMATH cd;
	double first;
	double second;

	cout<< "Please put two Numebrs to operate ";
	cin >> first;
	cin >> second;

	cout <<"Here is one addition " 		 << cd.add(first ,second)      << "\n"; //
	cout <<"Here is one substraction "   << cd.subtract(first ,second) << "\n"; //
	cout <<"Here is one multiplication " << cd.multiply(first ,second) << "\n"; //
	cout <<"Here is one divition " 		 << cd.divide(first ,second)   << "\n"; //
	cin.get();

}


