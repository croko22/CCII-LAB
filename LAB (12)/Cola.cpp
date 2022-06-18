#include <bits/stdc++.h>
#include "Cola.h"
using namespace std;

//Ejercicio 1 INSERTAR
void Cola::insertar(int n)
{
	Nodo* newNodo = new Nodo();
	newNodo->data = n;
	newNodo->next = head; 
	head = newNodo;   
}

//Ejercicio 2 BORRAR 
void Cola::eliminar()
{	
	if(head != NULL) {
		Nodo* temp = head;
		if(temp->next == NULL) {
			*head = NULL;
		} else {
			while(temp->next->next != NULL)
				temp = temp->next;
			Nodo* lastNode = temp->next;
			temp->next = NULL;
			delete lastNode; 
		}
	}
}
//Ejercicio 3 BUSCAR 
void Cola::buscar(int key)
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
//Ejercicio 4 MAYOR
int Cola::mayor()
{
	int m{0};
	if(head != NULL) {
		Nodo* temp = head;
		if(temp->data>m){m=temp->data;}
		while(temp->next != NULL){
			temp = temp->next;	
			if(temp->data>m){m=temp->data;}
		}
	}
	return m;
}

//MOSTRAR Cola
void Cola::mostrarCola()
{
	Nodo* temp = head;
	cout<<"- "<<tipo<<" en la Cola: ";
	while(temp != NULL) {
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
