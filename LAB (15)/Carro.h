#pragma once
#include <iostream>
using namespace std;

class Carro {
public:
	string modelo; //Identificador del carro
	string puertas, llantas, timon, asientos, motor, espejos, vidrios; //Caracteristicas

	Carro(string _modelo) : modelo(_modelo) {};
	void ListaComp()const {
		cout << modelo << endl;
		cout << "Componentes : " << endl;
		cout << "- Puertas: " << puertas << endl;
		cout << "- Llantas: " << llantas << endl;
		cout << "- Timon: " << timon << endl;
		cout << "- Asientos: " << asientos << endl;
		cout << "- Motor: " << motor << endl;
		cout << "- Espejos: " << espejos << endl;
		cout << "- Vidrios: " << vidrios << endl;
		cout << "\n\n";
	}
};