#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void fun(void ){
        a=-1;
    }
    void show(void){
        cout<<"a= "<<a;
    }
};
class B:public A{
    int b;
    public:
    void fun(){        //6,16 method overiding
        b=0;
    }
    void show(int no_use){      //9,19 method hiding
        cout<<"b= "<<b;
    }
};
int main(){
    B a;
    a.fun();
    a.show(6);
}