#include "Hipoteca.h"
//Hipoteca.cpp
Hipoteca::Hipoteca(string _cliente,double _saldo){
	cliente=_cliente;
	saldo=_saldo;
	numProductos+=1;
}
Hipoteca::Hipoteca(){}
Hipoteca::~Hipoteca(){}
void Hipoteca::imprimir(){
	cout<<"El cliente "<<cliente<<" realizo una hipoteca de "<<saldo<<" soles, n de operaciones "<<numProductos<<endl;
}