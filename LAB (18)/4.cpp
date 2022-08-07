#include <iostream>
#include <sstream>
using namespace std;
//Inspirado en la recursiva
string convertHex(int num, ostringstream& ss){
	if (num == 0){ss << 0;return ss.str();}

	convertHex(num / 16, ss);

	int x = num % 16;

	switch (x){
	case 10: ss << "A";  break;
	case 11: ss << "B";  break;
	case 12: ss << "C";  break;
	case 13: ss << "D";  break;
	case 14: ss << "E";  break;
	case 15: ss << "F";  break;
	default: ss << x;    break;
	}
	return ss.str();
}

/*
//Intento de implementacion
template <int N, ostringstream& S> struct DecToHex
{
	enum { S << N%16 << DecToHex <N/16,S>::S };
};
template <ostringstream& S> struct DecToHex <10, S> { enum { S << "A" }; };
template <ostringstream& S> struct DecToHex <11, S> { enum { S << "B" }; };
template <ostringstream& S> struct DecToHex <12, S> { enum { S << "C" }; };
template <ostringstream& S> struct DecToHex <13, S> { enum { S << "D" }; };
template <ostringstream& S> struct DecToHex <14, S> { enum { S << "E" }; };
template <ostringstream& S> struct DecToHex <15, S> { enum { S << "F" }; };
template <ostringstream& S> struct DecToHex <0, S>{enum { S << "" };};
*/
int main()
{
	ostringstream ss;
	//ostringstream x = DecToHex<5,ss>::S;//Error constant
	cout << "42 a hexadecimal es " << convertHex(42, ss) << endl; //2A
	return 0;
}