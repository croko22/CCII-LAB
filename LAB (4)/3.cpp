#include <iostream>

using namespace std;
//KEVIN JOAQUIN CHAMBI TAPIA | CUI:20200556

//Ejercicio 3
int main(int argc, char const *argv[])
{
	int arr[5][3],sum=0;
	for(int i=0; i<5;i++){
        cout<<"Fila:"<<i+1<<endl;
		for(int j=0; j<3;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Del array: "<<endl;
	for(int i=0; i<5;i++){
		for(int j = 0; j<3;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}

	for(int i=1; i<5;i+=2){
		for(int j = 0; j<3;j++){
			sum+=arr[i][j];
		}
	}
	cout<<"La suma de las filas pares es: "<<sum;

	return 0;
}
