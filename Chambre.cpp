

#include <iostream>
#include "Chambre.h"

Chambre::Chambre(int idch, std::string type, float prix)
{
	m_idch=idch;
	m_type=type;
	m_prix=prix;
}

int Chambre::getIdch() const{
	return m_idch;
}

std::string Chambre::getType() const {
	return m_type;
}

int Chambre::getPrix() const {
	return m_prix;
}

void Chambre::setIdch (int idch) {
	if (idch > 0 && idch != m_idch)
		m_idch = idch;
	else
		std::cout<<"Error: the identifier " <<idch<<" already exists or <=0"<<std::endl;

}


void Chambre::setType (std::string type) {
	m_type = type;
}

void Chambre::setPrix (float prix) {
	if (prix <= 0) {
		m_prix = prix;
	}  
	else {
		std::cout << "Error: " << prix << " <= 0 " << std::endl; 
	}
}


