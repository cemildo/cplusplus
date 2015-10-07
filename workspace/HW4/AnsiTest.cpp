#include "Ansi.h"
#include "cute/cute.h"
#include "cute/ide_listener.h"
#include "cute/cute_runner.h"
#include "cute/xml_listener.h"
void testClear(){
	ASSERT_EQUAL("\033[2J",Ansi::Clear());
}
void testForeColorWhite() {
	ASSERT_EQUAL("\033[37m",Ansi::ForeColor(Ansi::white));
}
void testBAckColorBlack(){
	ASSERT_EQUAL("\033[40m",Ansi::BackColor(Ansi::black));
}
void testBold(){
	ASSERT_EQUAL("\033[1m",Ansi::Bold());
}
void testAttrOff(){
	ASSERT_EQUAL("\033[0m",Ansi::AttributeOff());
}
void testPosXY(){
	ASSERT_EQUAL("\033[2;3H",Ansi::Pos(2,3));
}
void testHome(){
	ASSERT_EQUAL("\033[0;0H",Ansi::Home());
}
void testUp(){
	ASSERT_EQUAL("\033[2A",Ansi::Up(2));
}
void testDown(){
	ASSERT_EQUAL("\033[3B",Ansi::Down(3));
}
void testRight(){
	ASSERT_EQUAL("\033[4C",Ansi::Right(4));
}
void testLeft(){
	ASSERT_EQUAL("\033[5D",Ansi::Left(5));
}
void runAllTests(int argc, char const *argv[]){
	cute::suite s;
	s.push_back(CUTE(testForeColorWhite));
	s.push_back(CUTE(testClear));

	s.push_back(CUTE(testBAckColorBlack));
	s.push_back(CUTE(testBold));
	s.push_back(CUTE(testAttrOff));
	s.push_back(CUTE(testPosXY));
	s.push_back(CUTE(testHome));
	s.push_back(CUTE(testUp));
	s.push_back(CUTE(testDown));
	s.push_back(CUTE(testLeft));
	s.push_back(CUTE(testRight));
	cute::xml_file_opener xmlfile(argc,argv);
	cute::xml_listener<cute::ide_listener<> >  lis(xmlfile.out);
	cute::makeRunner(lis,argc,argv)(s, "AllTests");
}
/*
int main(int argc, char const *argv[]){
    runAllTests(argc,argv);
}
*/
