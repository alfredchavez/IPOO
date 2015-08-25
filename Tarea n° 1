// El problema pide el maximo numero en un arreglo y su posicion

#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"Escribe el numero de elementos del arreglo"<<endl;
  cin>>n;                 //El usuario nos da el numero de elementos
  int arr[n];
  cout<<"Escribe los elementos del arreglo"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];          //El usuario nos da los elementos
  }
  int maxi=arr[0];
  int pos=0;
  for(int i=0;i<n;i++){   //Busco el mayor numero
    if(arr[i]>maxi){
      maxi=arr[i];
      pos=i;
    }
  }
  cout<<"El maximo numero es: "<<maxi<<' '<<"y su posicion es: "<<pos+1<<endl;  // Muestra el maximo numero y su posicion contando desde 1.
  return 0;
}
