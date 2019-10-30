

#include <iostream>
#include "Chambre.h"

Chambre::Chambre(int idch, std::string type, int prix)
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