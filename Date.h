//Creation du fichier Date.h

# ifndef _date_h
#define _date_h

#include <string>

class Date { 
public: 
	Date(int month=1, int day=1, int year=2019);   // Constructeur avec paramètres par défaut
	int getMonth() const;           //fonction constante pour empecher la modification de la variable
	int getDay() const;
	int getYear() const;
	void setMonth(int month);
	void setDay(int day);
	void setYear(int year);

private: 
	int m_month;
	int m_day;
	int m_year;
};
#endif