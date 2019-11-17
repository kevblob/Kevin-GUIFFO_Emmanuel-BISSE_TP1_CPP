
#include <iostream>
#include "uid.h"

#include <string>

uid::uid(std::string id){
	m_id_init=id;
	m_id_next="000";
	m_num=0;
}

std::string uid::newId(){
	m_num=m_num+1;
	m_id_next=m_id_init+std::to_string(m_num); //to obtain the next identifier
	return m_id_next;
}



/*
uid::uid(int i){
	m_id_init=i;
	m_id_final=0;
}

int uid::newId(){
	m_id_final=m_id_init+1;
	m_id_init=m_id_init+1;
	return m_id_final;
}
*/


/*
void uid::detId(int i){
	m_id_init=i;
}
*/