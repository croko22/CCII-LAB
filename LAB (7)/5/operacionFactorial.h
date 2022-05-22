#pragma once
#include "operacionBase.h"
//operacionFactorial.h
class operacionFactorial: public operacionBase{
public:
	operacionFactorial();
	~operacionFactorial();
	int devolverFactorial();
};