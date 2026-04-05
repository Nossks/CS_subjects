#include<bits/stdc++.h>
using namespace std;
class c{
    //private by default
    int a,b;
    public:
    void set_data(int,int);   //declare
    void dispaly(){
        cout<<"value of a &b is "<<a<<"  "<<b;
    }
};
void c::set_data(int x,int y){     //not default inline
    a=x;
    b=y;
}
int main(){
    c c1;
    c1.set_data(3,1);
    c1.dispaly();
}