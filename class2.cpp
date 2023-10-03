#include<iostream>
using namespace std;
class B;
class A{
	int data;
	public:
		void setvalues(int value){
			data=value;
		}
		friend void add(A,B);
};
class B{
	int data;
	public:
		void setvalues(int values){
			data=values;
		}
		friend void add(A,B);
};
void add(A obj1,B obj2){
	cout<<"Adding object value of A and B: "<<obj1.data+obj2.data<<endl;
}
int main(){
	A a1;
	a1.setvalues(10);
	B b1;
	b1.setvalues(5);
	add(a1,b1);
	return 0;
}
