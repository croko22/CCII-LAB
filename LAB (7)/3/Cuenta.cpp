#include "Cuenta.h"
//Cuenta.cpp
Cuenta::Cuenta(string _cliente,double _saldo,int _numProductos){
	cliente=_cliente;
	saldo=_saldo;
	numProductos=_numProductos;
}
Cuenta::Cuenta(){}
Cuenta::~Cuenta(){}