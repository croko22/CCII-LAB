#include <iostream>
using namespace std;
template <int N>
struct Fibonacci
{
	enum { value = Fibonacci <N - 1>::value + Fibonacci <N - 2>::value };
};
template <>
struct Fibonacci <1>
{
	enum { value = 1 };
};
template <>
struct Fibonacci <0>
{
	enum { value = 0 };
};
int main()
{
	int x = Fibonacci<8>::value;
	cout << x << endl; //21
	return 0;
}