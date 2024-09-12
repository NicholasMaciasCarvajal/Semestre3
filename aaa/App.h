#pragma once
#include "Lista.h"

class App
{
	Lista<int> lista = Lista<int>();
	void PushValue();

public:
	void Init();
	void MainMenu();

	App();
	~App();

};

