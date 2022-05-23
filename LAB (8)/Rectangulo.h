//Rectangulo.h
#pragma once
#include <utility>
#include "Forma.h"
using namespace std;

class Rectangulo : public Forma
{
protected:
    double ladoMen;
    double ladoMay;
public:
    Rectangulo(int,int,double,double,string);
    ~Rectangulo();
    Rectangulo();
    void imprimir();
    double area();
    double perimetro();
    void resize(double); 
};