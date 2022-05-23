//Rectangulo.cpp
#include "Rectangulo.h"
Rectangulo::Rectangulo(int x,int y,double _ladoMen,double _ladoMay,string _color)
{
    nombre="rectangulo";
    cord = make_pair(y,x);
    ladoMen = _ladoMen;
    ladoMay = _ladoMay;
    color = _color;
}
Rectangulo::~Rectangulo(){}
Rectangulo::Rectangulo(){}

void Rectangulo::imprimir(){
    Forma::imprimir();
    cout<<"- Lados: "<<ladoMen<<" y "<<ladoMay<<endl;
    cout<<"- El area es: "<<area()<<endl;
    cout<<"- El perimetro es: "<<perimetro()<<endl;
}
double Rectangulo::area(){
    return ladoMay*ladoMen;
}
double Rectangulo::perimetro(){
    return 2*(ladoMay+ladoMen);
}
void Rectangulo::resize(double x){
    ladoMen*=x;
    ladoMay*=x; 
}