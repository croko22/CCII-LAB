#include "Pila.h"
#include <bits/stdc++.h>
using namespace std;
//Ejercicio 1 INSERTAR
void Pila::insertar(int n)
{
	Nodo* newNodo = new Nodo(n);
	newNodo->next = head; 
	head = newNodo;   
}
//Ejercicio 2 BORRAR 
void Pila::eliminar()
{	
	if(head != NULL) {
		Nodo* temp = head;
		head = head->next; 
		delete temp; 
	}
}
//Ejercicio 3 BUSCAR 
void Pila::buscar(int key)
{
	int c{0}, i{0}; vector<int> index;
	if(head != NULL) {
		Nodo* temp = head;
		while(temp->next != NULL){
			if(temp->data==key){c++;index.push_back(i);}
			i++;
			temp = temp->next;
		}
		
		cout<<"Se encontro ("<<key<<"): "<<c<<" veces\nEn las posiciones: ";
		for(auto i:index) cout<<i<<" ";
		cout<<endl;
	}
}

//MOSTRAR PILA
void Pila::mostrarPila()
{
	Nodo* temp = head;
	cout<<"- Los numeros de la Pila "<<nombre<<" son: ";
	while(temp != NULL) {
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
