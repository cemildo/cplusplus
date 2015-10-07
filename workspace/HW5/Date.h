#ifndef DATE_H_
#define DATE_H_
#include <map>
#include <string>
#include <iostream>




/*
struct Date{
*/
class Date{
private:
public:
	int year, month, day;

//...




public:
	std::map<int, std::string> wdays = {{0,"Mon"},{1,"Tue"},{2,"Wed"},{3,"Thu"},{4,"Fri"},{5,"Sat"},{6,"Sun"}};


	void print(std::ostream& out) const;
	static bool isValidYear(int year);
	static bool isLeapYear(int year);
	static bool isValidDate(int year, int month, int day);
	Date(int year, int month, int day);
	static int  endOfMonth(int year, int month);
	void nextDay();
	void previousDay();
	void nextMonth();
	void previousMonth();
    void printDayOfWeek(std::ostream& out) ;
	bool operator <(Date const& rhs) const;
	int  operator -(Date );
	void operator +=(int d);
	void operator -=(int d);
/*
private:
	int year, month, day;
*/






};









inline bool operator>(Date const& lhs, Date const& rhs){
	return rhs < lhs;
}
inline bool operator>=(Date const& lhs, Date const& rhs){
	return !(lhs < rhs);
}
inline bool operator<=(Date const& lhs, Date const& rhs){
	return !(rhs < lhs);
}

inline bool operator==(Date const& lhs, Date const& rhs){
	return !(lhs < rhs) && !(rhs < lhs) ;
}
inline bool operator!=(Date const& lhs, Date const& rhs){
	return !(lhs == rhs);
}

#endif /* DATE_H_ */
