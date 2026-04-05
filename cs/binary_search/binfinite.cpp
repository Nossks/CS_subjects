#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>v,int key){
    int st=0;
    int en=1;
    while(v[en]<key){
        st=en;
        en=en*3;
    }
    int ans=-1;
    while(st<=en){
        int mid=st+(en-st)/2;
        if(v[mid]==key){
            ans=mid;
            en=mid-1;
        }
        else if(v[mid]>key){
            en=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>v={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    cout<<fun(v,0);
}