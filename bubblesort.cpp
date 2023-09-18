#include<iostream>
using namespace std;
void printname(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void swapalternate(int arr[],int size){
	for(int i=0;i<size;i+=2){
		if((i+1)<size){
			swap(arr[i],arr[i+1]);
		}
	}
}
int main(){
	int arrodd[5]={1,2,3,4,5};
	int arreven[6]={1,2,3,4,5,6};
	swapalternate(arrodd,5);
	swapalternate(arreven,6);
	printname(arrodd,5);
	printname(arreven,6);
	return 0;
}
