#include <iostream>
#include "Date.h" 

Date::Date(int month, int day, int year)  //valeurs par défaut month=1, day=1, year=2019
{
	m_month=month;
	m_day=day;
	m_year=year;
}


int Date::getMonth() const {
	return m_month;
}   

int Date::getDay() const{
	return m_day;
}

int Date::getYear() const {
	return m_year;
}

void Date::setMonth (int month) {
	if ((month > 0) && (month <=12)) {
		m_month = month;
	}  
	else {
		std::cout << "Error: month " << month << " is not in the range [1-12]" << std::endl; 
	}
}

void Date::setDay (int day) { // to be completed
	if ((day > 0) && (day <=31)) {
		m_day = day;
	}  
	else {
		std::cout << "Error: day " << day << " is not in the range [1-31]" << std::endl; 
	}
}

void Date::setYear (int year) { // to be completed
	if (year > 0) {
		m_year = year;
	}  
	else {
		std::cout << "Error: year " << year << " does not exist" << std::endl; 
	}
}