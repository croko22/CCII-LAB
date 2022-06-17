#pragma once
#include <bits/stdc++.h>
#include "Nodo.h"
using namespace std;

class Pila {
private:
	Nodo* head;
	string nombre{}; //Usado para hanoi
public:
	Pila(){
		head = NULL;
	}
	Pila(string _nombre){
		head = NULL;
		nombre=_nombre;
	}
	string getNombre(){return nombre;}
		
	int getHead(){return head->data;}
	void insertar(int n);
	void eliminar();
	void buscar(int key);
	void mostrarPila();
};
