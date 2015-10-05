#include <bits/stdc++.h>
using namespace std;

class String{
   public:
      string a;
      void copiar(string t);
      void juntar(string t);
      int tamano();
      bool comparar(string t);
};

void String::copiar(string t){
   a=t;
   return;
}

void String::juntar(string t){
   a+=t;
   return;
}

int String::tamano(){
   return a.length();
}

bool String:: comparar(string t){
   if(a.length()!=t.length())return false;
   for(int i=0;i<a.length();i++)
      if(a[i]!=t[i])return false;
   return true;
}

int main(){
   String s;
   cin>>s.a;
   int n;
   cin>>n;
   string t;
   if(n==1){cin>>t;s.copiar(t);cout<<s.a<<endl;return 0;}
   if(n==2){cin>>t;s.juntar(t);cout<<s.a<<endl;return 0;}
   if(n==3){cout<<s.tamano()<<endl;return 0;}
   if(n==4){cin>>t;if(s.comparar(t))cout<<"Iguales"<<endl;else cout<<"Diferentes"<<endl;return 0;}
   return 0;
}
