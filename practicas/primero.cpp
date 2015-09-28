#include <bits/stdc++.h>
using namespace std;
int main(){
   cout<<"Introduzca ocho valores: "<<endl;
   int arr[8];
   for(int i=0;i<8;i++)cin>>arr[i];
   for(int i=0;i<4;i++){
      swap(arr[i],arr[8-i-1]);
   }
   cout<<"El orden inverso es: "<<endl;
   for(int i=0;i<8;i++)cout<<arr[i]<<' ';
   cout<<endl;
   return 0;
}
