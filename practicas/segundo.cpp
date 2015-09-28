#include <bits/stdc++.h>
using namespace std;
int main(){
   int a=0,b=1,c;
   int acum=0; 
   while(c<4000000){
      c=a+b;
      a=b;
      b=c;
      if(!(c&1) && c<4000000)acum+=c;
   }
   cout<<acum<<endl;
   return 0;
}
