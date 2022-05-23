//Circulo.cpp
#include "Circulo.h"
Circulo::Circulo(int x,int y,double _radio,string _color)
{
    nombre="circulo";
    cord = make_pair(y,x);
    radioMen = _radio;
    radioMay = _radio;
    color = _color; 
}
Circulo::~Circulo(){}
void Circulo::imprimir(){
    Forma::imprimir();
    cout<<"- Radio: "<<radioMen<<endl;
    cout<<"- El area es: "<<area()<<endl;
}