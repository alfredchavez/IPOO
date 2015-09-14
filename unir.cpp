#include <bits/stdc++.h>
using namespace std;

int main(){
   char arr[10];
   char arr1[10];
   for(int i=0;i<10;i++){cin>>arr[i];}
   for(int i=0;i<10;i++){cin>>arr1[i];}
   char arrr[20];
   for(int i=0;i<20;i++){
      if(i<10)arrr[i]=arr[i];
      else {arrr[i]=arr1[i-10];}
   }
   for(int i=0;i<20;i++){
      cout<<arrr[i]<<' ';
   }
   cout<<endl;
   return 0;
}
