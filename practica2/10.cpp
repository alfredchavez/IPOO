#include <bits/stdc++.h>
using namespace std;
int main(){
   int arr[400000];
   vector<int>vec;
   for(int i=0;i<400000;i++){
      arr[i]=rand() % 100 + 1;
   }
   int n;
   cout<<"Ingrese el numero a buscar"<<endl;
   cin>>n;
   for(int i=0;i<400000;i++){
      if(arr[i]==n)vec.push_back(i);
   }
   cout<<"El numero se encuentra en la posicion: "<<endl;
   for(int i=0;i<vec.size();i++){
      cout<<vec[i]<<endl;
   }
   return 0;
}
