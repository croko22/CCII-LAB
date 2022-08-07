#include <iostream>
using namespace std;
template <int N,int P>
struct Potencia
{
	enum { value = N * Potencia <N,P - 1>::value };
};
template <int N>
struct Potencia <N,0>
{
	enum { value = 1 };
};
int main()
{
	int x = Potencia<5,3>::value;
	cout << x << endl; //125
	return 0;
}