#include<bits/stdc++.h>
using namespace std;
class emp{
    private:
    string name;
    static string country; //declare
    public:
    void set(string a,string b);
    void show(){
        cout<<name<<"\t"<<country<<endl;
    }
    //private:
    void static country_set( string a){
        country=a;
    }
};
string emp::country;       //defn
void emp::set(string a,string b){
    name=a;
    country=b;
}
int main(){
    emp e,e1;
    e.set("ARYAN","INDIA");
    e1.set("ABDUL","CHINA");
    //e.show();
   // e1.set(69,100);
    emp::country_set("JAMAICA");
    e1.show();
    e.show();
    return 0;
}