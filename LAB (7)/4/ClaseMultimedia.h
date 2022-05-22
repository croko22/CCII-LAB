#pragma once
//ClaseMultimedia.h
class ClaseMultimedia{
protected:
	string nombre;
	int duracionMin;
public:
	ClaseMultimedia();
	~ClaseMultimedia();
	void setNombre(string n){nombre=n;}
	void setDuracionMin(int x){duracionMin=x;}
	void reproducir();
};