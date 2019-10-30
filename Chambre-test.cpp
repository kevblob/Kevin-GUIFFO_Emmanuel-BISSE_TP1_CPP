

#include <iostream>
#include "Chambre.h"

int main(){

Chambre Chambre01(201901, "Double", 180);
std::cout<<"Chambre01 Identifier : "<<Chambre01.getIdch()<<std::endl;
std::cout<<"          Type : "<<Chambre01.getType()<<std::endl;
std::cout<<"          Price : "<<Chambre01.getPrice()<<"$"<<std::endl;

Chambre Chambre405;
std::cout << "Default value"<< std::endl;
std::cout<<"Chambre405 Identifier : "<<Chambre405.getIdch()<<std::endl;
std::cout<<"           Type : "<<Chambre405.getType()<<std::endl;
std::cout<<"           Price : "<<Chambre405.getPrice()<<"$"<<std::endl;

Chambre405.setIdch(-201901);
Chambre405.setType("single");
Chambre405.setPrice(205);
std::cout << "After modification "<< std::endl;
std::cout<<"Chambre405 Identifier : "<<Chambre405.getIdch()<<std::endl;
std::cout<<"           Type : "<<Chambre405.getType()<<std::endl;
std::cout<<"           Price : "<<Chambre405.getPrice()<<"$"<<std::endl;

std::cout << "Run ok "<< std::endl;
return 0;

}