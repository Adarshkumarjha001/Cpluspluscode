#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	vector<int> ans;
	for(int i=0;i<t;i++){
		int l;
		cin>>l;
		for(int i=0;i<l;i++){
			int element;
			cin>>element;
			ans.push_back(element);
		}
	}
	sort(ans.rbegin(),ans.rend());
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
}
