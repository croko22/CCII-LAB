//Circulo.h
#pragma once
#include "Elipse.h"

class Circulo: public Elipse
{
public:
    Circulo(int,int,double,string);
    ~Circulo();
    void imprimir();
};