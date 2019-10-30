//Déclaration de la classe chambre

#ifndef _chambre_h
#define _chambre_h

#include <string>

class Chambre
{
public:
	Chambre(int idch, std::string type, int prix);
	int getIdch() const;
	int getPrix() const;
	std::string getType() const;

private:
	int m_idch; // identifiant de la chambre
	std::string m_type; // ex : single, Suite Double
	int m_prix; 
	
};


#endif