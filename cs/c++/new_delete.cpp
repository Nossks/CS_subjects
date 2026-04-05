#include<iostream>
using namespace std;
int main(){
    int *p=new int;
    *p=99;
    cout<<"p="<<*p<<endl;
    delete p;
    //cout<<"p="<<*p;
    float *f=new float[6];
    for(int i=0;i<3;i++){
        cin>>f[i];
    }
    for(int i=0;i<6;i++){
        cout<<f[i]<<" ";
    }
    delete []f;
}