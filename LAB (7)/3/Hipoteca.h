#pragma once
#include "Prestamo.h"
//Hipoteca.h
class Hipoteca: public Prestamo{
	public:
		Hipoteca(string,double);
		Hipoteca();
		~Hipoteca();
		void imprimir();
};