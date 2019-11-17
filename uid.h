
#ifndef _uid_h
#define _uid_h
#include <string>

class uid
{
public: 
	uid(std::string id="ROOm");
	//void setIdinit(int i);
	std::string newId();
private:
	std::string m_id_init; //first identifier
	std::string m_id_next; //next identifier
	int m_num; //Initial number of the room


/*
public: 
	uid(int id=1);
	//void setIdinit(int i);
	int newId();
private:
	int m_id_init;
	int m_id_final;
*/
};

#endif