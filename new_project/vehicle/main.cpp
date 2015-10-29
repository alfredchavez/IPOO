#include "car.h"
#include "trcuk.h"
#include <iostream>
using namespace std;

int main(){
	Car c("VANITY",2003)
	Vehicle *vPtr = &c;
	cout<< vPtr->getDesc();
}
