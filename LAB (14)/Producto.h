#pragma once
class Producto{
    public:
    std::string codigo;
    std::string nombre;
    int precio;
    int stock;
    bool disponible;
    Producto *next;
    Producto(){};
    ~Producto(){};
    Producto(std::string _codigo, std::string _nombre,int _precio,int _stock)        
    {                    
        codigo = _codigo;
        nombre = _nombre;
        precio = _precio;
        stock = _stock;   
        disponible = true;      
    }
    void mostrar(){
        std::cout<<"Codigo: "<<codigo<<" | "<<nombre<<" con el valor de "<<precio<<" soles";
        disponible ? 
            std::cout<<", esta disponible con un stock de "<<stock<<" unidades"<<std::endl 
            : std::cout<<", no esta disponible."<<std::endl;
    }
    void modificar(){
        int op{},op1{};
        std::cout<<"1. Dar de baja | 2. Modificar\nAccion a realizar:"<<std::endl; std::cin >> op;
        if(op==1) disponible = false;
        if(op==2){
            std::cout<<"1. Nombre | 2. Precio | 3. Cantidad\nAccion a realizar:"; std::cin >> op1;
            if(op1==1){std::cout<<"Nombre:"; std::cin >> nombre;} 
            if(op1==2){std::cout<<"Precio:"; std::cin >> precio;} 
            if(op1==3){std::cout<<"Stock:"; std::cin >> stock; disponible = stock != 0;} 
        }
    }
};
