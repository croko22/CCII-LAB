#ifndef ALUMNO_H
#define ALUMNO_H

#include "Persona.h"
#include <string>
using namespace std;
class Alumno : public Persona
{
    public:
        Alumno(string,int);
        ~Alumno();
        void infoA();
};

#endif // ALUMNO_H
