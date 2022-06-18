#include <bits/stdc++.h>
#include "Cola.h"
#include "Cola.cpp"

using namespace std;
int main()
{
	srand(time(NULL)); //Ramdom c1ara testear
	Cola * c1 = new Cola(); //Inicio de la Cola
	
	int n; cout<<"Cantidad de n a generar: ";cin>>n;
	c1->insertar(111);c1->mostrarCola();
	cout<<"\nSe generaron "<<n<<" numeros random"<<endl;
	for (int i=0;i<n;i++) c1->insertar(rand()%10+1);
	c1->mostrarCola();
	
	//EJERCICIO 1 INSERTAR
	cout<<"Insertar"<<endl;
	c1->insertar(111);c1->mostrarCola();
	//EJERCICIO 2 ELIMINAR
	cout<<"Eliminar"<<endl;
	c1->eliminar();c1->mostrarCola();
	//EJERCICIO 3 BUSCAR
	cout<<"Buscar"<<endl;
	c1->buscar(2);c1->mostrarCola();
	
	return 0;
}
