#include "sevensegment.h"
#include "calc.h"
#include "pocketcalculator.h"
#include "cute/cute.h"
#include "cute/ide_listener.h"
#include "cute/xml_listener.h"
#include "cute/cute_runner.h"
#include <iostream>
#include <vector>

using namespace std;

void checkIfCanDivideWithZero() {
	ASSERT_THROWS(calc(0,0,'/'), std::invalid_argument);
}

void checkIfCanMultiply() {
	ASSERT_EQUAL(  18 , calc(6,3,'*'));
}

void checkIfCanAdd() {
	ASSERT_EQUAL(  9 , calc(6,3,'+'));
}

void checkIfCanDivide() {
	ASSERT_EQUAL(  2 , calc(6,3,'/'));
}

void checkIfCanSubstract() {
	ASSERT_EQUAL(  7 , calc(10,3,'-'));
}

void shouldAddTwoNegativeNumbers() {
	int sum = calc(-1, -1, '+');
	ASSERT_EQUAL(-2, sum);
}

void shouldModuloTwoNumbers() {
	int result = calc(5, 3, '%');
	ASSERT_EQUAL(2, result); // since integer
}

void shouldModuloTwoNegativeNumbers() {
	int result = calc(5, -3, '%');
	ASSERT_EQUAL(2, result); // since integer
}


void printLargeSubstract() {
	std::istringstream in{"10 - 1 \n"};
		std::ostringstream out{};
		pocketCalculator(in, out);

		ASSERT_EQUAL(
			" - \n"
			"| |\n"
			" - \n"
			"  |\n"
			" - \n"
				,
			out.str()
		);
}

void printLargeAddition() {
	std::istringstream in{"5 + 4 \n"};
		std::ostringstream out{};
		pocketCalculator(in, out);

		ASSERT_EQUAL(
			" - \n"
			"| |\n"
			" - \n"
			"  |\n"
			" - \n"
				,
			out.str()
		);
}

void printLargeMultiplication() {
	 std::istringstream in{"3*3 \n"};
		std::ostringstream out{};
		pocketCalculator(in, out);

		ASSERT_EQUAL(
			" - \n"
			"| |\n"
			" - \n"
			"  |\n"
			" - \n"
				,
			out.str()
		);
}


void printLargeDivision() {
	 std::istringstream in{"27/3 \n"};
	 std::ostringstream out{};
	 pocketCalculator(in, out);

		ASSERT_EQUAL(
			" - \n"
			"| |\n"
			" - \n"
			"  |\n"
			" - \n"
				,
			out.str()
		);
}


void printLargeDivisionByZero() {
	std::istringstream in{"10 / 0\n"};
	std::ostringstream out{};
	pocketCalculator(in, out);

	ASSERT_EQUAL(
		" -             \n"
		"|              \n"
		" -  -  -  -  - \n"
		"|  |  |  | ||  \n"
		" -        -    \n"
			,
		out.str()
	);
}

void printLargeUnKnownOperant() {
	std::istringstream in{"* / + \n"};
	std::ostringstream out{};
	pocketCalculator(in, out);

	ASSERT_EQUAL(
		" -             \n"
		"|              \n"
		" -  -  -  -  - \n"
		"|  |  |  | ||  \n"
		" -        -    \n"
			,
		out.str()
	);
}




void runAllTest(int argc, char const *argv[]){
    cute::suite s;

    // TODO Push the functors onto the test suite

    s.push_back(CUTE(checkIfCanDivideWithZero));
    s.push_back(CUTE(checkIfCanMultiply));
    s.push_back(CUTE(checkIfCanAdd));
    s.push_back(CUTE(checkIfCanDivide));
    s.push_back(CUTE(checkIfCanSubstract));
    s.push_back(CUTE(shouldAddTwoNegativeNumbers));
    s.push_back(CUTE(shouldModuloTwoNumbers));
    s.push_back(CUTE(shouldModuloTwoNegativeNumbers));
    s.push_back(CUTE(printLargeDivisionByZero));
	s.push_back(CUTE(printLargeSubstract));
	s.push_back(CUTE(printLargeAddition));
	s.push_back(CUTE(printLargeMultiplication));
	s.push_back(CUTE(printLargeDivision));
	s.push_back(CUTE(printLargeUnKnownOperant));


    cute::xml_file_opener xmlfile(argc,argv);
    cute::xml_listener<cute::ide_listener<> > lis(xmlfile.out);

    cute::makeRunner(lis,argc, argv)(s, "Calc&Large Number Tests");
}
/*
int main(int argc, char const *argv[]){
	runAllTest( argc,   argv);
}
*/
