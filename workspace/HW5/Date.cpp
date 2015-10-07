#include "Date.h"
#include <ostream>
#include <stdexcept>
#include <iostream>
#include <iomanip>






void Date::print(std::ostream& out) const {
	auto ch = out.fill('0');
	out << std::setw(2) << day << '.';
	out << std::setw(2) << month << '.';
	out << std::setw(4) << year;
	out.fill(ch);
}



bool Date::isValidYear(int year) {
	return year >= 1813 && year < 10000;
}







bool Date::isLeapYear(int year) {
	return !(year % 4) && ((year % 100)	|| !(year % 400));
}







bool Date::isValidDate(int year, int month, int day) {
	return isValidYear(year) && day > 0 &&
			day <= endOfMonth(year,month);
}






Date::Date(int year, int month, int day)
:year{year},month{month},day{day}{
	if (! isValidDate(year,month,day))
		throw std::out_of_range{"invalid date"};
}





int  Date::endOfMonth(int year, int month){
	switch (month){
	case 1: case 3: case 5: case 7: case 8: case 10:
	case 12: return 31;
	case 4: case 6: case 9: case 11: return  30;
	case 2: return (isLeapYear(year)?29:28);
	}
	return 0;
}

void Date::nextDay() {
	if (day == endOfMonth(year,month)){
		day = 1;
		if (month == 12){
			month=1;
			++year;
			if (!isValidYear(year))
				throw std::out_of_range("last year");
		} else {
			++month;
		}
	} else {
		++day;
	}
}

void Date::previousDay() {
	if (day == 1){
		if (month == 1){
			month=12;
			--year;
			if (!isValidYear(year))
				throw std::out_of_range("last year");

		} else {
			--month;
		}
		day == endOfMonth(year,month-1);
	} else {
		--day;
	}
}

void Date::nextMonth(){

    if (month == 12){
		month=1;
		++year;
		if (!isValidYear(year))
			throw std::out_of_range("last year");
	} else {
		++month;
	}

    if (day == endOfMonth(year,month))
    	    day = endOfMonth(year,month+1);

}
void Date::previousMonth(){
	if(month == 1){
		month = 12 ;
		--year;
		if (!isValidYear(year))
			throw std::out_of_range("last year");
	}

	else
		month--;
}




bool Date::operator <(Date const& rhs) const {
	return year < rhs.year ||
		(year == rhs.year && (month < rhs.month ||
			(month==rhs.month && day < rhs.day)));
}

void Date::operator +=(int d) {
	while(d > endOfMonth(year,month)){
    	if(month == 12){
    		month = 1;
    		++year;
    	}
    	else{
    		month++;
    	}
    	d = d- endOfMonth(year,month);

    }
    if(d < endOfMonth(year,month)){
        	d = d+day;
        	if(d > endOfMonth(year,month)){
        	   day = d-endOfMonth(year,month);
        	   ++month;
        	}else
        		day = d;

        }
}

void Date::operator -=(int d) {
	while(d > endOfMonth(year,month)){
    	if(month == 1){
    		month = 12;
    		--year;
    	}
    	else{
    		--month;
    	}
    	d = d- endOfMonth(year,month);

    }
    if(d < endOfMonth(year,month)){

        	if(d > day){
        	   d = d - day;
        	   --month;
        	   day = endOfMonth(year,month)-d;
        	}else
        	   day = endOfMonth(year,month)-d;

        }
}

void Date::printDayOfWeek(std::ostream& out ){
    Date d(1900,1,1);
    Date currentDay(year,month,day);
    int daysSince = currentDay - d;
	auto ch = out.fill('0');
	out << std::setw(2) << wdays.at(daysSince%7) << '.';
	out << std::setw(2) << month << '.';
	out << std::setw(4) << year;
	out.fill(ch);

}

int Date::operator-(Date d)   {
	int total = 0;
	int smallday = day < d.day ? day : d.day;
	int bigday   = day > d.day ? day : d.day;
	int smallmonth = month < d.month ? month : d.month;
	int bigmonth   = month > d.month ? month : d.month;

    if( *this < d){
    	Date temp(1990,1,1);
    	temp.year = year;temp.month = month;temp.day = day;
    	year = d.year;month = d.month; d.day = day;
    	d.year = temp.year;d.month = temp.month;d.day=temp.day;
    }

	if(d.year == year && d.month == month){
		for(int i= smallday; i< bigday ; ++i)
			total++;
	}

	if( d.year == year && d.month != month){
		for(int i= day; i< endOfMonth(year,month) ; ++i)
		{
			total ++;
		}
		for(int i= smallmonth+1; i< bigmonth ; ++i)
		{
			total += endOfMonth(year,month);
		}
		for(int i= 1; i< d.day ; ++i)
		{
			total ++;
		}
	}
	if( d.year != year){
			for(int i= d.day; i< endOfMonth(d.year,d.month) ; ++i)
			{
				total ++;
			}
			for(int i= d.month+1; i< 13 ; ++i)
			{
				total += endOfMonth(d.year,i);
			}
			for(int y= d.year+1; y< year ; ++y)
			{
				for(int a= 1; a< 13 ; ++a)
				{
					total += endOfMonth(y,a);
				}
			}
			for(int i= 1; i< month ; ++i)
			{
				total += endOfMonth(year,i);
			}
			for(int i= 1; i<= day ; ++i)
			{
				total ++;
			}
		}



	return total;
 }




