#include "operacionFactorial.h"
#include "operacionBase.cpp"
//operacionFactorial.cpp
operacionFactorial::operacionFactorial(){}
operacionFactorial::~operacionFactorial(){}
int operacionFactorial::devolverFactorial(){
	int f{1};
	for (int i=1;i<=operador; ++i) f*=i;
	return f;
}