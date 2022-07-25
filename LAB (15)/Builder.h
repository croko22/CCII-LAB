#pragma once
#include "Carro.h"
#include <iostream>
using namespace std;
class IBuilder {
public:
	virtual ~IBuilder() {}
	virtual void ProducirPuertas(string x = "") const = 0;
	virtual void ProducirLlantas(string x = "") const = 0;
	virtual void ProducirTimon(string x = "") const = 0;
	virtual void ProducirAsientos(string x = "") const = 0;
	virtual void ProducirMotor(string x = "") const = 0;
	virtual void ProducirEspejos(string x = "") const = 0;
	virtual void ProducirVidrios(string x = "") const = 0;
};
class BuilderEspecifico : public IBuilder {
private:
	Carro* product;
public:
	BuilderEspecifico(string c = "") {
		this->Reset(c);
	}
	~BuilderEspecifico() {
		delete product;
	}
	//NUEVO CARRO
	void Reset(string c = "") {
		this->product = c.length() == 0 ? new Carro("Desconocido") : new Carro(c);
	}
	//CUSTOMS
	void ProducirPuertas(string x = "")const override {
		this->product->puertas = x.length() < 3 ? "Default" : x;
	}
	void ProducirLlantas(string x = "")const override {
		this->product->llantas = x.length() < 3 ? "Default" : x;
	}
	void ProducirTimon(string x = "")const override {
		this->product->timon = x.length() < 3 ? "Default" : x;
	}
	void ProducirAsientos(string x = "")const override {
		this->product->asientos = x.length() < 3 ? "Default" : x;
	}
	void ProducirMotor(string x = "")const override {
		this->product->motor = x.length() < 3 ? "Default" : x;
	}
	void ProducirEspejos(string x = "")const override {
		this->product->espejos = x.length() < 3 ? "Default" : x;
	}
	void ProducirVidrios(string x = "")const override {
		this->product->vidrios = x.length() < 3 ? "Default" : x;
	}
	Carro* GetProducto() {
		Carro* resultado = this->product;
		this->Reset();
		return resultado;
	}
};