 #include <bits/stdc++.h>
#include "Pila.h"
#include "Pila.cpp"

using namespace std;

int main()
{
	srand(time(NULL)); //Ramdom para testear
	Pila p; //Inicio de la pila
	
	int n; cout<<"Cantidad de n a generar: ";cin>>n;
	
	cout<<"\nSe generaron "<<n<<" numeros random"<<endl;
	for (int i=0;i<n;i++) p.insertar(rand()%10+1);
	p.mostrarPila();
	
	//EJERCICIO 1 INSERTAR
	cout<<"Insertar"<<endl;
	p.insertar(111);p.mostrarPila();
	//EJERCICIO 2 ELIMINAR
	cout<<"Eliminar"<<endl;
	p.eliminar();p.mostrarPila();
	//EJERCICIO 3 BUSCAR
	cout<<"Buscar"<<endl;
	p.buscar(2);p.mostrarPila();
	
	return 0;
}
