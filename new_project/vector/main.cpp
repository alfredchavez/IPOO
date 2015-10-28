// main.cpp : main project file.

#include "vec.h"
#include <iostream>

using namespace std;

int main()
{
	double a,b,c,d;
	cout<<"Ingrese las coordenadas del punto de inicio"<<endl;
	cin>>a>>b;
	cout<<"Ingrese las coordenadas del punto final"<<endl;
	cin>>c>>d;
	Vector Vector1(a,b,c,d);
	double n=Vector1.Distance();
	cout<<n<<endl;
	system("pause");
	return 0;
}
