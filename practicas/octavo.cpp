#include <bits/stdc++.h>
using namespace std;

int arr[10];

void ordenar(int *r){
   for(int j=0;j<10;j++){
        r=arr;
   	for(int i=0;i<9;i++){
      		if(*r>*(r+1)){
	 		swap(*r,*(r+1));
      		}
      	r++;
   	}
   }
   return;
}

int main(){
   int *r;
   r=arr;
   for(int i=0;i<10;i++){
      cin>>*(r+i);
   }
   ordenar(r);
   for(int i=0;i<10;i++){
      cout<<arr[i]<<' ';
   }
   cout<<endl;
   return 0;
}
