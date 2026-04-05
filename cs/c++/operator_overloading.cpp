#include<iostream>
using namespace std;
class ita{
    int a,b;
    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"a="<<a<<" & "<<"b="<<b;
    }
    ita operator-(ita);
};
 ita ita::operator-(ita c){   //return type classname::operator(used)(func. argument)
    ita i;
    i.a=a-c.a;
    i.b=b-c.b;
    return i;
}
int main(){
    ita i1,i2,i3;
    i1.setdata(3,4);
    i2.setdata(5,6);
    //i3=i1-i2;
    //i3=i1.operator-(i2);
    i3=i1-(i2);
   // i3=i2;
    i3.show();
}