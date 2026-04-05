#include<iostream>
using namespace std;
class complex{
    int a;
    public:
    void get(void);
    void set(int x){
        a=x;
    }
    friend complex operator+(complex,complex);
    complex operator++(int no_use){
        complex c;
        c.a=a++;
        return c;
    }
};
complex operator+(complex x,complex y){
    complex c;
    c.a=x.a+y.a;
    return c;
}
void complex::get(void){
    cout<<"a="<<a<<endl;
}
int main(){
    complex c1,c2;
    c1.set(5);
    c2.set(3);
    c1=c1+c2;
    c1++;
    c1.get();
}