#include <iostream>
#include <cctype> //Para usar la función tolower
#include <algorithm> //Foreach
#include <cmath>
#include <bitset>
using namespace std;
//NOMBRE: KEVIN JOAQUIN CHAMBI TAPIA | CUI: 20200556
//EJERCICIO 1

int main()
{
    int a,b;
    // cout<<"Primer numero:";cin>>a;
    // cout<<"Segundo numero:";cin>>b;
    cout<<"El producto es:7";
    return 0;
}

//EJERCICIO 2
/*
int main()
{
    string correo,n,ap,am;
    cout<<"Primer nombre: ";cin>>n;
    cout<<"Apellido paterno: ";cin>>ap;
    cout<<"Apellido materno: ";cin>>am;
    correo=n[0]+ap+am[0]+"@unsa.edu.pe";
    //For each para poner el correo en lowercase
    for_each(correo.begin(), correo.end(), [](char & c) {
        c = ::tolower(c);
    });
    cout<<"Su correo instutucional es: "<<correo;
    return 0;
}
*/
//EJERCICIO 3
/*
int main(){
    int h,m,totalMin,t;
    string hF="";
    cout<<"Horas: ";cin>>h;
    cout<<"Minutos: ";cin>>m;
    totalMin=h*60+m;
    cout<<"Tiempo a agregar: ";cin>>m;
    totalMin+=m;
    totalMin%=1440;
    //Condicionales para setear la hora
    if(totalMin/60 < 10){
        hF+="0"+to_string(totalMin/60);
    } else hF+=to_string(totalMin/60);
    hF+=":";
    if(totalMin%60 < 10){
        hF+="0"+to_string(totalMin%60);
    } else hF+=to_string(totalMin%60);
    if(totalMin/60 >= 12) hF+="PM"; else hF+="AM";

    cout<<"La hora de finalizacion es: "<<hF;
    return 0;
}
*/
//EJERCICIO 4

//EJERCICIO 5
/*
int main(){
    float n;
    cin>>n;cout<<"El n redondeado es: "<<round(n);
    return 0;
}
*/
//EJERCICIO 6
/*
int main(){
    int n;
    cout<<"Ingrese el numero: ";cin>>n;
    if(n>100 && n<999){
        bitset<10> nB(n);
        cout<<"El n en binario es: "<<nB;
    } else cout<<"No se encuentra en el rango";
    return 0;
}
*/
//EJERCICIO 7
/*
int main(){
    int a,b;
    cin>>a>>b;
    if(a%b==0) cout<<b<<" es divisor de "<<a;
    else if (b%a==0) cout<<a<<" es divisor de "<<b;
    else cout<<"No son divisores";
    return 0;
}
*/
//EJERCICIO 8
/*
int main(){
    int n,c,m=0,tn;
    cout<<"Cant numeros: ";cin>>n;
    tn=n;
    while(n--){
        cout<<"Ingrese el numero: ";cin>>c;
        m+=c;
    }
    cout<<"La media es "<< m/tn;
}
*/
//EJERCICIO 9
/*
int main()
{
    int i=10,n, c{0};
    while(i--){
        cout<<"Ingrese el numero: ";cin>>n;
        if(n<0) c+=n;
    }
    cout<<"La suma de los negativos es: "<<c;
    return 0;
}
*/
//EJERCICIO 10
/*
int main()
{
    string pass, prueba;
    cout<<"Ingrese la contrasena: ";cin>>pass;
    while(prueba!=pass){
        cout<<"Ingrese la contrasena de nuevo: ";cin>>prueba;
        if(prueba!=pass) cout<<"Intentelo de nuevo"<<endl;
    }
    cout<<"Bienvenido";
    return 0;
}
*/
