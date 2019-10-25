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