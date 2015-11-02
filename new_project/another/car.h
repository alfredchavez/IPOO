//Header file : car.h
#include "vehicle.h"
using namespace std;
class Car : public Vehicle{
   	string style;
   public:
	Car(const string &myLicense, const int myYear, const string &myStyle)
	   : Vehicle(myLicense, myYear), style(myStyle){}
	const string &getStyle() {return style;}
	const string &getLicense() const{
	   return license;
	}
	const int getYear() const{
		return year;
	}
	const string getDesc()const
		{return style;
		}
};
