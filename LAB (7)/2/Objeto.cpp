#include "Objeto.h"
//Objeto.cpp
Objeto::Objeto(){}
Objeto::~Objeto(){}

void Objeto::info(){
    std::cout<<"Objeto: "<<nombre<<" de color RGB ("<<r<<","<<g<<","<<b<<") es de "<<mat<<endl;
}