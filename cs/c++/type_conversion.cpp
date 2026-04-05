#include<iostream>
using namespace std;
class product{
    int j;
    public:
    void show(void){
        cout<<"j= "<<j<<endl;
    }
    product (){}
    /*product (item obj){
        j=obj.give();
    }*/
    void set(int u){
        j=u;
    }
};
class item{
    int i;
    public:
    item(){}
    item(int x){
        this->i=x;
    }
    operator int (){
        return i;
    }
    int give (void){
        return i;
    }
    void show(void){
        cout<<"i= "<<i<<endl;
    }
    operator product(){
        product p;
        p.set(i);
        return p;
    }
};
int main(){
    int k;
    item o1;
    product o2;
    o1=99;   //primitive to class
    k=o1;      //class to primitive
    o2=o1;      //using cast operator or constructor
    cout<<"k= "<<k<<endl;
    o1.show();
    o2.show();
}