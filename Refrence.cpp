1)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void test(int &n){
	n++;
	cout<<"Value of n before :"<<n<<endl;
	
}
int main(){
	int n;
	cin>>n;
	test(n);
	cout<<"Value of n after : "<<n<<endl;
	return 0;
}


2)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void test(int n){
	n++;
	cout<<"Value of n before :"<<n<<endl;
	
}
int main(){
	int n;
	cin>>n;
	test(n);
	cout<<"Value of n after : "<<n<<endl;
	return 0;
}

