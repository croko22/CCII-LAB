#include <iostream>
using namespace std;

template <class P, class Q,class R> P menor(P x,Q y,R z);
template <class P, class Q,class R> P mayor(P x,Q y,R z);

int main()
{
	int i1 = -323,i3=32;
	float f2=21.2;
	double d1=2.2222;

	cout<<"---Diferentes tipos---"<<endl;
	cout <<"Mayor de ("<<i3<<","<<f2<<","<<i1<<"): "<< mayor(i3,f2,i1)<<endl;
	cout <<"Menor de ("<<i3<<","<<f2<<","<<i1<<"): "<< menor(i3,f2,i1)<<endl;
	cout <<"Mayor de ("<<i3<<","<<f2<<","<<d1<<"): "<< mayor(i3,f2,d1)<<endl;
	return 0;
}

template <class P, class Q,class R>
P menor(P x,Q y,R z){
	return x < y ? (x < z ? x : z) : (y < z ? y : z);
}

template <class P, class Q,class R>
P mayor(P x,Q y,R z){
	return x > y ? (x > z ? x : z) : (y > z ? y : z);
}