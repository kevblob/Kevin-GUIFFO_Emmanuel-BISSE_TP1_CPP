
#include <iostream>
#include "Date.h"

int main() {
	Date default_date;
	std::cout << "Default date is " << default_date.getMonth() << "/" << default_date.getDay()<< "/" << default_date.getYear() << std::endl;	
	
	Date new_date(1,4,2010);
	std::cout << "New date is " << new_date.getMonth() << "/" << new_date.getDay()<< "/" << new_date.getYear() << std::endl;	
	
	//Modification de la  date new_date 
	new_date.setMonth(12);
	new_date.setDay(5);
	new_date.setYear(2010);
	std::cout << "New date is " << new_date.getMonth() << "/" << new_date.getDay()<< "/" << new_date.getYear() << std::endl;	
	
	new_date.setMonth(13);
	new_date.setDay(0);
	new_date.setYear(-10);
	std::cout <<"New date is " << new_date.getMonth() << "/" << new_date.getDay()<< "/" << new_date.getYear() << std::endl;	
	

	return 0;
}

