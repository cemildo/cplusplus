//============================================================================
// Name        : Prufung_2015.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct monster{
	 monster(){ cout<<"monster is born \n";}
	  ~monster(){ cout<<"monster is  died \n";}
};

struct troll: monster{
	troll(){ cout<<"troll is born \n";}
    ~troll(){ cout<<"troll is died \n";}
};

struct feather : troll{
	feather(){ cout<<"feather is born \n";}
	 ~feather(){ cout<<"feather is died \n";}
};




int main() {
	 feather ft;
	 troll t {ft};
	 monster &m = ft;
	 cout<<"a--------------\n";

}
