#include<iostream>
using namespace std;
class A{
    public:
    virtual void show()=0;
};
class B:public A{
    int b;
    public:
    void show(void){
        cout<<"wowoow";
    }
};
int main(){
    A *ptr;
    B obj;
    ptr=&obj;
    ptr->show();
}