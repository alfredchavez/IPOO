#include <bits/stdc++.h>
using namespace std;

void incremento(int &a){
   a+=1;
   cout<<"a en incremento :"<<a<<endl;
   return;
}

int main(){
   int a;
   cin>>a;
   incremento(a);
   cout<<"a en main :"<<a<<endl;
   return 0;
}
