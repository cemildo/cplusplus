#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"
#include "calculator.h"

// TODO #include the headers for the code you want to test

// TODO Add your test functions
/*
 *  ASSERT_EQUAL(expected, actual)
 *  ASSERT_GREATER(left, right);
	ASSERT_GREATER_EQUAL(left, right);
	ASSERT_LESS(left, right);
	ASSERT_LESS_EQUAL(left, right);
 */
void checkDividerIfZero() {
	ASSERT_EQUALM("are the value as expected", -1 , calc(0,0,'/'));
}

void checkIfCanMultiply() {
	ASSERT_EQUALM("are the value as expected", 18 , calc(6,3,'*'));
}

void checkIfCanAdd() {
	ASSERT_EQUALM("are the value as expected", 9 , calc(6,3,'+'));
}

void checkIfCanDivide() {
	ASSERT_EQUALM("are the value as expected", 2 , calc(6,3,'/'));
}

void checkIfCanSubstract() {
	ASSERT_EQUALM("are the value as expected", 7 , calc(10,3,'-'));
}

void runAllTest(int argc, char const *argv[]){
    cute::suite s;

    // TODO Push the functors onto the test suite
    s.push_back(CUTE(checkDividerIfZero));
    s.push_back(CUTE(checkIfCanMultiply));
    s.push_back(CUTE(checkIfCanAdd));
    s.push_back(CUTE(checkIfCanDivide));
    s.push_back(CUTE(checkIfCanSubstract));
    cute::xml_file_opener xmlfile(argc,argv);
    cute::xml_listener<cute::ide_listener<> > lis(xmlfile.out);

    cute::makeRunner(lis,argc, argv)(s, "Calc Tests");
}

int main(int argc, char const *argv[]){
	runAllTest( argc,   argv);
}
