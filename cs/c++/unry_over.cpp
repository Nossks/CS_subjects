#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void set(int v,int n){
        a=v;
        b=n;
    }
    void show(){
        cout<<"a= "<<a<<" b= "<<b;
    }
    complex operator-(){
        complex temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
};
int main(){
    complex c1,c2,c3;
    c1.set(3,4);
    //c2=c1.operator-();
    c2=-c1;
    c2.show();
}