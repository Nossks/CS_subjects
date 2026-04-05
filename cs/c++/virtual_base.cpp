#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void f1(int v){
        a=v;
    }
};
class B:virtual public A{
    int b;
};
class C:public virtual  A{
    int c;
};
class D:protected B,public C{
    public:
    void show(void){
        cout<<"a= "<<a;
    }
};
int main(){
    D obj;
    obj.f1(7);
    obj.show();
}