#include<iostream>
using namespace std;
class A{
    public:
    const int a;        //non static
    int & b;        //reference
   // public:
    A(int v):a(0),b(v){
        cout<<"a= "<<a<<"b= "<<b++;
    }
};
int main(){
    int x=79;
    A obj(x);
    cout<<" "<<x;
}