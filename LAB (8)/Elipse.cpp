//Elipse.cpp
#include "Elipse.h"
Elipse::Elipse(int x,int y,double _radioMen,double _radioMay,string _color)
{
    nombre="Elipse";
    cord = make_pair(y,x);
    radioMen = _radioMen;
    radioMay = _radioMay;
    color = _color; 
}
Elipse::Elipse(){};
Elipse::~Elipse(){}
void Elipse::imprimir(){
    Forma::imprimir();
    cout<<"- Lados: "<<radioMen<<" y "<<radioMay<<endl;
    cout<<"- El area es: "<<area()<<endl;
}
double Elipse::area(){
    return  3.1416*radioMay*radioMen;
}
void Elipse::resize(double x){radioMay*=x; radioMen*=x;}