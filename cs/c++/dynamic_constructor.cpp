#include<iostream>
using namespace std;
class A{
    public:
    int *a;
    //public:
    A(){
        a=new int [5];
    }
};
int main(){
    A obj;
}