#include <iostream>
using namespace std;
//Basado en la siguiente funcion recursiva
//size_t bin(int i) { return i < 2 ? i : 10 * bin(i / 2) + i % 2; }

template< int N > struct Bin
{
    enum { value = (N % 2) + 10 * Bin< N / 2 > ::value};
};
template <> struct Bin< 0 >
{
    enum { value = 0 };
};
int main() {
    unsigned long b = Bin<13>::value;
    cout << b << endl; //1101
    return 0;
}