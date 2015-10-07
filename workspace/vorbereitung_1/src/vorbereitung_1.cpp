#include <vector>
#include <iostream>
#include <sstream>
#include <iterator>


using namespace std;


// tilda icin mac te alt+n ~~

struct plant {
	plant(){cout<<"a plant sprouts \n";}
    ~plant(){cout<<"plant withers \n";}
    void stem(){cout<<"none\n";}
    virtual void leaf (){ cout<<"some green\n";}
};

struct tree:plant {
	tree(){cout<<"a tree grows \n";}
    ~tree(){cout<<"a tree fell \n";}
    void stem(){bark();}
    virtual void bark (){ cout<<"rough bark\n";}
    void leaf (){ cout<<"damn it\n";}
};

struct birch:tree {
	birch(){cout<<"a beautiful birch \n";}
    ~birch(){cout<<"an old birch collapses \n";}
    virtual void bark(){cout<<"paper white\n";}
    void leaf (){ cout<<"small green leaf\n";}
};

int main(){
	cout<<"a -----------\n";
	birch b;
	tree &t = b;
	plant p{t};
	cout<<"b -----------\n";
	t.leaf();

}



/*
class Animal {
public:
	Animal (){
			cout<<"Hayvan dogdu!\n"<< endl;
	}
    virtual void makeSound (){
		cout<<"---\n"<<endl;
	}
	void move (){
		cout<<" hareket ettim \n"<<endl;
	}
};


class Kus :  public  Animal {
public:
	Kus (){
		cout<<"Kus dogdu!\n"<< endl;
	}
    void makeSound (){
		cout<<"cir cir\n"<<endl;
	}
	void move (){
		cout<<" uctum ben \n"<<endl;
	}
};


class Timsah :   Animal {
public:
	Timsah (){
		cout<<"timsah dogdu!\n"<< endl;
	}
    void makeSound (){
		cout<<"hirr hirr\n"<<endl;
	}
	void move (){
		cout<<" surundum ben \n"<<endl;
	}


};


int main(){

	Kus k;

	Animal *b = &k;
	b->makeSound();

}



*/











/*
int main() {
	string line;
	while(getline(cin,line)){
		istringstream a {line};
		using it = istream_iterator<string>;
		vector<string> str {it{a},it{}};
        copy(str.begin(),str.end(),ostream_iterator<string> (cout," "));


	}



}
*/
