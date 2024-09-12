#pragma once
#include "NODO.h"

class Lista
{
private: 
	NODO* Root;
	NODO* Lista;

public:
	void SetRoot(NODO*, int _input);
	void Push();
	void Clear();
	void Read();

};

