//Header File : Vehicle.h
#include <iostream>
#include <string>
#include "stringify.h"
using namespace std;
class Vehicle {
   protected:
      string license;
      int year;
   public:
      Vehicle (const string &myLicense, const int myYear)
	 : license(myLicense), year(myYear){}
      virtual const string getDesc()=0;
      virtual const string &getLicense()=0;
      virtual const int getYear()=0;
};
