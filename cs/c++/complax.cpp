#include<bits/stdc++.h>
using namespace std;
class cl{
    int a,b;
    public:
    void set(int ,int);
    void show();
    cl add(cl);
};
void cl::set(int x,int y){
    a=x;
    b=y;
}
void cl:: show(){
    cout<<"value of a &b is "<<a<<" & "<<b;
}
cl cl:: add(cl c){
    cl temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
int main(){
    cl c1,c2,c3;
    c1.set(73,4);
    c2.set(7,65);
    c3=c1.add(c2);
    c3.show();
}