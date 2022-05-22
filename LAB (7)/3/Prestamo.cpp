#include "Prestamo.h "
//Prestamo.cpp
Prestamo::Prestamo(string _cliente,double _saldo){
	cliente=_cliente;
	saldo=_saldo;
	numProductos+=1;
}
Prestamo::Prestamo(){}
Prestamo::~Prestamo(){}
void Prestamo::imprimir(){
	cout<<"El cliente "<<cliente<<" realizo un prestamo de "<<saldo<<" soles, n de operaciones "<<numProductos<<endl;
}