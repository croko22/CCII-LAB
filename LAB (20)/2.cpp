#include <iostream>
#include <memory>
class Punto{
public:
	Punto(double x, double y) : x(x), y(y) {};
	void print(){
		std::cout << "(" << x << ", " << y << ")\n";
	}
	void X(double n) { x = n; }
	void Y(double n) { y = n; }
private:
	double x{}, y{};
};
int main()
{
	std::unique_ptr<double> d{ new double(1.0) };
	std::unique_ptr<Punto> pt{ new Punto(1.0, 2.0) };
	std::cout << "Valor de d inicial: "<<*d<<"\n";
	std::cout << "Punto inicial: "; pt->print();
	*d = 2.0;
	std::cout << "Valor de d cambiado: " << *d << "\n";
	(*pt).X(3.0);
	(*pt).Y(3.0);
	pt->X(3.0);
	pt->Y(3.0);
	std::cout << "Punto cambiado: "; pt->print();//Mostrar el objeto Punto 
	return 0;
}