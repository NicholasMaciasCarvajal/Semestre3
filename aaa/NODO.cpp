#include "NODO.h"

int NODO::GetValue(int x)
{
	NODO* TempNodo = Root;
	if (Root) {
		For(int i = 0; i < x; x++) {
			if (i == x && TempNodo) {
				return TempNodo->GetValue();
			}
			TempNodo = TempNodo -> GetNext();
		}
	}

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
