#include <iostream>
#include "Rectangulo.h"

Rectangulo::Rectangulo(int _lado1,int _lado2){
    lado1=_lado1;
    lado2=_lado2;
}

Rectangulo::~Rectangulo(){}

void Rectangulo::area(){
    cout<<"El area del rectangulo es: "<<lado1*lado2<<endl;
}

void Rectangulo::perimetro(){
    cout<<"El perimetro del rectangulo es: "<<(lado1+lado2)*2<<endl;
}