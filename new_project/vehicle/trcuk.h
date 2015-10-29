class Truck : public Vehicle {
 string brand;
 double carga;
 public :
 Car( const string & myLicense , const int myYear , const string & mybrand )
 : Vehicle ( myLicense , myYear ), brand ( mybrand ) {}
 const string getDesc () 
 { return stringify ( year ) + ’ ’ + brand + ": " + license
;}
 const string & getBrand () { return brand ;}
 double Carga(){
 	return carga;
 }
};
