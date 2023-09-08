#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size2;
	cin>>size2;
	vector<int> ans;
	vector<int> arr(size2);
	for(int i=0;i<size2;i++){
	cin>>arr[i];
}
int size1;
cin>>size1;
   vector<int> arr1(size1);
	for(int i=0;i<size1;i++){
	cin>>arr1[i];
}
int s=0,s1=0;
  while(s<size2 && s1<size1){
  	ans.push_back(arr[s++]+arr1[s1++]);
  }
  while(s<size2){
  	ans.push_back(arr[s++]);
  }
  while(s1<size1){
  	ans.push_back(arr1[s1++]);
  }
  for(int i=0;i<ans.size();i++){
  	cout<<ans[i]<<" ";
  }
  
}
