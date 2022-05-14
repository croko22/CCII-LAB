#include <iostream>
#include <string>
#include <sstream>
#include "Persona.h"

Persona::Persona(string _fNac,string _fActual){
    fNac=_fNac;
    fActual=_fActual;
}

Persona::~Persona(){}

void Persona::calcularEdad(){
    string fechas=fNac+"/"+fActual;
    stringstream ss(fechas);
    vector<string> result;

    while( ss.good() )
    {
        string substr;
        getline( ss, substr, '/' );
        result.push_back( substr );
    }

    int dNac{stoi(result.at(0))},mNac{stoi(result.at(1))},aNac{stoi(result
            .at(2))},day{stoi(result.at(3))},month{stoi(result.at(4))},year{stoi(result.at(5))};

    int meses[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    //Dias-Meses
    if(dNac>day){
    day+=meses[mNac-1];
    month--;
    }
    //Meses-Años
    if(mNac>month){
    month+=12;
    year--;
    }
    cout<<"Tu edad es: "<<year-aNac<<" anios,"<<month-mNac<<" meses y "<<day-dNac<<" dias.";
}
