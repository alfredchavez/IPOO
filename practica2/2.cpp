#include <bits/stdc++.h>
using namespace std;

string no_repetitions(string s){
   vector<char>vec(s.length());
   for(int i=0;i<s.length();i++){
      vec[i]=s[i];
   }
   for(int i=0;i<vec.size();i++){
      for(int j=i+1;j<vec.size();j++){
	 if(vec[j]==vec[i])vec.erase(vec.begin()+j);
      }
   }
   string t="";
   for(int i=0;i<vec.size();i++)t+=vec[i];
   return t;
}

int main(){
   string s;
   getline(cin,s);
   string r=no_repetitions(s);
   cout<<r<<endl;
   return 0;
}
