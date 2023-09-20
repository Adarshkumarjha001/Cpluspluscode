#include<iostream>
using namespace std;
class A{
	int marks;
	public:
	  void setvalues(int evaluated_marks){
	  	marks=evaluated_marks;
	  }
	  friend void information(A);
};
void information(A obj1){
	cout<<"Enter tthe value of evaluated marks: "<<obj1.marks;
}
int main(){
	A a1;
	a1.setvalues(95);
	information(a1);
	return 0;
}
