/*
#include <iostream>
#include <iomanip>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>
using namespace std;


int main (){


	const vector <double> drinks {4.65,9.15,3.85,2.95};
	cout <<setw(6)<<" "<<setw(6)<<"small Beer"
					   <<setw(6)<< "  Moaß Beer"
					   <<setw(6)<< "   Schnapps"
					   <<setw(6)<< "       Soda"<<"\n";
	for(double b=1;b<=10;b++)
	{
		cout<<setw(43)<<setfill('_');
		 cout<< setw(3)<< b<< " |";
		 for(int a=0;a< drinks.size();a++)
			{
			    //cout <<setfill('_')<<setw(20)<<"\n"<<setfill(' ');
         		 cout<<setw(10)<<setprecision(5)<< drinks.at(a) * b<<"|" ;
			}
		 cout<<"\n";

     }


}
*/
