#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex (int p, int q){
        a=p;
        b=q;
    }
    friend ostream& operator<<(ostream&,complex );
};
ostream& operator<<(ostream& dout,complex c){
    cout<<"a="<<c.a<<","<<"b="<<c.b;
    return dout;
}
int main(){
    complex c1(3,4),c2(8,9);
    cout<<c1<<" & "<<c2;
    //operator<<(cout,c1);
    return 0;
}