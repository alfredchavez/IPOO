// El problema pide el promedio redondeado de las notas de una cantidad de alumnos, no se sabe la cantidad de alumnos
// Solo que los datos(notas) se terminaran de ingresar cunado el usuario escriba "-1"
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int sum = 0;   //La variable "sum" nos dira la suma de las notas
  int cont = 0;  //Este contador nos dira el numero de alumnos
  while(cin>>n){
    if(n==-1){break;}
    else{
      sum+=n;
      cont++;
    }
  }
  int t = sum/cont;
  cout<<t<<endl;
  return 0;
}
