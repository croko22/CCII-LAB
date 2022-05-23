#pragma once
#include <utility>
using namespace std;
class Forma
{
protected:
    string color;
    pair<int, int> cord;
    string nombre;
public:
    Forma();
    ~Forma();
    virtual void imprimir(); //Virtual para imprimir datos
    virtual double area(); //Virtual para calcular areas
    void setColor(string x){color = x;}
    void setCord(pair<int, int> t){cord = t;}
};