#include "cute/cute.h"
#include "cute/ide_listener.h"
#include "cute/xml_listener.h"
#include "cute/cute_runner.h"
#include <iostream>
#include <vector>
#include <string>
#include "dynArray.h"

using namespace std;


void testMemberFunctionAtWithNegativeInt(){
	dynArray<int> arr {1,2,3,4,5,6,7,8};
	ASSERT_EQUAL(6,arr.at(-3));
}

void testMemberFunctionAtWithPositiveInt(){
	dynArray<int> arr {1,2,3,4,5,6,7,8};
	ASSERT_EQUAL(4,arr.at(3));
}

void testMemberFunctionAtWithDouble(){
	dynArray<double> arr {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8};
	ASSERT_EQUAL(6.6,arr.at(-3));
}

void testArraySize(){
	dynArray<int> arr(10,2);
	ASSERT_EQUAL(10,arr.size());
}

void testEmptyInitializeList(){
	dynArray<int> arr1 {};
	dynArray<int> arr2 {};
	ASSERT_EQUAL(arr1.size(),arr2.size());
}

void testAtFunctionWithStringNegativeIndex() {
	std::istringstream in{"Hello Today How are you"};
	using iterator = std::istream_iterator<std::string>;
	iterator it{in}, eof{};
	dynArray<std::string> arr(it,eof);
	ASSERT_EQUAL( "are", arr.at(-2) );
}

void testAtFunctionWithStringPositiveIndex() {
	std::istringstream in{"Hello Today How are you"};
	using iterator = std::istream_iterator<std::string>;
	iterator it{in}, eof{};
	dynArray<std::string> arr(it,eof);
	ASSERT_EQUAL( "How", arr.at(2) );
}

void testInitializeListWithChar(){
	dynArray<char> arr{'h','e','l','l','o'};
	ASSERT_EQUAL('l',arr.at(-2));
}


void testInitializeListWithString(){
	dynArray<std::string> arr{"hello","how","are","you"};
	ASSERT_EQUAL("are",arr.at(-2));
}

void testLastElementWithAtFunction(){
	dynArray<std::string> arr{"hello","how","are","you"};
	ASSERT_EQUAL("you",arr.at(arr.size()-1));
}

void testFirstElementWithAtFunction(){
	dynArray<std::string> arr{"hello","how","are","you"};
	ASSERT_EQUAL("hello",arr.at(-arr.size()));
}

void testCopyAnotherDyn(){
	dynArray<int> a{1,2,3,4,5,6};
	dynArray<int> b(a);
	ASSERT_EQUAL(a.at(-3),b.at(-3));
}

void testMemberFunctionBeginAndEnd(){
	dynArray<int> a{1,2,3,4,5,6};
	ostringstream out{};
	copy(a.begin(),a.end(),ostream_iterator<int> (out,","));
	ASSERT_EQUAL("1,2,3,4,5,6,",out.str());
}

void testMemberFunctionConstBeginAndEnd(){
	dynArray<int>   a{1,2,3,4,5,6};
	ostringstream out{};
	copy(a.begin(),a.end(),ostream_iterator<int> (out,","));
	ASSERT_EQUAL("1,2,3,4,5,6,",out.str());
}

void testMemberFunctionrBeginAndrEnd(){
	dynArray<char>  a{'a','b','c','d','e'};
	ostringstream out{};
	copy(a.rbegin(),a.rend(),ostream_iterator<char> (out,""));
	ASSERT_EQUAL("edcba",out.str());
}


void testMemberFunctionConstrBeginAndrEnd(){
	dynArray<char>   a{'a','b','c','d','e'};
	ostringstream out{};
	copy(a.crbegin(),a.crend(),ostream_iterator<char> (out,""));
	ASSERT_EQUAL("edcba",out.str());
}

void testMemberFunctionSize(){
	dynArray<char>   a{'a','b','c','d','e'};

	ASSERT_EQUAL( 5 , a.size() );
}

void testMemberFunctionReSize(){
	dynArray<char>   a{'a','b','c','d','e'};
	a.resize(10);
	ASSERT_EQUAL( 10 , a.size() );
}

void testMemberFunctionReSizeWithValue(){
	dynArray<int>   a{1,2,3,4,5,6};
	a.resize(10,10);
	ostringstream out{};
	copy(a.begin(),a.end(),ostream_iterator<int> (out,""));
	//12345610101010
	ASSERT_EQUAL( 10 , a.size() );
}

