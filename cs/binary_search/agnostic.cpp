#include<bits/stdc++.h>
using namespace std;
void asc_search(vector<int>v,int el){
    int st=0;
    int end=v.size()-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(v[mid]==el){
            cout<<"at"<<mid;
            break;
        }
        else if(el<v[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
}
void dsc_search(vector<int>v,int el){
    int st=0;
    int end=v.size()-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(v[mid]==el){
            cout<<"at"<<mid;
            break;
        }
        else if(el<v[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}
int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    reverse(arr.begin(),arr.end());
    if(arr[0]<arr[1]){
        asc_search(arr,1);
    }
    else {
        dsc_search(arr,1);
    }
}