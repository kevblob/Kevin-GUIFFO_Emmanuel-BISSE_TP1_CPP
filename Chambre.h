//Déclaration de la classe chambre

#ifndef _chambre_h
#define _chambre_h

#include <string>

//enum valtype {Suite, Single, Double} pour les valeurs de type de chambre

class Chambre
{
public:
	Chambre(int idch=000000, std::string type="00000", float Price=0);
	int getIdch() const;
	int getPrice() const;
	std::string getType() const;
	void setIdch(int idch);
	void setType(std::string);
	void setPrice(float Price);

private:
	int m_idch; // identifiant de la chambre
	std::string m_type; // ex : single, Suite Double
	float m_Price; 
	
};


#endif