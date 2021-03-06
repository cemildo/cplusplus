
/*

#include "countingToLower.h"
#include "cute/cute.h"
#include "cute/ide_listener.h"
#include "cute/xml_listener.h"
#include "cute/cute_runner.h"

void lowerFirstCharacter() {
	std::string str("Hello!");
	ASSERT_EQUAL(1, countingToLower(str));
	ASSERT_EQUAL("hello!", str);
}

void lowerSeveralCharacters() {
	std::string str("Hello World, its ME!");
	ASSERT_EQUAL(4, countingToLower(str));
	ASSERT_EQUAL("hello world, its me!", str);
}

void lowerNone() {
	std::string str("no uppercase characters here");
	ASSERT_EQUAL(0, countingToLower(str));
	ASSERT_EQUAL("no uppercase characters here", str);
}

void lowerAll() {
	std::string str("LOL");
	ASSERT_EQUAL(3, countingToLower(str));
	ASSERT_EQUAL("lol", str);
}

void lowerEmpty() {
	std::string str("");
	ASSERT_EQUAL(0, countingToLower(str));
	ASSERT_EQUAL("", str);
}

void umlautsAreNotChanged() {
	std::string str("ÄÖÜ");
	ASSERT_EQUAL(0, countingToLower(str));
	ASSERT_EQUAL("ÄÖÜ", str);
}
void runAllTests(int argc, char const *argv[]){
	cute::suite s;
	s.push_back(CUTE(lowerFirstCharacter));
	s.push_back(CUTE(lowerSeveralCharacters));
	s.push_back(CUTE(lowerNone));
	s.push_back(CUTE(lowerAll));
	s.push_back(CUTE(lowerEmpty));
	s.push_back(CUTE(umlautsAreNotChanged));
	cute::xml_file_opener xmlfile(argc,argv);
	cute::xml_listener<cute::ide_listener<> >  lis(xmlfile.out);
	cute::makeRunner(lis,argc,argv)(s, "AllTests");
}

int main(int argc, char const *argv[]){
    runAllTests(argc,argv);
}
*/
