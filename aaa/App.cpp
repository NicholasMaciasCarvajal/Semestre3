#include "App.h"
#include <string>

void App::PushValue() {

}

void App::Init() {
	MainMenu();
}

void App::MainMenu() {
	std::string input;
	while (input != "x") {
		std::cout << "Seleciona una de las opciones "
			"\nPara insertar nuevo (1)"
			"\nPara salir (x)";
	}
	std::cin >> input;
	if (input == "1") {
		PushValue();
	}
	else{}

}