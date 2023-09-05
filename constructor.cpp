#include<bits/stdc++.h>
using namespace std;
class Rectangle{

	
	int length;
	int width;
	int height;
	public:
	Rectangle(int mylength,int mywidth,int myheight){
		length=mylength;
		width=mywidth;
		height=myheight;
		
	}
	void area(){
		cout<<"area: "<<length*width<<endl;
	}
	void volume(){
		
	cout<<"Volume: "<<length*width*height<<endl;
}
};
int main(){

	Rectangle R1(32,115,10);
	R1.area();
	R1.volume();
	
}
