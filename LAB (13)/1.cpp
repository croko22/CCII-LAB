#include <bits/stdc++.h>
using namespace std;

struct compa {
	string nombre;
	int dia;
	int mes;
	int anio;
};

typedef compa Compa;
bool cumpleMes(Compa c);
void mostrarCompas(vector<Compa> c);

int main()
{
 	vector<Compa> compas;
 	//Entradas de prueba
 	compas.push_back({"Kevin",13,03,2003});
 	compas.push_back({"Wallace",07,07,1997});
 	compas.push_back({"George",12,06,1977});

 	int n{},tD,tM,tA; //Cantidad de compañeros y var temp
 	string tN;
 	cout<<"Cantidad de compañeros"<<endl;cin>>n;
 	for(int i=n;i;i--){
 		cout<<"Nombre: "<<endl;cin>>tN;
 		cout<<"Dia de nac: "<<endl;cin>>tD;
 		cout<<"Mes de nac: "<<endl;cin>>tM;
 		cout<<"Anio de nac: "<<endl;cin>>tA;
 		compas.push_back({tN,tD,tM,tA});
 	}

	mostrarCompas(compas);
	return 0;
}

bool cumpleMes(Compa c){
	time_t t = time(NULL);
	tm* tPtr = localtime(&t);
	int mes = tPtr->tm_mon+1;
	return c.mes == mes;
}

void mostrarCompas(vector<Compa> c){
	for(auto i:c){
		cout<<"COMPANERO"<<endl;
		cout<<"Nombre: "<<i.nombre<<endl;
		cout<<"Fecha Nacimiento: "<<i.dia<<"/"<<i.mes<<"/"<<i.anio<<endl;
		(cumpleMes(i)) ? cout<<"Cumple este mes"<<endl : cout<<"No cumple este mes"<<endl;
	}
}