#include "NODO.h"

int NODO::GetValue()
{
	return 0;
}

NODO* NODO::GetNext()
{
	return nullptr;
}

void NODO::SetValue(int _value)
{
}

void NODO::SetNext(NODO* _next)
{
}

NODO::NODO()
{
}

NODO::NODO(int _value, NODO* _nextNodo) : value(_value), nextNodo(_nextNodo)
{

}
