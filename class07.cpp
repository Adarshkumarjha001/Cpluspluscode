#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class name{
	int age;
	public:
		string name;
		void display(int a){
			age=a;
			cout<<"The age of an individual is: "<<age<<endl;
		}
};
int main(){
	name n1;
	cin>>n1.name;
	
	cout<<"The name of mine is: "<<n1.name<<endl;
	n1.display(10);
	
}
