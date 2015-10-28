#include <iostream>
#include <math.h>
#include "punto.h"
using namespace std;
class Vector{
private:
	Point punto1;
	Point punto2;
public:
	Vector(){}
	Vector(double a,double b,double c,double d){
		punto1.setx(a);
		punto1.sety(b);
		punto2.setx(c);
		punto2.sety(d);
	}
	double Distance(){
		double a=punto1.getx();
		double b=punto1.gety();
		double c=punto2.getx();
		double d=punto2.gety();
		double dis=sqrt(pow(a-c,2)+pow(b-d,2));
		return dis;
	}
};
