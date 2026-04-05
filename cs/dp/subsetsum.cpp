#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,-4,6,2,8,9};
    int n=6;
    int target=8;
    bool t[100][100];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=target;j++){
            if(j==0){
                t[i][j]=true;
            }
            else{
                t[i][j]=false;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            if(arr[i-1]<=target){
                t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    cout<<t[n][target];
}