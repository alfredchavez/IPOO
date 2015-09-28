#include <bits/stdc++.h>
using namespace std;
int main(){
   cout<<"Ingrese el numero a buscar(menor a 1001)"<<endl;
   int n;
   cin>>n;
   int arr[100][100];
   vector<int>vec;
   int i,j;
   for(i=0;i<100;i++){
      for(j=0;j<100;j++){
	 *(*(arr + i) + j)=rand() % 1001;
	 if(*(*(arr+i)+j)==n){vec.push_back(i);vec.push_back(j);}
      }
   }
   cout<<"El numero se encuentra en las posiciones(contando desde 0)"<<endl;
   if(vec.empty()){cout<<"No se encuentra el valor"<<endl;return 0;}
   for(int i=0;i<vec.size()-1;i++){
      cout<<vec[i]<<','<<vec[i+1]<<"   ";
   }
   cout<<endl;
   return 0;
}
