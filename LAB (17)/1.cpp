#include <iostream>
using namespace std;

template <typename T> //Tipo de dato del resultado
class Calculadora {
public:
	Calculadora(){}
	//Permitir la operacion entre distintos tipos de datos
	template <class P, class Q> T suma(P x, Q y) {return x + y;}
	template <class P, class Q> T resta(P x, Q y) {return x - y;}
	template <class P, class Q> T multi(P x, Q y) {return x * y;}
	template <class P, class Q> T div(P x, Q y) {return x / y;}
};

int main()
{
	int i1 = 3, i2 = -2;
	float f1 = 2.2, f2 = 2.22;
	double d = 2.32332;
	Calculadora<double> c; //Se puede cambiar el tipo de dato de retorno <int,float>

	cout << "---Diferentes tipos---" << endl;
	cout << i1 << " + " << f1 << " = " << c.suma(i1, f1) << endl;
	cout << f1 << " + " << i1 << " = " << c.suma(f1, i1) << endl;
	cout << i1 << " - " << f1 << " = " << c.resta(i1, f1) << endl;
	cout << f1 << " - " << i1 << " = " << c.resta(f1, i1) << endl;
	cout << i1 << " * " << f1 << " = " << c.multi(i1, f1) << endl;
	cout << f1 << " * " << i1 << " = " << c.multi(f1, i1) << endl;
	cout << i1 << " / " << f1 << " = " << c.div(i1, f1) << endl;
	cout << f1 << " / " << i1 << " = " << c.div(f1, i1) << endl;
	
	return 0;
}