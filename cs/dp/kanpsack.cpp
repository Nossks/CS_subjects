#include<bits/stdc++.h>
using namespace std;
int t[100+2][100+3];
int knapsack(int *wt,int *val,int w,int n){
    if(n==0 || w==0){
        return 0;
    }
    else if(t[n][w]!=-1){
        return t[n][w];
    }
    else if(wt[n-1]<=w){
        return t[n][w]=max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    }
    else if(wt[n-1]>w){
        return t[n][w]=knapsack(wt,val,w,n-1);
    }
}
int main() {
    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};
    memset(t,-1,sizeof(t));
    int w = 6;
    int n = sizeof(wt) / sizeof(wt[0]);

    int result = knapsack(wt, val, w, n);
    std::cout << "Maximum value in Knapsack: " << result << std::endl;

    return 0;
}
