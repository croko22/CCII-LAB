#include <iostream>
#include "Nodo.h"
#include "Pila.h"
#include "Pila.cpp"
using namespace std;

void moverPieza(Pila *a, Pila *b){ //Movimiento de pieza entre dos pilas
	cout<<"Moviendo "<<a->getHead()<<" de "<<a->getNombre()<<" a "<<b->getNombre()<<endl; //Informacion del mov
	b->insertar(a->getHead());
	a->eliminar();
	
	a->mostrarPila();
	b->mostrarPila();
}

void hanoi(int disk, Pila *inicio, Pila *temp, Pila *destino){ //Los discos de mayor valor no se encuentran encima NO 4 1 | SI 1 2
	if (disk==1) moverPieza(inicio,destino); //Mover la pieza final a la pila destino
	else
	{
		hanoi(disk-1,inicio,destino,temp); //Mover los discos a la pila temporal
		moverPieza(inicio,destino); //Mover piezas
		hanoi(disk-1,temp,inicio,destino); //Mover de temp a destino
	}
}

main(){
	Pila * p1 = new Pila("A");
	Pila * p2 = new Pila("B");
	Pila * p3 = new Pila("C");
	
	int n{};
	cout<<"Numero de piezas: ";cin>>n;
	
	for(int i=n;i;i--) p1->insertar(i);
	p1->mostrarPila();

	hanoi(n,p1,p2,p3);
	
	cout<<"Pilas luego de hacer hanoi"<<endl;
	p1->mostrarPila();
	p2->mostrarPila();
	p3->mostrarPila();
	
	delete p1;
	delete p2;
	delete p3;
	return 0;
}
