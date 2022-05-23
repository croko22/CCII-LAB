#include "Forma.h"
#include <utility>
using namespace std;
Forma::Forma()
{
    color = "none";
    cord = make_pair(0,0);
    nombre="forma";
}

Forma::~Forma(){}
void Forma::imprimir(){
    cout<<"La forma "<<nombre<<" de color "<<color<<" su punto centro se encuentra en "<<cord.first<<","<<cord.second<<endl;
}
double Forma::area(){
    return 0;
}