#include<bits/stdc++.h>
using namespace std;
class data{
    public:
    int a;
    ~data (){
        cout<<"destructon";
    }
};
void fun(){
    data d1;
}
int main(){
    fun();
    return 0;
}