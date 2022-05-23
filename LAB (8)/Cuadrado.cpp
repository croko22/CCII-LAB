//Cuadrado.cpp
#include "Cuadrado.h"
Cuadrado::Cuadrado(int x,int y,double _lado,string _color)
{
    nombre="cuadrado";
    cord = make_pair(y,x);
    ladoMen = _lado;
    ladoMay = _lado;
    color = _color;
}

Cuadrado::~Cuadrado(){}

void Cuadrado::imprimir(){
    Forma::imprimir();
    cout<<"- Lado: "<<ladoMen<<endl;
    cout<<"- El area es: "<<area()<<endl;
    cout<<"- El perimetro es: "<<perimetro()<<endl;
}