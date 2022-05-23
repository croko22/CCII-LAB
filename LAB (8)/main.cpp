#include <iostream>
#include <vector>
#include <utility>
#include "Forma.h"
#include "Forma.cpp"
#include "Rectangulo.h"
#include "Rectangulo.cpp"
#include "Cuadrado.h"
#include "Cuadrado.cpp"
#include "Elipse.h"
#include "Elipse.cpp"
#include "Circulo.h"
#include "Circulo.cpp"
using namespace std;

//EJERCICIOS 1 - 4
/*
int main()
{
    //Ejercicio 1
    Forma f=Forma();
    f.imprimir();
    Rectangulo r=Rectangulo(1,1,8,4,"gris");
    r.imprimir();
    r.resize(0.1);
    r.imprimir();
    //Ejercicio 2
    Elipse e=Elipse(7,7,8,4,"verde");
    e.imprimir();
    //Ejercicio 3
    Cuadrado c1=Cuadrado(7,7,8,"lila");
    c1.setCord(make_pair(0,0));
    c1.imprimir();
    //Ejercicio 4
    Circulo c=Circulo(7,7,8,"celeste");
    c.resize(0.5);
    c.imprimir();
}
*/
//EJERCICIOS 5 - 8
/*
void defForm(int x,int y, string color,Forma *forms[3],int size){
    pair<int,int> p = make_pair(x,y);
    for(int i=0; i<size;i++){
        forms[i]->setCord(p);
        forms[i]->setColor(color);
        forms[i]->imprimir();
        cout<<"Area obtenida: "<<forms[i]->area()<<endl;
    }
}

void maxArea(Forma *forms[3],int size){
    Forma *mayor = new Forma();
    for(int i=0; i<size;i++){
        if(forms[i]->area()>mayor->area()) mayor=forms[i];
    }
    cout<<"Mayor area: "<<mayor->area()<<endl;
    cout<<"Info figura mayor area: "<<endl;
    mayor->imprimir();
}

int main(){
    //P5Def forms v
    //P6Area forms v
    //P7Virtual testing
    cout<<"---VECTOR DE FORMAS---"<<endl;
    int s{3}; //Tamaño de nuestro vector
    //Declaración del vector
    Forma *formas[s]; 
    formas[0] = new Circulo(7,17,8,"celeste");
    formas[1] = new Cuadrado(79,17,22,"celeste");
    formas[2] = new Rectangulo(72,7,1,5,"celeste");
    defForm(5,6,"verde",formas,s);

    //P8Max area in the group
    cout<<"---MAX AREA---"<<endl;
    maxArea(formas,s);
    return 0;
}
*/