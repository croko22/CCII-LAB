#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Matriz{
    private:
        vector<vector<int>> arr;
    public:
        Matriz();
        ~Matriz();
        void mostrarDatos();
        void buscarDato(int);
};