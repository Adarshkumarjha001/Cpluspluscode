#include<iostream>
using namespace std;
void reverse(int num[],int n){
	int start=0;
	int end=n-1;
	while(start<=end){
	
	
		swap(num[start],num[end]);
		start++;
		end--;
	}
}

void printarray(int num[],int n){
	
for(int i=0;i<n;i++){
	cout<<num[i]<<" ";
	
}
	cout<<endl;
}
int main(){
	int arr0[5]={12,45,12,-21,34};
	int arr1[6]={1,56,23,45,22,21};
	reverse(arr0,5);
	reverse(arr1,6);
	printarray(arr0,5);
	printarray(arr0,6);
	return 0;
}
