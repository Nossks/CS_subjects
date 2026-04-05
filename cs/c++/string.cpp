#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main(){
    string s1="hello";
    string s2("world");
    string s3;
    s3=s1+'8';
    //getline(cin,s3);
    //cout<<s3;
    string s4,s5;
    s4.assign("aryan");
     s4.append(" gairola");
     s4.replace(0,5,"yup");       //index,length to replace
     s4.insert(0,"123");
     s4.erase();
    //cout<<s4.size();
    s4.insert(0,"akhir gya kyun pal m diwana yun ho gya");
    //cout<<s4.rfind("gya");

    string s7("yoto");
    string s6("yoyo");
    //cout<<s6.compare(s7);

    string str="aryan";
    char ch[45];
    //cout<<strcpy(ch,str.c_str());
    //cout<<str.length();

    /*string ::iterator p=s1.begin();
    //cout<<p[0];
    int i=0;
    while(p[i]!='\0'){
        cout<<p[i]<<"";
        p++;
    }
    //cout<<s1;*/
}