#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="GeeksforGeeks";
    string s2="GeeksQuiz";
    int n=s1.size();int m=s2.size();
    int t[n+1][m+1];
    memset(t,0,sizeof(t));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                t[i][j]=1+t[i-1][j-1];
            }
            else{
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    cout<<"\n";
    int i=n;int j=m;
    while(i>0 &&j>0){
        if(s1[i-1]==s2[j-1]){
            cout<<s1[i-1];
            i--;j--;
        }
        else{
            if(t[i-1][j]>t[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
}