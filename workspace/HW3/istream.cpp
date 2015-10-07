#include <iterator>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


/*
int main (){
	using input= istream_iterator<string>;
	input eof{};
	input in{cin};

	//burda herbir word ten sonra bosluk brak demek bu cout, " "
    ostream_iterator<string> out {cout," " };

    copy(in,eof,out);
}
*/
/*
int main(){
	using input = istreambuf_iterator<char>;
	input eof{};
	input in{cin};
	//burda bosluklarida aliyor ustekine gore farki
	ostreambuf_iterator<char> out{ cout};
	copy(in,eof,out);
}



int main (){
	vector<double>  v{};
	double x{2.0};
	generate_n(back_inserter(v),5,[&x]{
		return x*=2.0;
	});
	ostream_iterator<int> out{cout," "};
	copy(v.begin(),v.end(),out);

}

*/










