#include "sayHello.h"
#include <string>
#include <sstream>
#include <iostream>


void sayHello (std::istringstream & in , std::ostringstream & out){
   out << in.str();

}
