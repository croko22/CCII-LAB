#include <iostream>
#include <vector>
#include <utility>
using namespace std;

class RLineal {
public:
	void operator()(vector<pair<float, float>> v) {
		//Variables de la ecuacion
		float sumXY{}, promX{}, promY{}, sumX2{};
		auto n{v.size()};
		for (auto i : v) {
			sumXY += i.first * i.second;
			promX += i.first;
			promY += i.second;
			sumX2 += i.first * i.first;
		}
		promX /= n;
		promY /= n;
		float a, b;
		b = (sumXY - (n * promX * promY)) / (sumX2 - (n * promX * promX));
		a = promY - (b * promX);
		cout << "El valor de a es: " << a << "\nEl valor de b es: " << b << endl;
	}
};

int main()
{
	vector<pair<float, float>> v { {1, 2}, {3, 3}, {4, 2.5} , {2, 2} , {1, 2} , {7, 3.5} };
	RLineal r;
	r(v); //1.75 y 0.25
	return 0;
}