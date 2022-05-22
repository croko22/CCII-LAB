#include <iostream>
#include <vector>
#include <string>
//E1
#include "1/Persona.h"
#include "1/Persona.cpp"
#include "1/Alumno.h"
#include "1/Alumno.cpp"
//E2
#include "2/Objeto.h"
#include "2/Objeto.cpp"
//E3
#include "3/ProductoBancario.h"
#include "3/ProductoBancario.cpp"
#include "3/Cuenta.h"
#include "3/Cuenta.cpp"
#include "3/CuentaJoven.h"
#include "3/CuentaJoven.cpp"
#include "3/Prestamo.h"
#include "3/Prestamo.cpp"
#include "3/Hipoteca.h"
#include "3/Hipoteca.cpp"
//E4
#include "4/ClaseDisco.h"
#include "4/ClaseDisco.cpp"
//E5
#include "5/operacionFactorial.h"
#include "5/operacionFactorial.cpp"
//E6
#include "6/Ave.h"
#include "6/Ave.cpp"
#include "6/Ganso.h"
#include "6/Ganso.cpp"
#include "6/Pato.h"
#include "6/Pato.cpp"
#include "6/Gallina.h"
#include "6/Gallina.cpp"

using namespace std;

//Ejercicio 1
/*
int main()
{
    Persona p1=Persona();
    p1.setEdad(27);
    p1.setNombre("Pepe");
    p1.info();

    Alumno a1 = Alumno("Kevin",19);
    a1.info();
    a1.setNombre("Croko");
    a1.setEdad(22);
    a1.infoA();
    return 0;
}
*/
//Ejercicio 2
/*
int main()
{
    Objeto a1 = Objeto();
    a1.setNombre("silla");
    a1.Setr(100);
    a1.Setg(100);
    a1.Setb(100);
    a1.Setmat("madera");
    a1.info();
    a1.Setmat("bronce");
    a1.Setg(200);
    a1.info();
    return 0;
}
*/
//Ejercicio 3
/*
int main()
{
    Cuenta c=Cuenta("Croko",1000,0);
    c.imprimir();

    CuentaJoven c1=CuentaJoven("Felipe");
    c1.imprimir();

    Prestamo p=Prestamo("Wallace",1000);
    p.imprimir();

    Hipoteca h=Hipoteca("George",777777);
    h.imprimir();
    return 0;
}
*/
//Ejercicio 4
/*
int main(){
    vector<string> c ={"caa1","caa2"};
    ClaseDisco d1 = ClaseDisco("Disco",77,c);
    d1.reproducir();
    d1.info();

    return 0;
}
*/
//Ejercicio 5
/*
int main()
{
    operacionFactorial o1 = operacionFactorial();
    o1.setOperador(5);
    cout<<"Factorial: "<<o1.devolverFactorial()<<endl;
    o1.setOperador(7);
    cout<<"Factorial: "<<o1.devolverFactorial()<<endl;
    return 0;
}
*/
//Ejercicio 6
/*
main(){
    Ganso g = Ganso();
    g.volar();

    Pato p=Pato();
    p.volar();

    Gallina g1 = Gallina();
    g1.volar();

    return 0;
}
*/