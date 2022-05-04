#include <iostream>

using namespace std;
//KEVIN JOAQUIN CHAMBI TAPIA | CUI:20200556

//Ejercicio 4
int main(int argc, char const *argv[])
{
	int c=0,x=0,arr[50];
	for (int i=1;i<=100;i++)
	{
	    c=0;
	    for (int j=1;j<=i;j++)
	    {
	        if(i%j==0) c++;
	    }
	    if(c==2||c==1||c==0){
            arr[x]=i;
            x++;
	    }
	}

	for (int i=x-1;i>=0;i--)
	{
	    cout<<arr[i]<<" ";
	}
	return 0;
}
