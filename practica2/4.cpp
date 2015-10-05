#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ull factorial(ull a){
   ull r=1;
   for(ull i=1;i<=a;i++){
      r*=i;
   }
   return r;
}

int main(){
   ull a;
   cout<<"Ingrese el numero a calcular el factorial"<<endl;
   cin>>a;
   ull n=factorial(a);
   cout<<n<<endl;
   return 0;
}
