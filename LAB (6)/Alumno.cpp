#include <iostream>
#include "Alumno.h"
using namespace std;

Alumno::Alumno(string _CUI,string _Nombre,int _parcial1,int _parcial2,int _parcial3){
    CUI=_CUI;
    Nombre=_Nombre;
    parcial1=_parcial1;
    parcial2=_parcial2;
    parcial3=_parcial3;
}

Alumno::~Alumno(){}

float Alumno::promedio(){
    return (parcial1+parcial2+parcial3)/3;;
}

bool Alumno::validarNota(){
    return promedio()>10.5;
}

void Alumno::infoAlumno(){
    cout<<"El alumno "<<Nombre<<" CUI: "<<CUI<<" | Nota final: "<<promedio()<<endl;
    if(validarNota()) cout<<"APROVO EL CURSO"<<endl; else cout<<"DESAPROVO EL CURSO"<<endl;
}