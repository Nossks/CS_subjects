#include<iostream>
using namespace std;
class A{
    int x;
    protected:
    void show(void){
        cout<<"x = "<<x<<endl;
    }
    public:
    void set(int d){
        x=d;
    }
};
class B:private A{
    public:
    void fix(int s){
        set(s);
    }
    void dis(void){
        show();
    }
};
class C:public B{
    public:
    void bharo(int r){
        //set(r);           cant use set 'cause set is private in B and public in A
    }
};
int main(){
    B o;
    A o1;
    o.fix(7);
    o.dis();
    //o1.set(6);
    //o.fix(5);
}