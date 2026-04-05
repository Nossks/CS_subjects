#include<bits/stdc++.h>
using namespace std;
char alpha(string arr,char el){
    int st=0;
    int en=arr.size()-1;
    char ans='#';
    while(st<=en){
        int mid=st+(en-st)/2;
        if(arr[mid]==el){
            st=mid+1;
        }
        else if(arr[mid]<el){
            st=mid+1;
        }
        else{
            en=mid-1;
            ans=arr[mid];
        }
    }
    return ans;
}
int main(){
    string str="aryz";
    cout<<alpha(str,'w');
}