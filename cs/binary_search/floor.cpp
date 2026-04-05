#include<bits/stdc++.h>
using namespace std;
int sole(vector<int>arr,int el){
    int st=0;
    int en=arr.size()-1;
    int ans=INT_MIN;
    while(st<=en){
        int mid=st+(en-st)/2;
        if(arr[mid]==el){
            return arr[mid];
        }
        else if(arr[mid]<el && ans<arr[mid]){
            ans=arr[mid];
        }
        else if(arr[mid]<el){
            st=mid+1;
        }
        else{
            en=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={1,2,3,4,4,5,66};
    cout<<sole(arr,INT_MAX);
}