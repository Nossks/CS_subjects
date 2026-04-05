#include<bits/stdc++.h>
using namespace std;
class complax{
    int a;
    static int b;
    public:
    complax (){
        a=0;
        b=0;        //default;
    }
    complax(int x,int y){
        a=x;
        b=y;        //param. constructor
    }
    complax(complax &c);    //copy const declare
    void show(void);        //func declare
};
complax::complax(complax &c){
    a=c.a;                      //copy constructor
    b=c.b;
}
int complax::b;
void complax::show(){
    cout<<"a is "<<a<<" b is "<<b<<endl;
}
int main(){
    complax c1(4,5);
    complax c2;
    c1.show();
    //c2.show();
    complax c3=c1;
    c3.show();
    return 0;
}
