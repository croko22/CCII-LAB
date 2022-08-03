#include <iostream>

//Contamos con 2 tipos de Contenedor uno de T orientado a valores numericos y uno <char>
template <typename T>
class Contenedor {
    T elemento;
public:
    Contenedor(T arg) {
        elemento = arg;
    }
    //Retorna el elmento sumado en 1
    T add() { return ++elemento; } 
};

template<>
class Contenedor<char> {
    char elemento;
public:
    Contenedor(char arg) {
        elemento = arg;
    }
    //Retorna el elemento en mayuscula
    char uppercase() {
        if (elemento >= 'a' && elemento <= 'z') elemento += 'A' - 'a';
        return elemento;
    }
};

int main(){
    //Creamos dos contenedores de ejemplo para demostrar el diferente comportamiento que tienen
    Contenedor<int> cint(5);
    Contenedor<char> cchar('t');
    std::cout << cint.add() << std::endl;
    std::cout << cchar.uppercase() << std::endl;
    return 0;
}