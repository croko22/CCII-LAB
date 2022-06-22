#include <bits/stdc++.h>
using namespace std;

struct empleado {
	string nombre;
	string sexo;
	int sueldo;
};

typedef empleado Empleado;
void mostrarMayMenSueldo(vector<Empleado> c); 
void infoE(Empleado e);

int main()
{
 	vector<Empleado> empleados;
 	//Entradas de prueba
 	empleados.push_back({"Wallace","Hombre",1118});

 	int n{},tS;
 	string tN,tSx; 
 	//Vamos a probar con 5
 	cout<<"Cantidad de compañeros"<<endl;cin>>n;
 	for(int i=n;i;i--){
 		cout<<"Nombre: "<<endl;cin>>tN;
 		cout<<"Sexo: "<<endl;cin>>tSx;
 		cout<<"Sueldo: "<<endl;cin>>tS;
 		empleados.push_back({tN,tSx,tS});
 	}

	mostrarMayMenSueldo(empleados);
	return 0;
}

void mostrarMayMenSueldo(vector<Empleado> c){
	int mayS{0},menS{INT_MAX};
	Empleado eMayS,eMenS;
	for(auto i:c){
		if(i.sueldo>mayS){
			mayS=i.sueldo;
			eMayS = i;
		}
		if(i.sueldo<menS){
			menS=i.sueldo;
			eMenS = i;
		}
	}

	cout<<"MAYOR SUELDO"<<endl;
	infoE(eMayS);
	cout<<"MENOR SUELDO"<<endl;
	infoE(eMenS);
}

void infoE(Empleado e){
	cout<<"- Nombre: "<<e.nombre<<endl;
	cout<<"- Sexo: "<<e.sexo<<endl;
	cout<<"- Sueldo: "<<e.sueldo<<endl;	
}