#include <bits/stdc++.h>
#include "Cola.h"
#include "Cola.cpp"
using namespace std;
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> rand_int(0,100);//Generador de edades
//EJERCICIO 4
auto mayorColas(Cola * c1,Cola * c2){ //Comparar el mayor de cada pila
	return c1->mayor()>c2->mayor() ? make_pair(c1->getTipo(),c1->mayor()) : make_pair(c2->getTipo(),c2->mayor());
}
	
void iterarColas(int n,int nE,Cola * c1,Cola * c2){
	for (int i=0;i<n;i++){
		for (int j=0;j<nE;j++){//Generar elementos aleartoriamente
			c1->insertar(rand_int(gen));
			c2->insertar(rand_int(gen));
		}
		//Colas luego de la iteracion
		c1->mostrarCola();
		c2->mostrarCola();
		
		if(i==n-1) break; //Romper funcion para no alterar el resultado final
		
		//Mayor retorna un pair de string y entero
		auto mayor = mayorColas(c1,c2);
		cout<<"La mayor edad es: "<<mayor.first<<" "<<mayor.second<<endl;
		
		for (int j=0;j<nE;j++){
			c1->eliminar();
			c2->eliminar();
		}
	} 
	auto mayor = mayorColas(c1,c2);//Resultado final 
	cout<<"Luego de "<<n<<" iteraciones, la mayor edad es: "<<mayor.first<<" "<<mayor.second<<endl;
}
	
int main()
{
	Cola * hombres = new Cola("Hombres"); 
	Cola * mujeres = new Cola("Mujeres"); 
	int n, nE; 
	cout<<"Cantidad de veces a iterar: ";cin>>n;
	cout<<"Numero de elementos por cola: ";cin>>nE;
	iterarColas(n,nE,hombres,mujeres);
	
	delete hombres;
	delete mujeres;
	return 0;
}
