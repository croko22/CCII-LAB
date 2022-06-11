#include <bits/stdc++.h>
#include "Nodo.h"

#include <chrono>
using namespace std::chrono;

using namespace std;

//EJERCICIO 1 INSERTAR AL FINAL
void insertarF(Nodo **head, int n)
{
    Nodo* new_Nodo = new Nodo(n); //Posible nuevo nodo
    Nodo *last = *head; //Nodo de recorrido
    //Apertura a nuevas conexiones
    new_Nodo->next = NULL;
    //Condicion para inciar nueva lista
    if (*head == NULL)
    {
        *head = new_Nodo;
        return;
    }
    //Recorrer la lista
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_Nodo;
}
//Ejercicio 2 INSERTAR AL INICIO
void insertarI(Nodo** head, int n)
{
    //Inicial el nodo con la data
    Nodo* new_node = new Nodo(n);
 
    //Nuevo nodo como cabeza
    new_node->next = (*head);
    (*head) = new_node;
}
//Ejercicio 3 INSERTAR EN INDEX
void insertarIndex(Nodo **head,int n, int position) {     
    Nodo* newNodo = new Nodo(n); 
    newNodo->next = NULL;

    if(position < 1) {
        cout<<"\nposition should be >= 1.";
    } else if (position == 1) {
        newNodo->next = *head;
        *head = newNodo;
    } else {
    	Nodo* temp = *head;
        for(int i = 1; i < position; i++) {
	        if(temp != NULL) {
	            temp = temp->next;
	        }
    	}
     
        if(temp != NULL) {
          newNodo->next = temp->next;
          temp->next = newNodo;  
        } else {
          cout<<"\nThe previous Nodo is null.";
        }       
    }
} 
//Ejercicio 4 ELIMINAR ULTIMO ELEMENTO (Sin perder referencia, no copiar la lista)
void eliminarF(Nodo **head)
{
    if(*head != NULL) {
    	Nodo* temp = *head;
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
//Ejercicio 5 ELIMINAR PRIMER ELEMENTO
void eliminarI(Nodo** head)
{	
    if(*head != NULL) {
    	Nodo* temp = *head;
        *head = temp->next;
        delete temp;
    }
}
//Ejercicio 6 ELIMINAR EN INDEX
void eliminarPos(Nodo** head, int position)
{
    if (*head == NULL) return;
    //Nodo cabeza
    Nodo* temp = *head;
 
    //Si esta al inicio
    if (position == 0) {
        *head = temp->next;
        delete temp;
        return;
    }
 
    //Recorrer hasta el nodo deseado
    for (int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;
 
    //Supera el tamaño de la lista
    if (temp == NULL || temp->next == NULL) return;
 
    //Reservar el espacio del nodo
    Nodo* next = temp->next->next;
 
	//Eliminar el nodo
    delete temp->next;
 
    //Reconectar la lista
    temp->next = next;
}
//Ejercicio 7 ORDENAR ASCENDENTE
void oAscendente(Nodo **head)
{
    Nodo * curr = *head; //Nodo inicial
    Nodo * next; //Nodo siguiente

    while (curr && curr->next) //Existencia del nodo
    {
        Nodo * next = curr->next;
        //Recorre el par
        while (next)
        {	//Si se cumple intercambia el par
            if (curr->data > next->data){ 
                swap(next->data, curr->data);
            }
            next = next->next;
        }
        curr = curr->next; //Itera el nodo
    }
}
//Ejercicio 8 ORDENAR DESCENDENTE
void oDescendente(Nodo **head)
{//Lo mismo pero se cambia > a <
    Nodo * temp = *head;
    Nodo * next;

    while (temp && temp->next)
    {
 	    Nodo * next = temp->next;
        while (next)
        {
            if (temp->data < next->data)
            {
                swap(next->data, temp->data);
            }
            next = next->next;
        }
        temp = temp->next;
    }
}

void mostrarLista(Nodo *Nodo)
{
	cout<<"- Los numeros de la lista son: ";
    while (Nodo != NULL)
    {
        cout<<" "<<Nodo->data;
        Nodo = Nodo->next;
    }
    cout<<endl;
}
int main()
{
    srand(time(NULL)); //Ramdom para testear
    Nodo* head = NULL; //Cabeza de la lista
    
    int n; cout<<"Cantidad de n a generar: ";cin>>n;

    cout<<"\nSe generaron "<<n<<" numeros random"<<endl;
    for (int i=0;i<n;i++) insertarF(&head,rand()%10+1);
	mostrarLista(head);

    //INSERTAR
    //EJERCICIO 1
    cout<<"Insertar al final"<<endl;
    insertarF(&head,777);mostrarLista(head);

    //EJERCICIO 2
    cout<<"Insertar al inicio"<<endl;
    insertarI(&head,111);mostrarLista(head);

	//EJERCICIO 3 
	cout<<"Insertar en posicion 3"<<endl;
    insertarIndex(&head,727,3);mostrarLista(head);



    //ELIMINAR
	//EJERCICIO 4
	cout<<"Eliminar ultimo elemento"<<endl;
    eliminarF(&head);mostrarLista(head);
    //EJERCICIO 5 
    cout<<"Eliminar primer elemento"<<endl;
    eliminarI(&head);mostrarLista(head);
    //EJERCICIO 6 
    cout<<"Eliminar elemento posicion 3"<<endl;
    eliminarPos(&head,3);mostrarLista(head);


    //ORDENAR
    auto start = high_resolution_clock::now(); //Medicion del tiempo

    //EJERCICIO 7 
    cout<<"Orden ascendente"<<endl;
    oAscendente(&head);mostrarLista(head);
    //EJERCICIO 8 	
	cout<<"Orden descendente"<<endl;
 	oDescendente(&head);mostrarLista(head);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Tiempo de ejecucion: "<< duration.count() << " microseconds" << endl;
    

    delete head;
    return 0;
}