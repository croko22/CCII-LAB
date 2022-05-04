#include <iostream>

using namespace std;
//KEVIN JOAQUIN CHAMBI TAPIA | CUI:20200556

//Ejercicio 1
int main(int argc, char const *argv[])
{
	string personas[3][4]{};
	for (int i = 0; i < 3; i++)
	{
		cout<<"Nombre:";cin>>personas[i][0];
		cout<<"Apellido:";cin>>personas[i][1];
		cout<<"Edad:";cin>>personas[i][2];
		cout<<"DNI:";cin>>personas[i][3];
	}
	cout<<endl;
	for (int i = 0;i<3;i++){
		cout<<"#Persona "<<i+1<<endl;
		cout<<"Nombre:"<<personas[i][0]<<endl;
		cout<<"Apellido:"<<personas[i][1]<<endl;
		cout<<"Edad:"<<personas[i][2]<<endl;
		cout<<"DNI:"<<personas[i][3]<<endl;
	}
	return 0;
}