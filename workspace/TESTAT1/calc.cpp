#include "calc.h"
#include <istream>
#include <stdexcept>
#include <iostream>

int calculatedResult;

int calc(int firstNumber, int secondNumber, char operatorSymbol){


	if(operatorSymbol == '+'){
		return calculatedResult = firstNumber + secondNumber;
	}else if(operatorSymbol == '-'){
		return calculatedResult = firstNumber - secondNumber;
	}else if(operatorSymbol == '*'){
		return calculatedResult = firstNumber*secondNumber;
	}else if(operatorSymbol == '%'){
		return calculatedResult = firstNumber % secondNumber;
	}else if(operatorSymbol == '/'){
		// special case
		if(secondNumber == 0){
			 throw std::invalid_argument("Cannot divide by zero"); //like this.
		}
		return calculatedResult = firstNumber / secondNumber;
	}else{
		throw std::invalid_argument("Unknown operator!");
	}
}

int calc(int firstNumber, char operatorSymbol){

	int secondNumber = calculatedResult;

	if(operatorSymbol == '+'){
		return firstNumber + secondNumber;
	}else if(operatorSymbol == '-'){
		return firstNumber - secondNumber;
	}else if(operatorSymbol == '*'){
		return firstNumber*secondNumber;
	}else if(operatorSymbol == '%'){
		return firstNumber % secondNumber;
	}else if(operatorSymbol == '/'){
		// special case
		if(secondNumber == 0){
			 throw std::invalid_argument("Cannot divide by zero"); //like this.
		}
		return firstNumber / secondNumber;
	}else{
		throw std::invalid_argument("Unknown operator!");
	}
}

int calc(std::istream &input){
	int firstNumber{0};
	int secondNumber{0};
	char operatorSymbol { };
	if(calculatedResult){
        input >> operatorSymbol;
		input >> secondNumber;
        return calc(calculatedResult, secondNumber, operatorSymbol);
	}
	else{

		input >> firstNumber;
		input >> operatorSymbol;
		input >> secondNumber;
		return calc(firstNumber, secondNumber, operatorSymbol);
	}


}
