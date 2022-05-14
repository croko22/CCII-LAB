#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Arreglo{
    private:
        vector<int> arr;

    public:
        Arreglo(vector<int>);
        ~Arreglo();
        void agregarDato(int);
        bool verificarEspacio();
        void retirarDato(int);
        bool verificarDato(int);
        void mostrarArr();
};