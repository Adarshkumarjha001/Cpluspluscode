#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
}
     int key;
     cin>>key;
     int count=0;
     bool b=0;
     for(int i=0;i<n;i++){
     	if(arr[i]==key){
     		b=1;
     		count++;
		 }
		 
	 }
	 if(b==1){
	 	cout<<"Key is found"<<endl;
	 }
	 else if(b==0){
	 	cout<<"key is not found."<<endl;
	 }
}
