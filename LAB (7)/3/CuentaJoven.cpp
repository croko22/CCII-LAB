#include "CuentaJoven.h"
//CuentaJoven.cpp
CuentaJoven::CuentaJoven(string _cliente){
	cliente=_cliente;
	saldo=0;
	numProductos=0;
}
CuentaJoven::~CuentaJoven(){}
void CuentaJoven::imprimir(){
	cout<<"El nuevo cliente "<<cliente<<" saldo acutal "<<saldo<<" numero de operaciones "<<numProductos<<endl;
}