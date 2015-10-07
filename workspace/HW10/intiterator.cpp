#include <boost/iterator/filter_iterator.hpp>
#include <boost/iterator/counting_iterator.hpp>
#include <boost/operators.hpp>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

struct is_prime
  {
  bool operator()(unsigned number)
    {
    for(int div = 2; div <= std::sqrt(number); div++)
      {
      if(!(number % div))
        {
        return false;
        }
      }
    return true;
    }
  };

  struct prime_iterator : boost::input_iterator_helper<prime_iterator, unsigned>
  {
     explicit prime_iterator(unsigned primeCount) : primeCount(primeCount){ prime = 2; }

	  bool operator==(prime_iterator const &rhs) const { return primeCount == rhs.primeCount; }

	  value_type const & operator*() { return prime; };

	  prime_iterator operator++()
		{
			unsigned last = prime + 1;
			for(; !is_prime{}(last); last++);
			    prime = last;

			--primeCount;
			return *this;
		}

	  private:
		unsigned primeCount;
		unsigned prime;
  };

std::vector<int> boost_n_primes(unsigned primeCount)
{
  std::vector<int> output(primeCount);
  copy_n(boost::make_filter_iterator(is_prime{}, boost::make_counting_iterator(2)), primeCount, output.begin());
  return output;
}



template<typename T> inline T const & mitte(T const & a, T const & b, T const & c) {
	if((b < a && a < c) || (c < a && a < b)) return a;
	if((a < b && b < c) || (c < b && b < a)) return b;
	if((a < c && c < b) || (b < c && c < a)) return c;
};

template<typename T> inline T const & rotate3arguments(T  & a, T   & b, T   & c) {
	 T tempA = a;
	 a = b;
	 b = c;
	 c = tempA;

};


// base case overload
void println(std::ostream &out) {
	out << "\n";
}
//variadic template
template<typename Head, typename... Tail>

//head burda variatic yapinin baslangici iterator gibi dolaniyor ustunde tail in
void println(std::ostream &out, Head const& head, Tail const& ...tail) {
	out << head;

	if (sizeof...(tail)) {
	  out << ", ";

	}
	println(out,tail...); //recurse on tail
}






void aufgabe_1 (){
  auto boost_primes = boost_n_primes(40);
  std::cout << "boost_n_primes(40): ";
  std::copy(boost_primes.begin(), boost_primes.end(), std::ostream_iterator<unsigned>{std::cout, " "});
  std::cout << "\n";


  std::cout << "prime_iterator(40): ";
  std::copy(prime_iterator{40}, prime_iterator{0}, std::ostream_iterator<unsigned>{std::cout, " "});
  std::cout << "\n";

}


void aufgabe_2 () {
	if (mitte(7.0, 7.1, 7.05) == 7.05) { std::cout << "OK" << std::endl; }
	std::string eins("eins"), zwei("zwei"), drei("drei");
	if (mitte(eins, zwei, drei) == eins) { std::cout << "OK" << std::endl; }
	if (mitte<std::string>("vier", "fuenf", "sechs") == "sechs") { std::cout << "OK" << std::endl; }
}


void aufgabe_3 () {
	 int a=1,b=2,c=3;
	 std::cout<<a<<b<<c<<std::endl;

	 rotate3arguments(a,b,c);

	 std::cout<<a<<b<<c<<std::endl;
}

void aufgabe_4 (){
	std::ostringstream out{};
	println(out,1,2,3,"hello",' ',"world");
	std::cout<< out.str();
}





  int main()
  {
	  aufgabe_4 ();

  }
