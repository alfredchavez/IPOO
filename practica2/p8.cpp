#include <bits/stdc++.h>
using namespace std;

void modify(char *t,int n){
   for(int i=0;i<n-1;i++){
      if(*(t+i)==' '){
	 if(*(t+i+1) > 96)
	 *(t+i+1)=char(*(t+i+1)-32);
      }
   }
}

int main(){
   string s;
   getline(cin,s);
   char *t;
   t=&s[0];
   modify(t,s.length());
   cout<<s<<endl;
}
