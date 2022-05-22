#include "ProductoBancario.h"
//ProductoBancario.cpp
ProductoBancario::ProductoBancario(){}
ProductoBancario::~ProductoBancario(){}
void ProductoBancario::imprimir(){
	cout<<"El cliente "<<cliente<<" realizo "<<numProductos<<" operaciones, saldo actual "<<saldo<<endl;
}