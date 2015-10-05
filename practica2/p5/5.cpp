#include <bits/stdc++.h>
using namespace std;

vector<string>vec;

void leer(){
   ifstream archivo("doc1.txt");
   string s;
   while(!archivo.eof()){
      getline(archivo,s);
      vec.push_back(s);
   }
   archivo.close();
}

int main(){
   leer();
   for(int i=0;i<vec.size();i++){
      cout<<vec[i]<<endl;
   }
   return 0;
}
