#ifndef DYNARRAY_H_
#define DYNARRAY_H_
#include <vector>
#include <iostream>
#include <initializer_list>

template<typename T>
class dynArray {
private:
	using dynType = std::vector<T>;
	dynType dynvec;


	size_t checkRange(int const index) const {

		return index < 0 ? size()+index : index;


	}

public:
	using value_type = typename dynType::value_type ;
	using iterator = typename dynType::iterator ;
	using const_iterator = typename dynType::const_iterator;
	using reverse_iterator = typename dynType::reverse_iterator;
	using const_reverse_iterator = typename dynType::const_reverse_iterator;
	using difference_type = typename dynType::difference_type;
	using size_type = typename dynType::size_type;
	using reference = typename dynType::reference;
	using const_reference = typename dynType::const_reference;
	explicit dynArray() = default;
	explicit dynArray(size_type n) :dynvec(n) {}
	dynArray(size_type n, const T& value = value_type()) :dynvec(n, value) {}
	dynArray(std::initializer_list<T> v) :dynvec(v) {}
	dynArray (const dynArray& dyn):dynvec{dyn.dynvec}{ };
	dynArray (dynArray&& dyn):dynvec{std::move(dyn.dynvec)}{}

	//frage das auch
	template<class Iter>
	dynArray(Iter in, Iter eof) :dynvec(in, eof) {}


    iterator begin() { return dynvec.begin(); }
	const_iterator begin() const {  return dynvec.begin(); }
	iterator end() { return dynvec.end(); }
	const_iterator end() const { return dynvec.end(); }
	reverse_iterator rbegin() { return dynvec.rbegin(); }
	const_reverse_iterator rbegin() const { return dynvec.rbegin(); }
	reverse_iterator rend() { return dynvec.rend(); }
	const_reverse_iterator rend() const { return dynvec.rend(); }
	const_iterator cbegin() const { return dynvec.cbegin(); }
	const_iterator cend() const { return dynvec.cend(); }
	const_reverse_iterator crbegin() const {  return dynvec.crbegin(); }
	const_reverse_iterator crend() const { return dynvec.crend(); }
	dynArray& operator= (const dynArray& x){dynvec=x.dynvec; return *this;};
	reference operator[] (size_type n) { return at(n);}
	const_reference operator[] (size_type n) const { return at(n);}
	reference at (size_type n) { return dynvec.at(checkRange(n));}
	const_reference at (size_type n) const { return dynvec.at(checkRange(n));}
	reference front() { return dynvec.front();}
	const_reference front() const {  return dynvec.front();}
	reference back() { return dynvec.back();}
	const_reference back() const { return dynvec.back();}

	size_type size() const { return dynvec.size();}
	void resize(size_type n){ dynvec.resize(n); };
	void resize(size_type n, const value_type& val){ dynvec.resize(n,val); }
	void erase(iterator n){ dynvec.erase(n); };
	void erase(iterator a, iterator b){ dynvec.erase(a,b); }
	void clear() { dynvec.clear();}
	size_type capacity() const { return dynvec.capacity();}
	bool empty() const { return dynvec.empty();}
    void push_back(T value) {dynvec.push_back(value);}
	void pop_back(){dynvec.pop_back();}
	void print() const {copy(dynvec.begin(), dynvec.end(), std::ostream_iterator<T>(std::cout, ", "));}


};
template<typename T>
dynArray<T> makedynArray(std::initializer_list<T> v){
	return dynArray<T>(v);
}


#endif



