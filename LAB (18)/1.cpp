#include <iostream>
using namespace std;
template <int N>
struct SDigit
{
	enum { value = N%10 + SDigit <N/10 >::value };
};
template <>
struct SDigit <0>
{
	enum { value = 0 };
};
int main()
{
	int x = SDigit<12345>::value;
	cout << x << endl; //15
	return 0;
}