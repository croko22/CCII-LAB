#pragma once
#include "ClaseMultimedia.h"
//ClaseDisco.h
class ClaseDisco: public ClaseMultimedia{
private:
	vector<string> canciones;
public:
	ClaseDisco(string,int,vector<string>);
	~ClaseDisco();
	void info();
};