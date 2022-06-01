#include <iostream>
using namespace std;

template <class P, class Q> P suma(P x,Q y);
template <class P, class Q> P resta(P x,Q y);
template <class P, class Q> P multi(P x,Q y);
template <class P, class Q> P div(P x,Q y);

int main()
{
	int i1 = 3,i2 = -2;
	float f1 =2.2,f2 = 2.22;
	double d=2.32332;
	cout<<"---Mismo tipo---"<<endl;
	cout<<f1<<" + "<<f2<<" = "<<suma(f1,f2)<<endl;
	cout<<i1<<" + "<<i2<<" = "<<suma(i1,i2)<<endl;
	cout<<"---Diferentes tipos---"<<endl;
	cout<<i1<<" + "<<f1<<" = "<<suma(i1,f1)<<endl;
	cout<<f1<<" + "<<i1<<" = "<<suma(f1,i1)<<endl;
	cout<<i1<<" - "<<f1<<" = "<<resta(i1,f1)<<endl;
	cout<<f1<<" - "<<i1<<" = "<<resta(f1,i1)<<endl;
	cout<<i1<<" * "<<f1<<" = "<<multi(i1,f1)<<endl;
	cout<<f1<<" * "<<i1<<" = "<<multi(f1,i1)<<endl;
	cout<<i1<<" / "<<f1<<" = "<<div(i1,f1)<<endl;
	cout<<f1<<" / "<<i1<<" = "<<div(f1,i1)<<endl;

	return 0;
}

template <class P, class Q> P suma(P x,Q y){
	return x+y;
}
template <class P, class Q> P resta(P x,Q y){
	return x-y;
}
template <class P, class Q> P multi(P x,Q y){
	return x*y;
}
template <class P, class Q> P div(P x,Q y){
	return x/y;
}