#include <iostream>
#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
//KEVIN JOAQUIN CHAMBI TAPIA | CUI:20200556

//Ejercicio 1
/*
int main(int argc, char const *argv[])
{
    int a{1},b{2},*p_a=&a,*p_b=&b;

    cout<<"Val a:"<<a<<endl;
    cout<<"Val b:"<<b<<endl;
    int temp=*p_a;
    *p_a=*p_b;
    *p_b=temp;
    cout<<"INTERCAMBIO"<<endl;
    cout<<"Val a:"<<a<<endl;
    cout<<"Val b:"<<b<<endl;

	return 0;
}
*/
//Ejercicio 2
/*
void Rllenar(float *Ma, int n){
    srand(time(NULL));
    for(int i=0; i<n;i++)
            Ma[i]=rand() / static_cast<float>(RAND_MAX);
}
float pPunto(float *Ma1,float *Ma2, int n){
    float p{0};
    for(int i=0; i<n;i++) p+=Ma1[i]* Ma2[i];
    return p;
}
void mostrar(float *Ma, int n){
    for(int i=0; i<n;i++){
        cout<<Ma[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    int n{3};
    //cout<<"Tamano de la vector: ";cin>>n;

    for (int i=0;i<1000000;i++)
    {
    float *vector1=new float [n];
	float *vector2=new float [n];

	Rllenar(vector1, n);
	cout<<"Vector 1: ";
	mostrar(vector1, n);
    sleep(1); //Para que no sean identicos
	Rllenar(vector2, n);
	cout<<"Vector 2: ";
	mostrar(vector2, n);

	cout<<"Producto punto: "<<pPunto(vector1,vector2,n)<<endl;

	delete [] vector1;
	delete [] vector2;
    }

    return 0;
}
*/
//Ejercicio 3
/*
class Nodo
{
    public:
    int data;
    Nodo *next;
};

void insertar(Nodo **head_ref, int new_data)
{
    Nodo* new_Nodo = new Nodo(); //Posible nuevo nodo
    Nodo *last = *head_ref; //Nodo de recorrido

    new_Nodo->data = new_data;
    //Apertura a nuevas conexiones
    new_Nodo->next = NULL;

    //Condicion para inciar nueva lista
    if (*head_ref == NULL)
    {
        *head_ref = new_Nodo;
        return;
    }
    //Recorrer la lista
    while (last->next != NULL)
    {
        last = last->next;
    }
    //Condicion para que sea creciente
    if(new_data>last->data){
        last->next = new_Nodo;
        return;
    } else {
        delete new_Nodo; return;
    }
}

void eliminar(Nodo** head_ref, int key)
{
    Nodo* temp = *head_ref;
    Nodo* prev = NULL;

    // Si esta al inicio
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }
    else //Recorrer
    {
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // Si no hay ocurrencias
    if (temp == NULL)
        return;
    //Desconectar y borrar
    prev->next = temp->next;
    delete temp;
    }
}

void mostrarLista(Nodo *Nodo)
{
    while (Nodo != NULL)
    {
        cout<<" "<<Nodo->data;
        Nodo = Nodo->next;
    }
}

int main()
{
    srand(time(NULL)); //Ramdom para testear
    Nodo* head = NULL; //Cabeza de la lista

    for (int i=0;i<=10000;i++)
    {
        insertar(&head,rand());
        if(i%100==0) eliminar(&head,rand());
    }

    cout<<"Los numeros generados son: ";
    mostrarLista(head);

    delete head;
    return 0;
}
*/
//Ejercicio 4
/*
class Nodo
{
    public:
    pair<string, double> data;
    Nodo *next;
};

void insertar(Nodo **head_ref, pair<string, double> new_data)
{
    Nodo* new_Nodo = new Nodo(); //Posible nuevo nodo
    Nodo *last = *head_ref; //Nodo de recorrido

    new_Nodo->data.first = new_data.first;
    new_Nodo->data.second = new_data.second;
    //Apertura a nuevas conexiones
    new_Nodo->next = NULL;

    //Condicion para inciar nueva lista
    if (*head_ref == NULL)
    {
        *head_ref = new_Nodo;
        return;
    }
    //Recorrer la lista
    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_Nodo;
    return;
    delete new_Nodo;
}
void buscarStr(Nodo* head, string x)
{
    bool s{false};
    Nodo* current = head;
    while (current != NULL)
    {
        if (current->data.first == x)
            s=true;
        current = current->next;

    }
    if(s) cout<<"El elemento: "<<x<<"\nSi se encuentra en la lista, es de tipo string"<<endl;

}
void buscarDouble(Nodo* head, double x)
{
    bool s{false};
    Nodo* current = head;
    while (current != NULL)
    {
        if (current->data.second == x)
            s=true;
        current = current->next;

    }
    if(s) cout<<"El elemento: "<<x<<"\nSi se encuentra en la lista, es de tipo double"<<endl;
}
void mostrarLista(Nodo *node)
{
    pair<string, double> data;
    while (node != NULL)
    {
        data=node->data;
        cout<<"\n"<<data.first<<"-"<<data.second;
        node = node->next;
    }
    cout<<endl;
}

int main()
{
    Nodo* head = NULL;
    //Lista de prueba
    pair<string, double> a1("cero",13);
    pair<string, double> a2("dos",2);
    pair<string, double> a3("uno",1);

    insertar(&head,a1);
    insertar(&head,a2);
    insertar(&head,a3);

    cout<<"Los elementos de la lista son: ";
    mostrarLista(head);
    cout<<endl;
    //Busquedas de prueba
    buscarDouble(head,1);
    buscarStr(head,"dos");
    buscarDouble(head,111);

    delete head;
    return 0;
}
*/
//Ejercicio 5
/*
void concatenar(char *c1, char *c2)
{
    while(*c2)
    {
        c2++;
    }
    while(*c1)
    {
        *c2=*c1;
        c2++;
        c1++;
    }
}
int main(int argc, char const *argv[])
{
    char str1[20],str2[20];
    cin.getline(str1,20);
    cin.getline(str2,20);
    concatenar(str1,str2);

    cout<<str2<<endl;
    return 0;
}
*/
//Ejercicio 6
/*
void sumar(int a,int b)
{
cout<<a<<"+"<<b<<"="<<a+b<<endl;
}
void restar(int a,int b)
{
cout<<a<<"-"<<b<<"="<<a-b<<endl;
}
void mult(int a,int b){
    cout<<a<<"*"<<b<<"="<<a*b<<endl;
}
void divi(int a,int b){
    cout<<a<<"/"<<b<<"="<<a/b<<endl;
}
int main(int argc, char const *argv[])
{
    void (*f[4])(int,int)={sumar,restar,mult,divi};
    int opc{},a{},b{};
    cout<<"Ingrese los numeros a operar: ";cin>>a>>b;
    cout<<"1.Sumar 2.Restar 3.Multiplicar 4.Dividir\nIntroduzca una opcion: "<<endl;
    cin>>opc;
    while(opc>=1 && opc<=4)
    {
        (*f[opc-1])(a,b);
        cout<<"1.Sumar 2.Restar 3.Multiplicar 4.Dividir\nIntroduzca una opcion: "<<endl;
        cin>>opc;
    }
    delete [] f;
	return 0;
}
*/
