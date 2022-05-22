#pragma once
//operacionBase.h
class operacionBase{
protected: 
	int operador;
public:
	operacionBase();
	~operacionBase();
	void setOperador(int _operador) { operador = _operador;}
	int getOperador() { return operador; }
};