#pragma once
#include "Forma.h"

class Elipse: public Forma
{
protected:
    double radioMay;
    double radioMen;
public:
    Elipse(int,int,double,double,string);
    Elipse();
    ~Elipse();
    double area();
    void resize(double);
    void imprimir();
};