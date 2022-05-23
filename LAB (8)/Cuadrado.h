#pragma once
#include "Rectangulo.h"
class Cuadrado : public Rectangulo
{
private:
    int lado;
public:
    Cuadrado(int,int,double,string);
    ~Cuadrado();
    void imprimir();
};