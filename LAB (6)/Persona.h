#pragma once
#include <iostream>
#include <string>
using namespace std;

class Persona{
    private:
        string fNac;
        string fActual;
        
    public:
        Persona(string,string);
        ~Persona();
        void calcularEdad();
};