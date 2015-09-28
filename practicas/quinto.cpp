#include <bits/stdc++.h>
using namespace std;
int main(){
   double arr[7];
   cout<<"Introduza 7 valores decimales"<<endl;
   for(int i=0;i<7;i++)cin>>arr[i];
   double m=arr[0];
   double n=arr[0];
   for(int i=1;i<7;i++){
      if(arr[i]>m)m=arr[i];
      if(arr[i]<n)n=arr[i];
   }
   cout<<"El menor es "<<n<<endl;
   cout<<"El mayor es "<<m<<endl;
   return 0;
}
