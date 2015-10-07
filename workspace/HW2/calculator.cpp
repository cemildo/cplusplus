

auto calc (int a, int b, char operant){
	if( b != 0){
		switch(operant){
			case '+':
				return a+b;
			case '-':
				return a-b;
			case '*':
				return a*b;
			case '/':
				return a/b;
			case '%':
				return a%b;
			default:
				return -1;
			}


	}
	else{
		return -1;
	}

};
