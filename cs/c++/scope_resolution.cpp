#include<iostream>
using namespace std;
int a=10;
int b=20;
int sum=a+b;
int main(){
    int a=5; int b=15;  //can update b withut int using
    int sum=a+b;
    cout<<a<<"\t"<<b<<endl;   //local       5,15
    cout<<::a<<"\t"<<b<<endl;    //global and local     10,15
    ::sum=::a+::b;
    cout<<::sum<<endl;  //30
    return 0;
}