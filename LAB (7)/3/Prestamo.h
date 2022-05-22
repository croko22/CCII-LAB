#pragma once
#include "ProductoBancario.h"
//Prestamo.h
class Prestamo: protected ProductoBancario{
	public:
		Prestamo(string,double);
		Prestamo();
		~Prestamo();
		void imprimir();
};