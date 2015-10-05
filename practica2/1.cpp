#include <bits/stdc++.h>
using namespace std;

/*vector<vector<int>>transversa(vector<vector<int>>vec){
   vector<vector<int>>rpta(vec[0].size());
   for(int i=0;i<rpta.size();i++){
      for(int j=0;j<vec.size();j++){
	 rpta[i].push_back(vec[j][i]);
      }
   }
   return rpta;
}*/

vector<vector<int>> productMatrix(vector<vector<int>>vec1, vector<vector<int>>vec2){
   vector<vector<int>>res(vec1.size());
   for(int i=0;i<res.size();i++){
      for(int j=0;j<vec2[0].size();j++){
	 int tmp=0;
	 for(int k=0;k<vec2.size();k++){
	    tmp+=vec1[i][k]*vec2[k][j];
	 }
	 res[i].push_back(tmp);
      }
   }
   return res;
}

int main(){
   int n,m;
   cout<<"ingrese las dimensiones de la primera matrix"<<endl; 
   cin>>n>>m;
   vector<vector<int>>vec1(n);
   cout<<"Ingrese los datos de la primera matrix"<<endl;
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
	 int a;
	 cin>>a;
	 vec1[i].push_back(a);
      }
   }
   cout<<"Ingrese las dimensiones de la segunda matrix"<<endl;
   int c,f;
   cin>>c>>f;
   vector<vector<int>>vec2(c);
   cout<<"Ingrese los datos de la segunda matriz"<<endl;
   for(int i=0;i<c;i++){
      for(int j=0;j<f;j++){
	 int a;
	 cin>>a;
	 vec2[i].push_back(a);
      }
   }
   vector<vector<int>>vec(productMatrix(vec1,vec2));
   cout<<"La matriz resultante es : "<<endl;
   for(int i=0;i<vec.size();i++){
      for(int j=0;j<vec[0].size();j++){
	 cout<<vec[i][j]<<' ';
      }
      cout<<endl;
   }
   return 0;
}
