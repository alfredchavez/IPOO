#include <bits/stdc++.h>
using namespace std;
int menu(){
   string logo[7];
   ifstream mapa("logo.txt");
   string s;
   int j=0;
   if(mapa.is_open()){
      while(j<7){
	 getline(mapa,s);
	 logo[j]=s;
	 j++;
      }
      mapa.close();
   }
   system("clear");
   for(int i=0;i<7;i++){
   cout<<logo[i]<<endl;
   }
   cout<<"Ingrese la opcion deseada"<<endl;
   cout<<"1. Empezar a jugar"<<endl;
   cout<<"2. Salir (aprete Ctrl + c)"<<endl;
   cout<<"3. Creditos"<<endl;
   int number;
   cin>>number;
   if(number==1){return 1;}
   else if(number==2){return 2;}
   else if(number==3){return 3;}
   else{menu();}
}
