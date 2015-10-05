#include <bits/stdc++.h>
using namespace std;
int main(){
   int matr[][4]={1,2,3,4,5,6,7,8,9,10,11,12};
   cout<<**matr<<endl;
   cout<<*(*(matr+1)+2)<<endl;
   cout<<*(matr[2]+3)<<endl;
   cout<<(*(matr+2))[2]<<endl;
   cout<<*((*matr)+1)<<endl;
   return 0;
}

//La ultima alternativa es la falsa
