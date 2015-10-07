#ifndef ANSIKONSOLE_HPP_
#define ANSIKONSOLE_HPP_
#include <string>
 namespace Ansi{

    enum colors {black,red,green,yellow,blue,magenta,cyan,white};
	std::string const ESCAPE{"\033["};
	std::string Clear();
	std::string ForeColor(colors color);
	std::string BackColor(colors color);
	std::string Bold();
    std::string AttributeOff();
	std::string Pos(unsigned l, unsigned c);
	std::string Home();
	std::string Up(unsigned n);
	std::string Down(unsigned n);
	std::string Right(unsigned n);
	std::string Left(unsigned n);
};
#endif /*ANSIKONSOLE_HPP_*/
