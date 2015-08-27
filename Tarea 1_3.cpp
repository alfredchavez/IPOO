//En este prroblema nos piden la suma de los elementos de un arreglo
//Solucionaremos el problema con un do...while
#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n; //El usuario ingresa el numero de elementos del arreglo
   int arr[n];
   int sum=0;
   for(int i=0;i<n;i++){
      cin>>arr[i];     //El usuario ingresa los datos del arreglo
   }
   int i=0;
   do{
      sum+=arr[i];
      i++;
   }
   while(i<n);
   cout<<sum<<endl;   //Mostrara la suma de los elementos
   return 0;
}
