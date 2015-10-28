#include <iostream>
using namespace std;

class Point{
private:
	double _x,_y;
public:
	Point(){_x=0;_y=0;}
	Point(double x,double y){
		_x=x;
		_y=y;
	}
	double getx(){
		return _x;
	}
	double gety(){
		return _y;
	}
	void setx(double x){
		_x=x;
		return;
	}
	void sety(double y){
		_y=y;
		return;
	}
};
