#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
//KEVIN JOAQUIN CHAMBI TAPIA | 20200556

//E1
/*
int main()
{
    int s{0};
    for (int i=2;i<=100;i+=2)
    {
        s+=i;
    }
    cout<<"La suma de pares de 2 al 100 es: "<<s;
    return 0;
}
*/

//E2
/*
bool primo(int numero) {
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
  return true;
}

int main()
{
    int c{50},i{0};
    //50 PRIMOS
    cout<<"Los 50 primeros numeros primos son:\n";
    while(c>0){
        i++;
        if(primo(i)){
            cout<<i<<" ";
            c--;
        }
    }
    return 0;
}
*/

//E3
/*
int main()
{
    cout<<"Multiplos de 5 entre 1 y 100\n";
    for (int i=5;i<=100;i+=5)
    {
        cout<<i<<" ";
    }
    return 0;
}
*/

//E4
/*
bool primo(int numero) {
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
  return true;
}

int main()
{
    int x,y{0}; vector<int> v{};
    cout<<"Valor x: ";cin>>x;
    while(y<x){
        cout<<"Valor y: ";cin>>y;
    }

    for (int i=x;i<=y;i++)
    {
        if(primo(i)){
            v.push_back(i);
        }
    }

    if (v.size()==0)
    {
        while(y--){
            if(primo(y)){
                cout<<"El primo mas cercano a X o Y es "<<y;
                break;
            }
        }
    } else {
        cout<<"Primos entre "<<x<<" a "<<y<<endl;
        for (auto i=v.begin();i<v.end();i++) cout<<*i<<"\n";
    }

    return 0;
}
*/

//E5
/*
int main()
{
    vector<int> v{};int n,num;
    cout<<"Cant de n: ";cin>>n;
    while(n--){
        cout<<"Numero: ";cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());

    cout<<"Mayor:"<<v.back()<<endl;
    cout<<"Menor:"<<v.front()<<endl;
    cout<<"Media: "<<accumulate(v.begin(),v.end(),0)/v.size();
    return 0;
}
*/

//E6
/*
int main()
{
    int n{},a=0,b=1,c{}; cout<<"Fibonacci: ";cin>>n;
    if(n==1){
        cout<<0<<endl;
    }

    cout<<a<<" "<<b;

    for (int i=3;i<=n;i++)
    {
        c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }

    return 0;
}
*/

//E7
/*
int main()
{
    int n,nota,sum;
    cout<<"Cant de alumnos: ";cin>>n;
    while(n--){
        sum=0;
        for (int i=0;i<3;i++)
        {
            cout<<"Nota "<<i+1<<": ";cin>>nota;
            sum+=nota;
        }
        cout<<"Promedio: "<<sum/3<<endl;
    }
    return 0;
}
*/

//E8
/*
int main()
{
    int n{};
    cout<<"Tabla de mult del: "; cin>>n;
    for (int i=1;i<=12;i++)
    {
        cout<<i<<"x"<<n<<"="<<i*n<<endl;
    }
    return 0;
}
*/

//E9
/*
int main()
{
    int n{};
    cout<<"Altura del triangulo: "; cin>>n;
    for (int j=1;j<=n;j++)
    {
        cout<<string(j, '*')<<endl;
    }
    return 0;
}
*/

//E10
/*
int main()
{
    string palabra;
    cout<<"Ingrese la palabra: ";cin>>palabra;
    reverse(palabra.begin(),palabra.end());
    for(char letra:palabra){
        cout<<letra<<"\n";
    }
    return 0;
}
*/
