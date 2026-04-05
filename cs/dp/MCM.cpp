#include <bits/stdc++.h>
using namespace std;
class Solution{
    int solve(int arr[],int i,int j){
        if(i>=j){
            //return 0;
        }
        int ans=INT_MAX;
        for(int k=i;k<=j-1;k++){
            int temp=solve(arr,i,k)+solve(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
            ans=min(ans,temp);
        }
        return ans;
    }
public:
    int matrixMultiplication(int n, int arr[])
    {
        return solve(arr,1,n-1);
    }
};
int main(){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];   
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    return 0;
}