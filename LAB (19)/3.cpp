#include <iostream>
#include <vector>
#include <random>
using namespace std;
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> rand_int(0, 9);

class Elementos {
public:
	void operator()(int &a,int &b) {
		if (a > b) swap(b, a);
	}
};

int main()
{
	int a, b;
	Elementos e;
	for (int i = 20; i; i--) {
		a = rand_int(gen); b = rand_int(gen);
		cout << "Par actual:\t" << a << " " << b << endl;
		e(a,b);
		cout << "Par modificado:\t" << a << " " << b << endl;
	}
	return 0;
}