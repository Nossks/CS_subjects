#include<iostream>
using namespace std;
class A{
    int a;
    public:
    virtual ~A (){
        cout<<"a destructed"<<endl;
    }
};
class B:public A{
    int b;
    public:
    ~ B(){
        cout<<"b destructed"<<endl;
    }
};
void fun(void){
    A *ptr;
    ptr=new B;
    delete ptr;
}
int main(){
    fun();
}