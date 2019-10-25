
#include <iostream>
#include "Date.h"

int main() {
	Date default_date;
	std::cout << "Default date is " << default_date.getMonth() << "/" << default_date.getDay()<< "/" << default_date.getYear() << std::endl;	
	return 0;
}

