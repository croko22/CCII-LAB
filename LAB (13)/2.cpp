#include <bits/stdc++.h>
using namespace std;

struct alumno {
	string nombre;
	int pF;
	int sF;
	int tF;
	int prF;
};

typedef alumno Alumno;
bool aprovo(Alumno a); //Promedio de notas
void mostrarAlumnos(vector<Alumno> c); //Alumnos

int main()
{
 	vector<Alumno> alumnos;
 	//Entradas de prueba
 	alumnos.push_back({"Wallace",17,07,19,20});

 	int n{},t1,t2,t3,t4; //Cantidad de compañeros y var temp
 	string tN;
 	cout<<"Cantidad de compañeros"<<endl;cin>>n;
 	for(int i=n;i;i--){
 		cout<<"Nombre: "<<endl;cin>>tN;
 		cout<<"Primera fase: "<<endl;cin>>t1;
 		cout<<"Segunda fase: "<<endl;cin>>t2;
 		cout<<"Tercera fase: "<<endl;cin>>t3;
 		cout<<"Trabajo final: "<<endl;cin>>t4;
 		alumnos.push_back({tN,t1,t2,t3,t4});
 	}

	mostrarAlumnos(alumnos);
	return 0;
}

bool aprovo(Alumno a){
	float nF{};//Nota final
	nF=((15*a.pF)+(20*a.sF)+(25*a.tF)+(40*a.prF))/100;
	return nF >=10.5;
}

void mostrarAlumnos(vector<Alumno> c){
	for(auto i:c){
		cout<<"ALUMNO"<<endl;
		cout<<"Nombre: "<<i.nombre<<endl;
		cout<<"Notas: "<<i.pF<<","<<i.sF<<","<<i.tF<<","<<i.prF<<endl;
		(aprovo(i)) ? cout<<"Aprovo el curso"<<endl : cout<<"Desaprovo el curso"<<endl;
	}
}