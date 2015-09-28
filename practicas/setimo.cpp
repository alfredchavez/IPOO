#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n){
   stringstream ss;
   ss << n;
   string a=ss.str();
   for(int i=0;i<a.length()/2;i++){
      if(a[i]!=a[a.length()-i-1])return false;
   }
   return true;
}

int main(){
   vector<int>vec;
   for(int i=999;i>=100;i--){
      for(int j=999;j>=100;j--){
	 int a=i*j;
	 if(palindrome(a)){
	    vec.push_back(a);
	 }
      }
   }
   int mayor=0;
   for(int i=0;i<vec.size();i++){
      if(vec[i]>mayor)mayor=vec[i];
   }
   cout<<mayor<<endl;
   return 0;
}
