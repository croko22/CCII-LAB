#include "ClaseDisco.h"
#include "ClaseMultimedia.cpp"

//ClaseDisco.cpp
ClaseDisco::ClaseDisco(string _nombre,int _duracionMin,vector<string> _canciones){
	nombre=_nombre;
	duracionMin=_duracionMin;
	canciones=_canciones;
}
ClaseDisco::~ClaseDisco(){}
void ClaseDisco::info(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Duracion: "<<duracionMin<<endl;
	cout<<"Canciones:\n";
	for(auto a:canciones) cout<<"- "<<a<<"\n";
}