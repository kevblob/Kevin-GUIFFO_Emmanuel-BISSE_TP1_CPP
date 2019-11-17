//Déclaration de la classe chambre

#ifndef _chambre_h
#define _chambre_h

#include <string>
#include "uid.h"

enum typeChambre {Single=1, Double, Suite};

class Chambre
{
public:
	Chambre(uid &id, typeChambre type=Single, int price=100); //uid passing by reference to get the identifier 
	std::string getIdch() const;                              //from the same class uid for any AAAAA object
	std::string getType() const;
	int getPrice() const;
	void setChambre();

private:
	std::string m_idch;
	typeChambre m_type;
	float m_price; 
};
#endif