#include <iterator>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <iomanip>
#include "header/printLargeDigit.h"

using namespace std;


void printDigits(vector<vector<string>> & nums);

const vector<vector<string>> numbers{
								{
									" - ",
									"| |",
									"   ",
									"| |",
									" - "
								},
								{
									"   ",
									"  |",
									"   ",
									"  |",
									"   "
								},
								{
									" - ",
									"  |",
									" - ",
									"|  ",
									" - "
								},
								{
									" - ",
									"  |",
									" - ",
									"  |",
									" - "
								},
								{
									"   ",
									"| |",
									" - ",
									"  |",
									"   "
								},
								{
									" - ",
									"|  ",
									" - ",
									"  |",
									" - "
								},
								{
									" - ",
									"|  ",
									" - ",
									"| |",
									" - "
								},
								{
									" - ",
									"  |",
									"  |",
									"  |",
									"   "
								},
								{
									" - ",
									"| |",
									" - ",
									"| |",
									" - "
								},
								{
									" - ",
									"| |",
									" - ",
									"  |",
									" - "
								}
	                           };

void printLargeDigit(unsigned i,  ostream &out){



	     vector<string> number {numbers.at(i)};

	     copy(number.begin(),number.end(),ostream_iterator<string>(cout,"\n"));

};


void printLargeDigit(unsigned i,  ostream &out, int scalingFactor){



	     vector<string> number = numbers.at(i);

	     for(int a =0; a< number.size();++a){


	    		     if(a==0)
	    		     {
	    		    	 string line ;
						 line +=number.at(a).at(0);
						 for(int k= 0 ;k < scalingFactor;++k)
							line += number.at(a).at(1);
						 line+= number.at(a).at(2);
						 cout << line<<endl;

	    		     }
	    		     if(a==1)
					 {
						 string line ;
						 line +=number.at(a).at(0);
						 for(int k= 0 ;k < scalingFactor;++k)
							line += number.at(a).at(1);
						 line+= number.at(a).at(2);
						 for(int k= 0 ;k < scalingFactor;++k)
							 cout << line<<endl;


					 }
	    		     if(a==2)
					 {
						 string line ;
						 line +=number.at(a).at(0);
						 for(int k= 0 ;k < scalingFactor;++k)
							line += number.at(a).at(1);
						 line+= number.at(a).at(2);
						 cout << line<<endl;

					 }
	    		     if(a==3)
					 {
						 string line ;
						 line +=number.at(a).at(0);
						 for(int k= 0 ;k < scalingFactor;++k)
							line += number.at(a).at(1);
						 line+= number.at(a).at(2);
						 for(int k= 0 ;k < scalingFactor;++k)
						    cout << line<<endl;

					 }
	    		     if(a==4)
					 {
						 string line ;
						 line +=number.at(a).at(0);
						 for(int k= 0 ;k < scalingFactor;++k)
							line += number.at(a).at(1);
						 line+= number.at(a).at(2);
						 cout << line;

					 }



	    	   }
 };


 



void printMoreLargeDigits(int a,  ostream &out){

	string number = to_string(a);

	vector<vector<string>> numToPrint;
	for  (  int i = 0; i < 5; ++i) {
		vector<string> el ;
		for  (  int k = 0; k < number.length(); ++k) {

			el.push_back(numbers.at(number.at(k)-'0').at(i));
		}
		numToPrint.push_back(el);

	}

	printDigits(numToPrint);

}

void printDigits(vector<vector<string>> & nums){
	for (int i= 0; i  < nums.size(); ++i ) {
		vector<string> el = nums.at(i);
		for (int k= 0; k  < el.size(); ++k ) { // 1 line characters array
			cout<<el.at(k);
		}cout<<endl;
	}


}

void scaleLargeNumbers (unsigned a,  ostream &out,int scale){
	string number = to_string(a);

		vector<vector<string>> numToPrint;
		for  (  int i = 0; i < 5; ++i) {
			vector<string> el ;
			for  (  int k = 0; k < number.length(); ++k) {
				vector<char> linie;
				linie.push_back(numbers.at(number.at(k)-'0').at(i).at(0));
				char middle = numbers.at(number.at(k)-'0').at(i).at(1);
				for(int b = 0; b<scale; b++){
					linie.push_back(middle);
				}
				linie.push_back(numbers.at(number.at(k)-'0').at(i).at(2));
				// 2 ve 4 cu siralari scalin factor kadar buyut;
				string slinie(linie.begin(),linie.end());
                el.push_back(slinie);

			}
			if(i == 1 || i ==3){
				for (int l= 0; l < scale; ++l) {
					numToPrint.push_back(el );
				}
			}
			else
				numToPrint.push_back(el );



		}

		printDigits(numToPrint);


}




