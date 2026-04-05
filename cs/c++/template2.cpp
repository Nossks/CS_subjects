#include<iostream>
using namespace std;
template<class X>class A{   
    struct array{
        int capacity;
        X *arr;
    };
    array * ptr;
    public:
    void add(int index,X value){
        if(index>=0 && index<ptr->capacity){
            ptr->arr[index]=value;
        }
        else{
            cout<<"not valid index"<<endl;
        }
    }
    void view(int index,X & data){
        if(index>=0 && index<ptr->capacity){
            data=ptr->arr[index];
        }
        else{
            cout<<"not valid index"<<endl;
        }
    }
    A(int i){
        ptr=new array;
        ptr->capacity=i;
        ptr->arr=new X [i];       
    }
};
int main(){
    A <double>obj(3);
    obj.add(0,9.9);
    obj.add(1,6.9);
    obj.add(2,0.8);
    double data;
    obj.view(0,data);
    cout<<"data = "<<data<<endl;
    obj.view(1,data);
    cout<<"data = "<<data<<endl;
    obj.view(2,data);
    cout<<"data = "<<data<<endl;
    obj.view(3,data); // not va;lid
    cout<<"data = "<<data<<endl;
}