#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	vector<int> ans;
	vector<int> arr(size,0);
	for(int i=0;i<size;i++){
		cin>>arr[i];
		ans.push_back(arr[i]);
		
	}
	for(int i=0;i<size;i++){
		sort(ans.begin(),ans.end());
		cout<<ans[i]<<" ";

	}
	cout<<endl;
	for(int i=0;i<size;i++){

		if (ans[i]==ans[i+1]){
			cout<<ans[i];
		}
	}
}
