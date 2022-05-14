#pragma once
#include <iostream>
#include <string>
using namespace std;

class Alumno{
    private:
        string CUI;
        string Nombre;
        int parcial1;
        int parcial2;
        int parcial3;
    public:
        Alumno(string,string,int,int,int);
        ~Alumno();
        void infoAlumno();
        float promedio();
        bool validarNota();
};