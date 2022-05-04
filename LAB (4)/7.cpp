#include <iostream>

using namespace std;
//KEVIN JOAQUIN CHAMBI TAPIA | CUI:20200556

//Ejercicio 7
void cIzq(int Ma[3][3],int n,int fi,int co){
    int tV{};
    if(n-1>=0){
        for (int i=0;i<3;i++)
        {
            swap(Ma[i][n-1],Ma[i][n]);
        }
    } else cout<<"La fila exede el indice permitido"<<endl;
}

void cDer(int Ma[3][3],int n,int fi,int co){
    int tV{};
    if(n+1<3){
        for (int i=0;i<3;i++)
        {
            swap(Ma[i][n],Ma[i][n+1]);
        }
    } else cout<<"La fila exede el indice permitido"<<endl;
}

void fArriba(int Ma[3][3],int n,int fi,int co){
    int tV{};
    if(n-1>=0){
        swap(Ma[n-1],Ma[n]);
    } else cout<<"La fila exede el indice permitido"<<endl;
}

void fAbajo(int Ma[3][3],int n,int fi,int co){
    int tV{};
    if(n+1<3){
        swap(Ma[n],Ma[n+1]);
    } else cout<<"La fila exede el indice permitido"<<endl;
}

void mostrar(int Ma[][3],int fi,int co)
{
    for(int i=0; i<fi; i++)
    {
        for(int j=0; j<co; j++)
        {
            cout<<Ma[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}},s,n;
	mostrar(arr,3,3);

	cout<<"1 Columna izq\n2 Columna der\n3 Fila Arriba\n4 Fila abajo\nElija una op: ";cin>>s;
	switch (s)
	{
	case 1:
	    cout<<"N de columna a cambiar: ";cin>>n;
	    cIzq(arr,n,3,3);
        cout<<"Izq:"<<endl;
        mostrar(arr,3,3);
        break;
	case 2:
	    cout<<"N de columna a cambiar: ";cin>>n;
	    cDer(arr,n,3,3);
        cout<<"Der:"<<endl;
        mostrar(arr,3,3);
        break;
    case 3:
	    cout<<"N de fila a cambiar: ";cin>>n;
	    fArriba(arr,n,3,3);
        cout<<"Arriba:"<<endl;
        mostrar(arr,3,3);
        break;
    case 4:
	    cout<<"N de fila a cambiar: ";cin>>n;
	    fAbajo(arr,n,3,3);
        cout<<"Abajo:"<<endl;
        mostrar(arr,3,3);
        break;
	default:
	    break;
	}

	return 0;
}
