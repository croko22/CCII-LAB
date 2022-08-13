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
	double* d = new double(1.0);
	Punto* pt = new Punto(1.0, 2.0);
	*d = 2.0;
	(*pt).X(3.0);
	(*pt).Y(3.0);
	pt->X(3.0);
	pt->Y(3.0);
	pt->print();//Mostrar el objeto Punto 
	delete d;
	delete pt;
	return 0;
}