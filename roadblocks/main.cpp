#include <bits/stdc++.h>
#include "menu.h"
#include "creditos.h"

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
  while(matrix[i-1][j]!='@' and matrix[i-1][j]!='0' and matrix[i-1][j]!='='){
    char tmp=matrix[i][j];
    matrix[i][j]=matrix[i-1][j];
    matrix[i-1][j]=tmp;
    i--;
    this_thread::sleep_for(chrono::milliseconds(300));
    system("clear");
    imp_matrix();
  }
  if(matrix[i-1][j]=='@'){system("clear");cout<<"yOU lOSE"<<endl;
this_thread::sleep_for(chrono::seconds(1));return -1;}
  if(matrix[i-1][j]=='='){system("clear");cout<<"yOU wIN :)"<<endl;
this_thread::sleep_for(chrono::seconds(1));return -1;}
  return i;
}


int lef(int i,int j){
  while(matrix[i][j-1]!='@' and matrix[i][j-1]!='0'){
    char tmp=matrix[i][j];
    matrix[i][j]=matrix[i][j-1];
    matrix[i][j-1]=tmp;
    j--;
    this_thread::sleep_for(chrono::milliseconds(300));
    system("clear");
    imp_matrix();
  }
  if(matrix[i][j-1]=='@'){system("clear");cout<<"yOU lOSE"<<endl;
this_thread::sleep_for(chrono::seconds(1));return -1;}
  return j;
}


int rig(int i,int j){
  while(matrix[i][j+1]!='@' and matrix[i][j+1]!='0'){
    char tmp=matrix[i][j];
    matrix[i][j]=matrix[i][j+1];
    matrix[i][j+1]=tmp;
    j++;
    this_thread::sleep_for(chrono::milliseconds(300));
    system("clear");
    imp_matrix();
  }
  if(matrix[i][j+1]=='@'){system("clear");cout<<"yOU lOSe"<<endl;
this_thread::sleep_for(chrono::seconds(1));return -1;}
  return j;
}


int dow(int i,int j){
  while(matrix[i+1][j]!='@' and matrix[i+1][j]!='0'){
    char tmp=matrix[i][j];
    matrix[i][j]=matrix[i+1][j];
    matrix[i+1][j]=tmp;
    i++;
    this_thread::sleep_for(chrono::milliseconds(300));
    system("clear");
    imp_matrix();
  }
  if(matrix[i+1][j]=='@'){system("clear");cout<<"yOU lOSE"<<endl;
this_thread::sleep_for(chrono::seconds(1));return -1;}
  if(matrix[i+1][j]=='='){system("clear");cout<<"yOU wIN"<<endl;
this_thread::sleep_for(chrono::seconds(1));return -1;}
  return i;
}


int main(){
  int opcion;
  opcion=menu();
  if(opcion==2){return 0;}
  if(opcion==3){creditos();this_thread::sleep_for(chrono::seconds(2));main();}
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
      if(matrix[i][j]=='o'){m=i;n=j;break;}
    }
  }
  while(true){
     char tecla;
     cin>>tecla;
     if(tecla=='w'){
	m=up(m,n);
	if(m==-1){break;}
     }
     else if(tecla=='a'){
	n=lef(m,n);
	if(n==-1){break;}
     }
     else if(tecla=='d'){
	n=rig(m,n);
	if(n==-1){break;}
     }
     else if(tecla=='s'){
	m=dow(m,n);
	if(m==-1){break;}
     }
  }
  return 0;
}
