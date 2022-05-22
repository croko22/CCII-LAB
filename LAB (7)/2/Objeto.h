#pragma once
#include "Color.h"
#include "Color.cpp"
#include "Material.h"
#include "Material.cpp"
//Objeto.h
class Objeto : public Color, public Material
{
    private:
        string nombre;
    public:
        Objeto();
        ~Objeto();
        void setNombre(string n) { nombre = n;}
        void info();
};