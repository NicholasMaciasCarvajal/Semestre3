#pragma once
#include <iostream>

class NODO
{
private: 
	int value;
	NODO* nextNodo;

public:
	int GetValue();
	NODO* GetNext();
	
	void SetValue(int _value);
	void SetNext(NODO* _next);

	NODO();
	NODO(int _value, NODO* _nextNodo);


};

