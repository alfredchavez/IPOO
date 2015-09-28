#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ll n=2520;
   while(true){
      int c=0;
      for(int i=2;i<=20;i++){
	 if(n%i==0){c++;}
	 else{break;}
      }
      if(c==19){cout<<n<<endl;break;}
      n+=20;
   }
   return 0;
}
