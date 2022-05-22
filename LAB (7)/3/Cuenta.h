#pragma once
#include "ProductoBancario.h"
//Cuenta.h
class Cuenta: public ProductoBancario{
	public:
		Cuenta(string,double,int);
		Cuenta();
		~Cuenta();
};