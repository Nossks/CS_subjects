#include<iostream>
using namespace std;
class A;
class B{
    int b;
    public:
    friend void fun(A,B);
    void set(int d){
        b=d;
    }
};
class A{
    int a;
    friend void fun(A,B);
    public:
    A (int f){      //constuctor
        a=f;
    }
    };
void fun(A o1,B o2){
    cout<<"sum of a & b is  "<<o1.a+o2.b;
}
int main(){
    B x;
    x.set(3);
    A y(8);
    fun(y,x);
}