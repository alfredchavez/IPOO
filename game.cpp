//Roadblocks_ascii
//author Alfred Chavez
//condition Incomplete

#include <bits/stdc++.h>
using namespace std;
string matrix[22];

void imp_matrix(){
  for(int i=0;i<22;i++){
    for(int j=0;j<matrix[i].length();j++){
      cout<<matrix[i][j];
    }
    cout<<endl;
  }
  return;
}

int up(int i,int j){
  while(matrix[i-1][j]!='@' and matrix[i-1][j]!='0'){
    if(matrix[i-1][j]=='o'){
      for(int n=0;n<22;n++){
        for(int m=0;m<matrix[n].length();m++){
          if(matrix[n][m]=='o' and n!=(i-1) and m!=j){
            matrix[n-1][m]='*';matrix[i][j]=' ';
          }
        }
      }
      for(int n=0;n<22;n++){
        for(int m=0;m<matrix[n].length();m++){
          if(matrix[n][m]=='*'){i=n;j=m;}
        }
      }
      continue;
    }
    char tmp=matrix[i][j];
    matrix[i][j]=matrix[i-1][j];
    matrix[i-1][j]=tmp;
    i--;
    this_thread::sleep_for(chrono::milliseconds(500));
    system("clear");
    imp_matrix();
      }

  return i;
}

int le(int i,int j){
  while(matrix[i][j-1]!='@' and matrix[i][j-1]!='0'){
    char tmp=matrix[i][j];
    matrix[i][j]=matrix[i][j-1];
    matrix[i][j-1]=tmp;
    j--;
    this_thread::sleep_for(chrono::milliseconds(500));
    system("clear");
    imp_matrix();
  }

  return j;
}

int ri(int i,int j){
  while(matrix[i][j+1]!='@' and matrix[i][j+1]!='0'){
    char tmp=matrix[i][j];
    matrix[i][j]=matrix[i][j+1];
    matrix[i][j+1]=tmp;
    j++;
    this_thread::sleep_for(chrono::milliseconds(500));
    system("clear");
    imp_matrix();
  }

  return j;
}

int dow(int i,int j){
  while(matrix[i+1][j]!='@' and matrix[i+1][j]!='0'){
    char tmp=matrix[i][j];
    matrix[i][j]=matrix[i+1][j];
        matrix[i+1][j]=tmp;
    i++;
    this_thread::sleep_for(chrono::milliseconds(500));
    system("clear");
    imp_matrix();
  }

  return i;
}


int main(){
  ifstream archivo("mapa1.txt");
  string s;
  int j=0;
  if(archivo.is_open()){
    while(j<22){
      getline(archivo,s);
      matrix[j]=s;
      j++;
    }
    archivo.close();
  }
  system("clear");
  for(int a=0;a<22;a++){
    for(int b=0;b<matrix[a].length();b++){
      cout<<matrix[a][b];
    }
    cout<<endl;
  }
  int m,n;
  for(int i=0;i<22;i++){
    for(int j=0;j<matrix[i].length();j++){
      if(matrix[i][j]=='*'){m=i;n=j;break;}
    }
  }
  while(true){
     char tecla;
     cin>>tecla;
     if(tecla=='w'){
        m=up(m,n);
     }
     else if(tecla=='a'){
        n=le(m,n);
     }
     else if(tecla=='d'){
        n=ri(m,n);
     }
     else if(tecla=='s'){
        m=dow(m,n);
     }
  }
  return 0;
}
