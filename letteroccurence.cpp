#include<iostream>
#include<string>
using namespace std;
int main(){
	int count=0;
	int size;
	cin>>size;
	string arr[100];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	char letter;
	cin>>letter;
	for(int i=0;i<size;i++){
		string a=arr[i];
		if (letter==a[0]){
			count++;
		}
	}
	cout<<letter<<"occurence is: "<<count;
	return 0;
}
