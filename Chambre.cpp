

#include <iostream>
#include "Chambre.h"

Chambre::Chambre(int idch, std::string type, float Price)
{
	m_idch=idch;
	m_type=type;
	m_Price=Price;
}

int Chambre::getIdch() const{
	return m_idch;
}

std::string Chambre::getType() const {
	return m_type;
}

int Chambre::getPrice() const {
	return m_Price;
}

void Chambre::setIdch (int idch) {
	if (idch > 0 ) {  //improve to check the unique identifier
		m_idch = idch;
	}
	else {
		std::cout<<"Error: the identifier " <<idch<<" <=0"<<std::endl;
	}
}

void Chambre::setType (std::string type) {
	m_type = type;
}

void Chambre::setPrice (float Price) {
	if (Price > 0) {
		m_Price = Price;
	}  
	else {
		std::cout << "Error: " << Price << " <= 0 " << std::endl; 
	}
}


