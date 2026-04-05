#include<bits/stdc++.h>
using namespace std;
int sole(vector<int>arr,int el){
    int st=0;
    int en=arr.size()-1;
    while(st<=en){
        int mid=st+(en-st)/2;
        if(arr[mid]==el){
            return mid;
        }
        else if(mid+1<=en && arr[mid+1]==el){
            return mid+1;
        }
        else if(mid-1>=st && arr[mid-1]==el){
            return mid-1;
        }
        else if(arr[mid]<el){
            st=mid+2;
        }
        else{
            en=mid-2;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,35,4,66};
    cout<<sole(arr,1);
}