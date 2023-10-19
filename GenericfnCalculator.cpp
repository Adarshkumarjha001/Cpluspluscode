#include<iostream>
using namespace std;

template<class t>
class Calculator{
    public:
    t sum(t v1, t v2){
        return v1+v2;
    }

    t mul(t v1, t v2){
        return v1*v2;
    }

    t div(t v1, t v2){
        return v1/v2;
    }

    t sub(t v1, t v2){
        return v1-v2;
    }
};

int main(){
    Calculator<int> c;
    cout << c.mul(4,5);
}
