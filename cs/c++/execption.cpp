#include<iostream>
using namespace std;
long long solve(long long f){
    if(f==0 || f==1){
        return 1;
    }
    return f*solve(f-1);
}
int main(){
    long long i;
    cout<<"enter number";
    cin>>i;
    try{
        if(i<0){
            throw i;
        }
        cout<<"all good"<<endl;
        cout<<solve(i);
    }
    catch(long long x){
        cout<<"number is "<<x<<" which does not have any factorial"<<endl;
    }
}