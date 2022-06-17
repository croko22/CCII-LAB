#pragma once
class Nodo
{
public:
	int data;
	Nodo *next;
	Nodo(){};
	~Nodo(){};
	Nodo(int value)        
	{                    
		data = value;     
		next = NULL;     
	}
};
