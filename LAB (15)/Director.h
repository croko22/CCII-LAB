#pragma once
#include "Builder.h"
#include <iostream>
#include <string> //Getline
using namespace std;
class Director {
private:
	IBuilder* builder;
public:
	void set_builder(IBuilder* builder) {
		this->builder = builder;
	}
	void BuildCarro() {
		this->builder->ProducirPuertas();
		this->builder->ProducirLlantas();
		this->builder->ProducirTimon();
		this->builder->ProducirAsientos();
		this->builder->ProducirMotor();
		this->builder->ProducirEspejos();
		this->builder->ProducirVidrios();
	}
	void BuildCarroCustom() {
		string x{};
		cout << "Puertas: "; getline(cin, x); this->builder->ProducirPuertas(x);
		cout << "Llantas: "; getline(cin, x); this->builder->ProducirLlantas(x);
		cout << "Timon: "; getline(cin, x); this->builder->ProducirTimon(x);
		cout << "Asientos: "; getline(cin, x); this->builder->ProducirAsientos(x);
		cout << "Motor: "; getline(cin, x); this->builder->ProducirMotor(x);
		cout << "Espejos: "; getline(cin, x); this->builder->ProducirEspejos(x);
		cout << "Vidros: "; getline(cin, x); this->builder->ProducirVidrios(x);
		cout << "\n";
	}
};