#include <iostream>

using namespace std;
//KEVIN JOAQUIN CHAMBI TAPIA | CUI:20200556
//1 2 3 4 8 9 5 6 7
//Ejercicio 6
int main(int argc, char const *argv[])
{
	int arr[3][3],s,sMayor;
	for (int j=0;j<3;j++)
	{
	    for (int i=0;i<3;i++)
	    {
	        cin>>arr[j][i];
	    }
	}
	cout<<"Del array: "<<endl;
	for (int j=0;j<3;j++)
	{
	    for (int i=0;i<3;i++)
	    {
	        cout<<arr[j][i]<<" ";
	    }
	    cout<<endl;
	}

	for (int j=0;j<3;j++)
	{
	    s=0;
	    for (int i=0;i<3;i++)
	    {
	        s+=arr[j][i];
	    }
	    cout<<"Fila "<<j+1<<": "<<s<<endl;
	    if(s>sMayor) sMayor=j+1;
	}
	cout<<"El numero de fila con mayor suma es:"<<sMayor;
	return 0;
}
