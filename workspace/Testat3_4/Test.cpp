#include "word.h"
#include "kwic.h"
#include "cute/cute.h"
#include "cute/ide_listener.h"
#include "cute/xml_listener.h"
#include "cute/cute_runner.h"
#include <iostream>
#include <vector>
#include <functional>

using namespace std;



void runBindMultiplication() {
    class Multiply{
    	double getMultiplied(double x, double y){
    		std::cout << x*y;
    	}
    	double x,y;
    };
    using namespace placeholder _1,_2;
    Multiply a{3,4};
    std::bind(&Multiply::getMultiplied,_1,_2 );


}



void runAllTest(int argc, char const *argv[]){
    cute::suite s;


     s.push_back(CUTE(runBindMultiplication));




    cute::xml_file_opener xmlfile(argc,argv);
    cute::xml_listener<cute::ide_listener<> > lis(xmlfile.out);

    cute::makeRunner(lis,argc, argv)(s, "Words");
}

int main(int argc, char const *argv[]){
	runAllTest( argc,   argv);
}

