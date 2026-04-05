#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(void){
        a=-1;
    }
    A(int k){
        a=k;
    }
    void show(void){
        cout<<"a="<<a;
    }
    ~A(){
        cout<<"done 1\n";
    }
};
class B:public A{
    int b;
    public:
    B(int x,int y):A(y){
        b=x;
    }
    ~B(){
        cout<<"done 2";
    }
};
int main(){
    B o(5,6);
    //o.show();
}