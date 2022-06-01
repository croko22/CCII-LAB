#include <iostream>
#include <algorithm>
using namespace std;

template <class P> void oAsc(P * x, int s);
template <class P> void oDesc(P * x, int s);

int main()
{
	int size{5};
	int ArrayEntero [size] = {5,7,2,8,6,1,3,4,9};
	float ArrayFloat [size] = {10.1, 8.4, 3.6, 4.4, 11.2};	
	char ArrayChar[size]= {'f', 'g', 'v', 'b', 'a'};

	cout<<"-Array enteros: ";
	for(auto i:ArrayEntero) cout<<i<<" ";
	oAsc(ArrayEntero,size);
	cout<<"\n-Array enteros ordenado asc: ";
	for(auto i:ArrayEntero) cout<<i<<" ";
	oDesc(ArrayEntero,size);
	cout<<"\n-Array enteros ordenado desc: ";
	for(auto i:ArrayEntero) cout<<i<<" ";

	cout<<"--------------------------------"<<endl;

	cout<<"-Array flotantes: ";
	for(auto i:ArrayFloat) cout<<i<<" ";
	oAsc(ArrayFloat,size);
	cout<<"\n-Array enteros ordenado asc: ";
	for(auto i:ArrayFloat) cout<<i<<" ";
	oDesc(ArrayFloat,size);
	cout<<"\n-Array enteros ordenado desc: ";
	for(auto i:ArrayFloat) cout<<i<<" ";

	cout<<"--------------------------------"<<endl;

	cout<<"-Array chars: ";
	for(auto i:ArrayChar) cout<<i<<" ";
	oAsc(ArrayChar,size);
	cout<<"\n-Array enteros ordenado asc: ";
	for(auto i:ArrayChar) cout<<i<<" ";
	oDesc(ArrayChar,size);
	cout<<"\n-Array enteros ordenado desc: ";
	for(auto i:ArrayChar) cout<<i<<" ";

	return 0;
}

template <class P> void oAsc(P * x, int s){
	;/* //Metodo 'usual'
	for (int i=0; i<s-1; i++)
    {
        for (int j=i+1; j<s; j++)
            {
                if(x[i]>x[j])
                {
                    P item;
                    item=x[i];
                    x[i]=x[j];
                    x[j]=item;
                }
            }
    }
    */
	sort(x, x + s);
}
template <class P> void oDesc(P * x, int s){
	 sort(x, x + s, greater<P>());
}