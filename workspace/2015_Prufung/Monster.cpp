#include <iostream>

using std::cout;

struct monster{
	 monster(){ cout << "a monster is bread\n";};
	 ~monster(){ cout << "monster killed\n";};
	 void health(){ cout << "immartal?\n";}
	 virtual void attack (){ cout << "roar\n";}
};

struct troll: monster{
	 troll(){ cout << "a troll grows\n";};
	 ~troll(){ cout << "troll petrified\n";};
	 virtual void swing_club(){
		 cout << "clubbing kills me\n";
		 myhealth--;
	 }
	 void attack (){ swing_club();}
	 void health (){ cout <<"troll-health: "<<myhealth<<"\n";}
protected :
	 int myhealth {10};
};

struct forum_troll : troll{
	forum_troll(){ cout << "not quite a monster\n";};
	 ~forum_troll(){ cout << "troll banned\n";};
	 virtual void swing_club(){ cout << "swinging is healthy?\n"; myhealth++;}
	 void attack (){ cout << "write stupid things\n";}
};


int main (){
	cout << "a -----------------\n";
	forum_troll ft{};
	troll t{ft};
	monster &m {ft};

	cout << "b -----------------\n";
	ft.attack();
	t.attack();
	m.attack();


	cout << "c -----------------\n";
	ft.swing_club();
	t.swing_club();

	cout << "d -----------------\n";
	ft.health();
	t.health();
	m.health();

}

















