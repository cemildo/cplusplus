#include "getline_iterator.h"
#include "cute/cute.h"
#include "cute/ide_listener.h"
#include "cute/xml_listener.h"
#include "cute/cute_runner.h"
#include <iostream>
#include <vector>
#include <functional>
#include <sstream>

using namespace std;

void testLeerString(){
	istringstream a {""};
		line_iterator eof{};
		line_iterator in(a);
		ostringstream out{};

	    copy(in,eof, ostream_iterator<string> (out,""));
	    ASSERT_EQUAL("", out.str());
}

void testLineIterator() {

	istringstream a {"asefaefawe"};
	line_iterator eof{};
	line_iterator in(a);
	ostringstream out{};

    copy(in,eof, ostream_iterator<string> (out,""));
    ASSERT_EQUAL("asefaefawe", out.str());

}

void testMehrereZeilen(){
	istringstream a {"aaaa\nbbbb\ncccc"};
	line_iterator eof{};
	line_iterator in(a);
	ostringstream out{};

	copy(in,eof, ostream_iterator<string> (out,""));
	ASSERT_EQUAL("aaaabbbbcccc", out.str());
}


void testdefaultIteratorEqual() {


	line_iterator a{};
	line_iterator b{};

    ASSERT(a==b);

}

void testGetPrefixValue(){
	istringstream a {"aaaa\ncccc"};

	line_iterator eof{};
    line_iterator in(a);
    ostringstream out{};

    copy( ++in,eof, ostream_iterator<string> (out,""));

	ASSERT_EQUAL("cccc", out.str());

}

void testGetPostfixValue(){
	istringstream a {"aaaa\ncccc"};

	line_iterator eof{};
    line_iterator in(a);
    ostringstream out{};
    copy(in++,eof, ostream_iterator<string> (out,""));

	ASSERT_EQUAL("aaaa", out.str());

}


void runAllTest(int argc, char const *argv[]){
    cute::suite s;


    s.push_back(CUTE(testLineIterator));
	s.push_back(CUTE(testdefaultIteratorEqual));
	s.push_back(CUTE(testLeerString));
	s.push_back(CUTE(testMehrereZeilen));
	s.push_back(CUTE(testGetPrefixValue));
	s.push_back(CUTE(testGetPostfixValue));



    cute::xml_file_opener xmlfile(argc,argv);
    cute::xml_listener<cute::ide_listener<> > lis(xmlfile.out);

    cute::makeRunner(lis,argc, argv)(s, "line_iterator");
}

int main(int argc, char const *argv[]){
	runAllTest( argc,   argv);
}


