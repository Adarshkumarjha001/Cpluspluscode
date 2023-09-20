#include<iostream>
using namespace std;
struct Employee{
	int age;
	float salary;
	int employeeid;
};
void displayinfo(Employee emp){
	cout<<"Age is: "<<emp.age<<endl;
	cout<<"salary is: "<<emp.salary<<endl;
	cout<<"employeeid is: "<<emp.employeeid<<endl;
}

int main(){
	Employee e1,e2;
	e1.age=12;
	e1.salary=12.3;
	e1.employeeid=1200;
	e1.age=12;
	e1.salary=12.3;
	e1.employeeid=1200;
	displayinfo(e1);
	displayinfo(e2);
	return 0;
}
