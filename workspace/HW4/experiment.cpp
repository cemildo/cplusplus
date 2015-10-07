#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <chrono>

using testdata=std::vector<std::string>;

std::string pass_by_value(testdata v){
	size_t index = std::rand()%v.size();
	return v[index];
}
void copying_source_outside(){
	testdata v(1000000," ");
	for (int i = 0; i < 100; i++)
	{
		auto res = pass_by_value(v);
	}
}

std::chrono::microseconds time_func(void  (f)()){
	using namespace std::chrono;
	high_resolution_clock clock { };
	auto start=clock.now();
		f();
	auto end = clock.now();
	return duration_cast<microseconds>(end - start);
}
int main(){
	auto elapsed = time_func(copying_source_outside).count();
	std::cout << "source_outside :" << elapsed << " us\n";
}
