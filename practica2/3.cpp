#include <bits/stdc++.h>
using namespace std;

vector<int> merge_s(vector<int>&vec,const vector<int>& left,const vector<int>&right){
   vector<int>rpta;
   unsigned left_ite=0,right_ite=0;
   while(left_ite < left.size() && right_ite < right.size()){
      if(left[left_ite] < right[right_ite]){
	 rpta.push_back(left[left_ite]);
	 left_ite++;
      }
      else {
	 rpta.push_back(right[right_ite]);
	 right_ite++;
      }
   }
   while(left_ite < left.size()){
      rpta.push_back(left[left_ite]);
      left_ite++;
   }
   while(right_ite < right.size()){
      rpta.push_back(right[right_ite]);
      right_ite++;
   }
   vec=rpta;
   return vec;
}

vector<int> ssort(vector<int>&vec){
   if(vec.size()==1){
      return vec;
   }
   vector<int>::iterator med =vec.begin()+(vec.size()/2);
   vector<int> left(vec.begin(),med);
   vector<int> right(med,vec.end());
   left=ssort(left);
   right=ssort(right);
   return merge_s(vec,left,right);
}

int main(){
   int n;
   cin>>n;
   vector<int>vec(n);
   for(int i=0;i<n;i++)cin>>vec[i];
   vector<int>rpta(ssort(vec));
   for(int i=0;i<rpta.size();i++)cout<<vec[i]<<' ';
   cout<<endl;
   return 0;
}
