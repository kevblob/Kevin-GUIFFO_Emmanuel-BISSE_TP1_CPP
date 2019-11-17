
#include<iostream>
#include<vector>
#include<string>
#include "Chambre.h"

void displayChambre(Chambre ch_display){
	std::cout<<"  ID : "<<ch_display.getIdch()<<std::endl;
	std::cout<<"  Type : "<<ch_display.getType()<<std::endl;
	std::cout<<"  Price : "<<ch_display.getPrice()<<"$"<<std::endl;
	std::cout<<std::endl;
}

int main(){
	uid idch;

	Chambre ch(idch);
	std::vector <Chambre> vector_chambre={ch};

	std::cout <<std::endl<<"Default value of room"<< std::endl;
	displayChambre(vector_chambre.at(0));

	Chambre ch1(idch, Suite, 500);
	std::cout<<"Chambre_1 : "<<std::endl;
	displayChambre(ch1);

	Chambre ch2(idch);
	std::cout<<"Chambre_2 : "<<std::endl;
	displayChambre(ch2);

	return 0;
}