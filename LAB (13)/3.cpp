#include <bits/stdc++.h>
using namespace std;

struct jugador {
	string nombre;
	int edad;
	float talla;
};

typedef jugador Jugador;
bool apto(Jugador a); //Promedio de notas
void mostrarJugadoresAptos(vector<Jugador> c); //Alumnos

int main()
{
 	vector<Jugador> jugadores;
 	//Entradas de prueba
 	jugadores.push_back({"Wallace",17,1.8});

 	int n{},tE;
 	float tT;
 	string tN; 
 	//Vamos a probar con 5
 	cout<<"Cantidad de compañeros"<<endl;cin>>n;
 	for(int i=n;i;i--){
 		cout<<"Nombre: "<<endl;cin>>tN;
 		cout<<"Primera fase: "<<endl;cin>>tE;
 		cout<<"Segunda fase: "<<endl;cin>>tT;
 		jugadores.push_back({tN,tE,tT});
 	}

	mostrarJugadoresAptos(jugadores);
	return 0;
}

bool apto(Jugador a){
	return a.edad<20 && a.talla>1.7;
}

void mostrarJugadoresAptos(vector<Jugador> c){
	cout<<"JUGADORES APTOS"<<endl;
	for(auto i:c){
		if(apto(i)){
			cout<<"Jugador"<<endl;
			cout<<"Nombre: "<<i.nombre<<endl;
			cout<<"Edad: "<<i.edad<<endl;
			cout<<"Talla: "<<i.talla<<endl;			
		}
	}
}