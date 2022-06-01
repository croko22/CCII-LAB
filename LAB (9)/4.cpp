#include <iostream>
using namespace std;

template <class P> P min(P * x, int s);
template <class P> P max(P * x, int s);

int main()
{
	int size{5};
	int ArrayEntero [size] = {10,7,2, 8, 6};
	float ArrayFloat [size] = {12.1, 8.7, 5.6, 8.4, 1.2};
	cout<<"---Array enteros: ";
	for(auto i:ArrayEntero) cout<<i<<" ";
	cout<<"\nMenor: "<<min(ArrayEntero,size)<<endl;
	cout<<"Mayor: "<<max(ArrayEntero,size)<<endl;

	cout<<"---Array flotantes: ";
	for(auto i:ArrayFloat) cout<<i<<" ";
	cout<<"\nMenor: "<<min(ArrayFloat,size)<<endl;
	cout<<"Mayor: "<<max(ArrayFloat,size)<<endl;
	return 0;
}

template <class P> P min(P * x, int s){
	P menor = x[0];
	for(int i=0; i<s; i++){
		if(x[i]<menor){menor=x[i];} 
	}
	return menor;
}
template <class P> P max(P * x, int s){
	P mayor = x[0];
	for(int i=0; i<s; i++){
		if(x[i]>mayor){mayor=x[i];} 
	}
	return mayor;
}