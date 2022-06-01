#include <iostream>
#include "User.h"
using namespace std;

int main()
{
	User <char,string> correo0('c', "string"); 
	User <char,string> correo1('k', "chambit"); 
	User <char,string> correo2('d', "redasf"); 
	User <char,string> correo3('f', "chavezz"); 
	User <char,string> correo4('a', "wallacep");
	cout<<correo0.getX()<<" + "<<correo0.getY()<<" = "<<correo0.correo()<<endl;
	cout<<correo1.getX()<<" + "<<correo1.getY()<<" = "<<correo1.correo()<<endl;
	cout<<correo2.getX()<<" + "<<correo2.getY()<<" = "<<correo2.correo()<<endl;
	cout<<correo3.getX()<<" + "<<correo3.getY()<<" = "<<correo3.correo()<<endl;
	cout<<correo4.getX()<<" + "<<correo4.getY()<<" = "<<correo4.correo()<<endl;
	return 0;
}