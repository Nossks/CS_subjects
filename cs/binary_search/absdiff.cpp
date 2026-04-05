#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>v,int el){
    int st=0;int en=v.size()-1;
    while(st<=en){
        int mid=st+(en-st)/2;
        if(v[mid]==el){
            return el;
        }
        else if(v[mid]<el){
            st=mid+1;
        }
        else{
            en=mid-1;
        }
    }
    // cout<<en<<st;
    return min(abs(v[en]-el),abs(v[st]-el));
}
int main(){
    vector<int>v={1,2,3,45};
    cout<<fun(v,-1)<<"\n";
}