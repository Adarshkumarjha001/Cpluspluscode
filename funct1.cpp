#include <iostream>
using namespace std;

class Rectangle {

    double l,w;
    

public:
    void setnumber(double length, double width){
    	l=length;
    	w=width;
	}
	void print(){
		cout<<l<<"*"<<w<<endl;
	}
     friend Rectangle printArea(Rectangle,Rectangle);
};


Rectangle printArea(Rectangle o1,Rectangle o2) {
	Rectangle result;
    result.setnumber(o1.l,o2.w);
    return result;
}

int main() {
 Rectangle c1,c2,area;
 c1.setnumber(4);
 c1.print();
 c2.setnumber(6);
 c2.print();
 area=printarea(c1,c2);
area.print();
 return 0;
}
