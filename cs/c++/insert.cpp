#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    friend istream& operator>>(istream&,complex &);
};
istream& operator>>(istream &din,complex &c){
    cin>>c.a>>c.b;
    return din;
}
int main(){
    complex c1;
    cin>>c1;
    //operator>>(cin,c1);
    return 0;
}