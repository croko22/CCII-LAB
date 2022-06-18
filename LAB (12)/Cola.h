#pragma once
#include <bits/stdc++.h>
#include "Nodo.h"
using namespace std;

class Cola {
private:
	string tipo;
	Nodo* head;
public:
	Cola(){
		head = NULL;
	}
	Cola(string _tipo){
		head = NULL;
		tipo = _tipo;
	}
	string getTipo(){return tipo;}
	//Ejercicio 1 INSERTAR
	void insertar(int n);
	
	//Ejercicio 2 BORRAR 
	void eliminar();
	
	//Ejercicio 3 BUSCAR 
	void buscar(int key);
	
	//Ejercicio 4 MAYOR
	int mayor();
	
	//MOSTRAR Cola
	void mostrarCola();
};
