#include <iostream>
#include <string>

#include "Carro.h"
#include "Builder.h"
#include "Director.h"

using namespace std;

void ClienteCode(Director& director){
	string c; 
	cout<<"Modelo del carro: "; getline(cin,c);
	BuilderEspecifico* builder = new BuilderEspecifico(c);
	director.set_builder(builder);
	std::cout << "POR DEFECTO\n";
	director.BuildCarro();
	Carro* p = builder->GetProducto();
	p->ListaComp();
	delete p;
	//AUTO PERSONALIZADO (Caracteristicas a desicion del cliente (color, tipo, etc...))
	std::cout << "PERSONALIZADO\n";
	builder->Reset(c);
	director.BuildCarroCustom();
	p = builder->GetProducto();
	p->ListaComp();
	delete p;
	delete builder;
}
int main() {
	Director* director = new Director();
	ClienteCode(*director);
	delete director;
	return 0;
}