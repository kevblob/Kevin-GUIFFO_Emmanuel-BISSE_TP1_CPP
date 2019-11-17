

#include<iostream>
#include<string>
#include "Chambre.h"

//uid uid1;

Chambre::Chambre(uid &id, typeChambre type, int price)
{
	m_idch=id.newId();
	m_type=type;
	m_price=price;
	
}

std::string Chambre::getIdch() const{
	return m_idch;
}

std::string Chambre::getType() const { //returns string corresponding to the position of the enumerator
	std::string type_chambre;
	switch(m_type){
		case 1 : type_chambre="Single"; break;
		case 2 : type_chambre="Double"; break;
		case 3 : type_chambre="Suite"; break;
	}  
	return type_chambre;
}

int Chambre::getPrice() const {
	return m_price;
}

/*
void Chambre::setTestId(uid &uidtest){
	m_testId=uidtest.newId();
}
*/

void Chambre::setChambre(){

	std::cout<<"Room details "<<std::endl;
	int position_enum=0;
	bool test=0;
	do{
		std::cout<<" Room type \n Enter 1 for *Single*, 2 for *Double*, 3 for *Suite* : ";
		std::cin>>position_enum;
		test=(position_enum==1)||(position_enum==2)||(position_enum==3);
		if (test==0)
			std::cout<<"Invalid type."<<std::endl;
	} while(test==0);

	m_type=static_cast<typeChambre>(position_enum); //static_cast : convert the integer 'positio_enum' to enumeration
	
	do {
		std::cout<<" Room price (can not be less than 100$) : ";
		std::cin>>m_price;
	}while (m_price<100);

}
