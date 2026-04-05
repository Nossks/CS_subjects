#include<bits/stdc++.h>
using namespace std;
int fro(vector<int>v,int el){
    int st=0;
    int ans=-1;
    int en=v.size()-1;
    while(st<=en){
        int mid=st+(en-st)/2;
        if(v[mid]==el){
            ans=mid;
            en=mid-1;
        }
        else if(v[mid]>el){
            en=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
int seo(vector<int>v,int el){
    int st=0;
    int ans=-1;
    int en=v.size()-1;
    while(st<=en){
        int mid=st+(en-st)/2;
        if(v[mid]==el){
            ans=mid;
            st=mid+1;
        }
        else if(v[mid]>el){
            en=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>v={1,6,6,6,6,6,8,8};
    //firsr occerence
    int x=fro(v,16);
    //second occur
    int y=seo(v,6);
    cout<<y-x+1;
}