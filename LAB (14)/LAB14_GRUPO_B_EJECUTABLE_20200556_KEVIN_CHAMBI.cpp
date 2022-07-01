#include <bits/stdc++.h>
#include "Producto.h"

using namespace std;

//Ejercicio 1 | Nuevo producto
void nuevoProducto(Producto** head, string c,string n,int p,int s)
{
    //Inicial el Producto con la data
    Producto* new_node = new Producto(c,n,p,s);
 
    //Nuevo Producto como cabeza
    new_node->next = (*head);
    (*head) = new_node;
}

//EJERCICIOS 2,3,4
void buscarProducto(Producto* head, string x)
{
    Producto* current = head; //Recorrer
    while (current != NULL)
    {
        if (current->codigo == x || current->nombre == x){
            current->modificar();
            return;
        }
        current = current->next;
    }
    cout<<"No se encuentra el producto"<<endl;
}

void mostrarLista(Producto *Producto)
{
	cout<<"- Los productos de la tienda son: "<<endl;
    while (Producto != NULL)
    {
        Producto->mostrar();
        Producto = Producto->next;
    }
    cout<<endl;
}
int main()
{
    Producto* head = NULL; //Cabeza de la lista
 
	//Productos de prueba
	nuevoProducto(&head,"011","Camisa",55,20);
	nuevoProducto(&head,"022","Pantalon",65,15);
	nuevoProducto(&head,"031","Polo",20,50);
	
	int op{}, tp, ts;
	string tn,tc;//Variables temp
	while(true){
		cout<<"1.Nuevo producto | 2.Buscar producto | 3.Ver productos | 0.Fin del programa\nAccion a realizar: "; cin>>op;
		if(op==1){//EJERCICIO 1: Insertar
			std::cout<<"Codigo:"; std::cin >> tc;
			std::cout<<"Nombre:"; std::cin >> tn;
			std::cout<<"Precio:"; std::cin >> tp;
			std::cout<<"Stock:"; std::cin >> ts;
			nuevoProducto(&head,tc,tn,tp,ts);
		}
		if(op==2){//EJERCICIO 2: Buscar
			std::cout<<"Codigo o Nombre de producto: "; std::cin >> tn;
			buscarProducto(head, tn);//EJERCICIOS 2y3: Dar de baja y modificar
		}
		if(op==3) mostrarLista(head);
		if(op==0) break;
	}
	
    delete head;
    return 0;
}
