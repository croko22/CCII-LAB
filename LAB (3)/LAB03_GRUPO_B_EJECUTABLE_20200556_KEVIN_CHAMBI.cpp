#include <iostream>
#include <tuple>
#include <time.h>
using namespace std;
//KEVIN JOAQUIN CHAMBI TAPIA | CUI:20200556

//Ejercicio 1
/*
int pow(int n){
    return n*n;
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Ingrese el numero a potenciar: ";cin>>n;
    cout<<"La potencia es: "<<pow(n);
	return 0;
}
*/
//Ejercicio 2
/*
void bisiesto(int a){
    if(a%4 == 0 && a%100 != 0 || a%400 == 0) //Condición de año bisiesto
      cout<<"El anio "<<a<<" es bisiesto"<<endl;
    else
      cout<<"El anio "<<a<<" no es bisiesto"<<endl;
}

int main(int argc, char const *argv[])
{
    int a;
    cout<<"Ingrese el anio: ";cin>>a;
    bisiesto(a);
	return 0;
}
*/
//Ejercicio 3
/*
auto hoy(){
    time_t current_time;
    struct tm  local_time;

    time ( &current_time );
    localtime_s(&local_time, &current_time);

    int Year   = local_time.tm_year + 1900;
    int Month  = local_time.tm_mon + 1;
    int Day    = local_time.tm_mday;
    return make_tuple(Year,Month,Day);
}

auto nac(){
    int a,m,d;
    cout<<"Anio de nac: ";cin>>a;
    cout<<"Mes de nac: ";cin>>m;
    cout<<"Dia de nac: ";cin>>d;
    return make_tuple(a,m,d);
}

void edad(int year,int month, int day, int aNac, int mNac, int dNac){
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

    cout<<"Tu edad es: ("<<year-aNac<<" anios,"<<month-mNac<<" meses,"<<day-dNac<<" dias)";
}

int main(int argc, char const *argv[])
{
    auto [Year,Month,Day]=hoy();
    auto [a,m,d]=nac();
    edad(Year,Month,Day,a,m,d);
	return 0;
}
*/
//Ejercicio 4
/*
bool primo(int numero) {
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
  return true;
}

void primoAx(int x){
    cout<<"Los primos de 1 a "<<x<<" son: \n";
    for (int i=1;i<=x;i++)
    {
        if(primo(i)) cout<<i<<" ";
    }
}

int main(int argc, char const *argv[])
{
    int x;
    cout<<"Ingrese el numero: ";cin>>x;
    primoAx(x);
	return 0;
}
*/
//Ejercicio 5
/*
bool verif(int n){
    return(n>0&&n<100);
}

int input(){
    int n;
    while(!verif(n)){
        cout<<"Igrese el n: ";cin>>n;
    }
    return n;
}

bool par(int n){
    return(n%2==0);
}

int sumaI(int n){
    int s{0};
    for (int i=1;i<n;i+=2)
    {
        s+=i;
    }
    return s;
}

void doAll(){
    int a=input();
    if(par(a)) cout<<a<<" es par\n";
    cout<<"La suma de impares de 0 a "<<a<<" es: "<<sumaI(a);
}

int main(int argc, char const *argv[])
{
    doAll();
	return 0;
}
*/
