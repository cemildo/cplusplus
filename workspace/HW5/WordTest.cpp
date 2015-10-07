/*
#include "Word.h"
#include "cute/cute.h"
#include "cute/ide_listener.h"
#include "cute/cute_runner.h"
#include "cute/xml_listener.h"

Word word;

void testPunktuation() {
	ASSERT_EQUAL("cemil",word.FixWord("cemil++''**"));
}

void runAllTests(int argc, char const *argv[]){
	cute::suite s;

	s.push_back(CUTE(testPunktuation));
	cute::xml_file_opener xmlfile(argc,argv);
	cute::xml_listener<cute::ide_listener<> >  lis(xmlfile.out);
	cute::makeRunner(lis,argc,argv)(s, "AllTests");
}

int main(int argc, char const *argv[]){
    runAllTests(argc,argv);
}
*/
