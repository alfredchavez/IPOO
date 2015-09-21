#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    char arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(char(*(arr+i))!=char(*(arr+n-1-i))){
            cout<< "NO ES PALINDROMO"<<endl;
            return 0;
        }
    }
    cout<<"SI ES PALINDROMO"<<endl;
    return 0;
}
