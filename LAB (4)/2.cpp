#include <iostream>

using namespace std;
//KEVIN JOAQUIN CHAMBI TAPIA | CUI:20200556

//Ejercicio 2
bool seEncuentra(int a[8], int n){
	for(int i=0; i<8;i++){
		if(a[i]==n) return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	int n[8]{},t{};
	for (int i = 0; i <8;i++){
		cin>>n[i];
	}
	cout<<"Ingrese el n a buscar: ";cin>>t;
	if(seEncuentra(n,t)) cout<<"Si se encuentra";
	else cout<<"No se encuentra";
	return 0;
}