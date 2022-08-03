#include <iostream>
using namespace std;

template <typename T>
class Nodo{
public:
    T data;
    Nodo* izq, * der;
    Nodo(T data) {
        this->data = data;
        this->izq = NULL;
        this->der = NULL;
    }
};
//Mostrar el arbol inorden
template <typename T>
void inorden(Nodo<T>* temp){
    if (temp == NULL) return;
    inorden(temp->izq);
    cout << temp->data << ' ';
    inorden(temp->der);
}

int main(){
    //Arbol de enteros
    Nodo<int>* a1 = new Nodo<int>(1);
    a1->izq = new Nodo<int>(2);
    a1->der = new Nodo<int>(3);
    cout << "Estructura del arbol en orden: " << endl;
    inorden(a1);

    cout << endl;

    //Arbol de strings
    Nodo<string>* a2 = new Nodo<string>("a");
    a2->izq = new Nodo<string>("b");
    a2->der = new Nodo<string>("c");
    cout << "Estructura del arbol en orden: " << endl;
    inorden(a2);

    return 0;
}
