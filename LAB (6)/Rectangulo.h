#pragma once
#include <iostream>
using namespace std;

class Rectangulo{
    private:
        int lado1;
        int lado2;

    public:
        Rectangulo(int,int);
        ~Rectangulo();
        void area();
        void perimetro();
};