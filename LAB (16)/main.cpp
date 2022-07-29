#include <iostream>
#include <string>

#include "Windows.h"
#include "Mac.h"
#include "Linux.h"

#include "GUI.h"

//CLIENTE (Application)
void Application(const GUIFactory& f, int os) {
	const WinFactory* producto_a = f.CrearControlW();
	const MacFactory* producto_b = f.CrearControlM();
	const LinuxFactory* producto_c= f.CrearControlL();

	if (os == 1) std::cout << producto_a->Draw() << "\n";
	
	if (os == 2) std::cout << producto_b->Draw() << "\n";
	
	if (os == 3) std::cout << producto_c->Draw() << "\n";
	
	delete producto_a;
	delete producto_b;
	delete producto_c;
}
int main() {
	std::cout << "Cliente: Windows "<<std::endl;
	Button* f1 = new Button();
	Application(*f1, 1); // 1 - Windows
	delete f1;
	std::cout << std::endl;
	std::cout << "Cliente: Mac "<<std::endl;
	Button* f2 = new Button();
	Application(*f2, 2); // 2 - Mac
	delete f2;
	std::cout << std::endl;
	std::cout << "Cliente: Linux " << std::endl;
	CheckBox* f3 = new CheckBox();
	Application(*f3, 3); // 3 - Linux
	delete f3;
	return 0;
}