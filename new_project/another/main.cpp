#include "car.h"
#include <iostream>
using namespace std;

int main(){
   	Car c("1223455",2003,"VANITY");
	Vehicle *vPtr = &c;
	cout<< vPtr->getDesc();
	return 0;
}
