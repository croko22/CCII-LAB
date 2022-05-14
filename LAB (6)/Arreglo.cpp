#include <iostream>
#include <vector>
#include <algorithm> 
#include "Arreglo.h"

Arreglo::Arreglo(vector<int> _arr){
    arr=_arr;
}
Arreglo::~Arreglo(){}

void Arreglo::agregarDato(int d){
    if(verificarEspacio()) {
        arr.push_back(d);
        cout<<"Dato agregado: "<<d<<endl;
    } else cout<<"El arreglo esta lleno"<<endl;
}

bool Arreglo::verificarEspacio(){
    return (arr.size()<5);
}

bool Arreglo::verificarDato(int d){
    vector<int>::iterator it;
    it= find(arr.begin(), arr.end(), d);
    if (it != arr.end())
        return true;
    else
        return false;

}

void Arreglo::retirarDato(int d){
    if(verificarDato(d)) {
        arr.erase(remove(arr.begin(), arr.end(), d), arr.end());
        cout<<"Dato retirado: "<<d<<endl;
    } else if(arr.size()==0){
        cout<<"El arreglo esta vacio"<<endl;
    } else cout<<"No se encontro el dato"<<endl;
}

void Arreglo::mostrarArr(){
    for (size_t i = 0; i < arr.size(); ++i) {
        cout<<arr[i]<<" ";
    }
    cout << endl;
}