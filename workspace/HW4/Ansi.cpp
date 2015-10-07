#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>
#include "Ansi.h"


std::string Ansi::Clear() {
    return ESCAPE +  "2J" ;
}

std::string Ansi::Bold() {
    return ESCAPE +  "1m" ;
}

std::string Ansi::Home() {
    return ESCAPE +  "0;0H" ;
}

std::string Ansi::AttributeOff() {
    return ESCAPE +  "0m" ;
}

std::string Ansi::Pos(unsigned l, unsigned c) {
    return ESCAPE + std::to_string(l) + ";" + std::to_string(c) + "H";
}


std::string Ansi::ForeColor(Ansi::colors color) {
    return ESCAPE + std::to_string(color + 30)  + "m";
}

std::string Ansi::BackColor(Ansi::colors color) {
	return ESCAPE + std::to_string(color + 40)  + "m";
}

std::string Ansi::Up(unsigned n) {
	return ESCAPE + std::to_string(n)  + "A";
}

std::string Ansi::Down(unsigned n) {
	return ESCAPE + std::to_string(n)  + "B";
}

std::string Ansi::Right(unsigned n) {
	return ESCAPE + std::to_string(n)  + "C";
}

std::string Ansi::Left(unsigned n) {
	return ESCAPE + std::to_string(n)  + "D";
}

