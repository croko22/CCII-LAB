#include "Alumno.h"

Alumno::Alumno(string _nombre,int _edad)
{
    nombre=_nombre;
    edad=_edad;
}

Alumno::~Alumno(){}

void Alumno::infoA(){
    std::cout<<"El alumno "<<nombre<<" tiene "<<edad<<" anios."<<endl;
}
