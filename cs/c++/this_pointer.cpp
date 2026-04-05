#include<iostream>
using namespace std;
class box{
    int l,b;
    public:
    void set(int l,int b){
        this->l=l;              //this keyword
        this->b=b;
    }
    void show(void){
        cout<<"l= "<<l<<"b= "<<b;
    }
};\
int main(){
    box b1;
    b1.set(4,5);
    b1.show();
}