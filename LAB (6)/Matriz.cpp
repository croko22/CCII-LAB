#include <iostream>
#include <vector>
#include <algorithm> 
#include <random>
#include <chrono>  
#include "Matriz.h"

Matriz::Matriz(){
    vector<int> nums;
    for(int i=1; i<10;i++){
        nums.push_back(i);
    }
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(std::begin(nums), std::end(nums), default_random_engine(seed));

    for(int i = 0; i<9; i+=3) {
        //temp.clear();
        vector<int> temp(begin(nums)+i, begin(nums)+3+i);
        arr.push_back(temp);
    }
}
Matriz::~Matriz(){}

void Matriz::buscarDato(int d){
    bool seEncuentra{false};
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = 0; j < arr.size(); ++j) {
            if(arr[i][j]==d) {
                cout<<"El numero "<<d<<" se encuentra en la fila "<<i+1<<" columna "<<j+1<<endl;
                seEncuentra=true;
            }
        }
    }
    if(!seEncuentra) cout<<"No se encontro el numero "<<d<<endl;
}

void Matriz::mostrarDatos(){
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = 0; j < arr.size(); ++j) {
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;
}