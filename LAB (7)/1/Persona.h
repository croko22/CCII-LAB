#pragma once
// Persona.h
#include <string>
using namespace std;
class Persona
{
    protected:
        int edad;
        string nombre;
    public:
        Persona();
        ~Persona();
        void setEdad(int x){edad=x;}
        void setNombre(string x){nombre=x;}
        void info();
};