void testMemberFunctionClear(){
	dynArray<int>   a{1,2,3,4,5,6};
    a.clear();
	ASSERT_EQUAL( 0 , a.size() );
}

void testMemberFunctionCapacity(){
	dynArray<int>   a{1,2,3,4,5,6};
	a.resize(10,10);
	ASSERT_EQUAL( 12 , a.capacity() );
}

void testMemberFunctionEmpty(){
	dynArray<int>   a{1,2,3,4,5,6};
    a.clear();
	ASSERT( a.empty() );
}

void testMemberFunctionPushBack(){
	dynArray<int>   a{};
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
	ASSERT_EQUAL( 5, a.at(-1) );
}

void testMemberFunctionFront(){
	dynArray<int>   a{1,2,3,4,5,6};
	ASSERT_EQUAL( 1  , a.front() );
}

void testMemberFunctionBack(){
	dynArray<int>   a{1,2,3,4,5,6};
	ASSERT_EQUAL( 6  , a.back() );
}

//ask how to use const here
void testMemberFunctionConstFront(){
	dynArray<int>  const  a{1,2,3,4,5,6};
	ASSERT_EQUAL( 1  , a.front() );
}

void testMemberFunctionConstBack(){
	dynArray<int> const  a{1,2,3,4,5,6};
	ASSERT_EQUAL( 6  , a.back() );
}

void testMemberFunctionErase(){
	dynArray<int>  a{1,2,3,4,5,6};
	a.erase(a.begin()+5);
	ASSERT_EQUAL( 5  , a.back() );
}
//frage das auch ob iterqtor implementaion korrekt ist
void testMemberFunctionEraseRange(){
	dynArray<int>  a{1,2,3,4,5,6};
	a.erase(a.begin(),a.begin()+3);
	ASSERT_EQUAL( 4  , a.front() );
}

void testMemberFunctionPopBack(){
	dynArray<int>  a{1,2,3,4,5,6};
	a.pop_back();
	ASSERT_EQUAL( 5  , a.back() );
}

void runAllTest(int argc, char const *argv[]){
    cute::suite s;



	s.push_back(CUTE(testMemberFunctionAtWithPositiveInt));
	s.push_back(CUTE(testMemberFunctionAtWithDouble));
	s.push_back(CUTE(testAtFunctionWithStringPositiveIndex));
	s.push_back(CUTE(testAtFunctionWithStringNegativeIndex));
	s.push_back(CUTE(testMemberFunctionAtWithNegativeInt));
	s.push_back(CUTE(testArraySize));
	s.push_back(CUTE(testEmptyInitializeList));
	s.push_back(CUTE(testInitializeListWithChar));
	s.push_back(CUTE(testInitializeListWithString));
	s.push_back(CUTE(testLastElementWithAtFunction));
	s.push_back(CUTE(testFirstElementWithAtFunction));
	s.push_back(CUTE(testCopyAnotherDyn));
	s.push_back(CUTE(testMemberFunctionBeginAndEnd));
	s.push_back(CUTE(testMemberFunctionConstBeginAndEnd));
	s.push_back(CUTE(testMemberFunctionrBeginAndrEnd));
	s.push_back(CUTE(testMemberFunctionConstrBeginAndrEnd));
	s.push_back(CUTE(testMemberFunctionSize));
	s.push_back(CUTE(testMemberFunctionReSize));
	s.push_back(CUTE(testMemberFunctionReSizeWithValue));
	s.push_back(CUTE(testMemberFunctionClear));
	s.push_back(CUTE(testMemberFunctionCapacity));
	s.push_back(CUTE(testMemberFunctionEmpty));
	s.push_back(CUTE(testMemberFunctionPushBack));
	s.push_back(CUTE(testMemberFunctionFront));
	s.push_back(CUTE(testMemberFunctionBack));
	s.push_back(CUTE(testMemberFunctionConstFront));
	s.push_back(CUTE(testMemberFunctionConstBack));
	s.push_back(CUTE(testMemberFunctionErase));
	s.push_back(CUTE(testMemberFunctionEraseRange));
	s.push_back(CUTE(testMemberFunctionPopBack));




    cute::xml_file_opener xmlfile(argc,argv);
    cute::xml_listener<cute::ide_listener<> > lis(xmlfile.out);

    cute::makeRunner(lis,argc, argv)(s, "dynArray");
}

int main(int argc, char const *argv[]){
	runAllTest( argc,   argv);
}

