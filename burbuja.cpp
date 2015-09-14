#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
   for(int i=0;i<n;i++){
      for(int j=0;j<n-1;j++){
         if(arr[j]>arr[j+1]){
            int tmp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=tmp;
         }
      }
   }
   return;
}

int main(){
   int arr[10];
   for(int i=0;i<10;i++){
      cin>>arr[i];
   }
   bubble_sort(arr,10);
   for(int i=0;i<10;i++){
      cout<<arr[i]<<' ';
   }
   cout<<endl;
   return 0;
}
