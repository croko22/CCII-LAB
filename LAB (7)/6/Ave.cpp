#include "Ave.h"
//Ave.cpp
Ave::Ave(){}
Ave::~Ave(){}
void Ave::volar(){
	if(vuela) cout<<nombre<<" esta volando."<<endl;
	else cout<<nombre<<" no puede volar."<<endl;
}