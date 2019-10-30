//Déclaration de la classe chambre

#ifndef _chambre_h
#define _chambre_h

#include <string>

//enum valtype {Suite, Single, Double} pour les valeurs de type de chambre

class Chambre
{
public:
	Chambre(int idch, std::string type, float prix);
	int getIdch() const;
	int getPrix() const;
	std::string getType() const;
	void setIdch(int idch);
	void setType(std::string);
	void setPrix(float prix);

private:
	int m_idch; // identifiant de la chambre
	std::string m_type; // ex : single, Suite Double
	float m_prix; 
	
};


#endif