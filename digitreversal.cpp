#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	cin>>n;
	int rev=0;
	while(n!=0){
		a=n%10;
		rev=rev*10+a;
		n=n/10;
	}
	cout<<rev<<endl;
}
