#include<bits/stdc++.h>
using namespace std;

class c1{
    int a,b;
    public:
    virtual void set(){
        a=1,b=1;
    }
    virtual void show(){
        cout<<a<<" "<<b;
    }
};
class c2:public c1{
    int a,b;
    public:
    void set(){
        a=2,b=2;
    }
    void show(){
        cout<<a<<" "<<b;
    }
};
int main(){
    c1 obj;
    c1 *ptr=&obj;
    ptr->set();
    ptr->show();
}
