#include "word.h"
#include "kwic.h"
#include "cute/cute.h"
#include "cute/ide_listener.h"
#include "cute/xml_listener.h"
#include "cute/cute_runner.h"
#include <iostream>
#include <vector>

using namespace std;

void sanitizeStringFromNonChar() {
	    std::istringstream in{"++test**"};

		Word w;
		w.read(in);


		ASSERT_EQUAL( "test", w.toString() );
}

void sanitizeStringFromBothSide() {
	    std::istringstream in{"++te33st**"};

		Word w;
		w.read(in);


		ASSERT_EQUAL( "te", w.toString() );
}

void sanitizeStringFromNumbers() {
	    std::istringstream in{"12test"};

		Word w;
		w.read(in);


		ASSERT_EQUAL( "test", w.toString() );
}

void compareIfTwoWordsEqual (){
	Word a {"HallO"};
	Word b {"hallo"};
	ASSERT_EQUAL(a,b);
}

void compareIfOneWordisBigger (){
	Word a {"HallO"};
	Word b {"hallo"};

	bool d  = a > b;

	ASSERT_EQUAL(0,d);
}

void compareIfOneWordisSmaller (){
	Word a {"HallO"};
	Word b {"hallo"};

	bool d  = b < a;

	ASSERT_EQUAL(0,d);
}

void compareIfOneWordisSmallerOREqual (){
	Word a {"Hallo"};
	Word b {"hallo"};

	bool d  = b <= a;

	ASSERT_EQUAL(1,d);
}


void compareIfOneWordisBiggerOREqual (){
	Word a {"Hallo"};
	Word b {"hallo"};

	bool d  = b >= a;

	ASSERT_EQUAL(1,d);
}

void sanitizeSentence() {

	std::istringstream in{"**cemil ~ do12gan 1222cc dogan"};
	std::ostringstream out{};
	kwic( in, out);


		ASSERT_EQUAL(  "cc dogan cemil do gan \n"
					   "cemil do gan cc dogan \n"
					   "do gan cc dogan cemil \n"
				       , out.str() );
}

void kwicOrderOneLine() {

	std::istringstream in{"cemil dogan"};
	std::ostringstream out{};
	kwic( in, out);


		ASSERT_EQUAL( "cemil dogan \ndogan cemil \n", out.str() );
}

void kwicOrderTwoLine() {
	std::istringstream in{"this is a test \nthis is another test\n"};
	std::ostringstream out{};
	kwic(in , out);


		ASSERT_EQUAL(   "a test this is \n"
					    "another test this is \n"
						"is a test this \n"
						"is another test this \n"
						"test this is a \n"
						"test this is another \n"
						"this is a test \n"
						"this is another test \n"
				      	 , out.str() );
}

void runAllTest(int argc, char const *argv[]){
    cute::suite s;


    s.push_back(CUTE(sanitizeStringFromNonChar));
    s.push_back(CUTE(sanitizeStringFromNumbers));
    s.push_back(CUTE(sanitizeStringFromBothSide));
    s.push_back(CUTE(kwicOrderOneLine));
    s.push_back(CUTE(kwicOrderTwoLine));
    s.push_back(CUTE(sanitizeSentence));
    s.push_back(CUTE(compareIfTwoWordsEqual));
    s.push_back(CUTE(compareIfOneWordisBigger));
    s.push_back(CUTE(compareIfOneWordisSmaller));
    s.push_back(CUTE(compareIfOneWordisSmallerOREqual));
    s.push_back(CUTE(compareIfOneWordisBiggerOREqual));



    cute::xml_file_opener xmlfile(argc,argv);
    cute::xml_listener<cute::ide_listener<> > lis(xmlfile.out);

    cute::makeRunner(lis,argc, argv)(s, "Words");
}

int main(int argc, char const *argv[]){
	runAllTest( argc,   argv);
}

