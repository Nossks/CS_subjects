#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>>vii;
typedef vector<long long>vll;
typedef long long ll;
#define nl "\n"
#define sp " "
#define loop(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define f first
#define s second
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int testcase;cin>>testcase;
    while(testcase--){
        //take a chill pill ...
        string s;cin>>s;
        int n=s.size();
        int cnt = (s[0]=='u'?1:0) + (s[n-1]=='u'?1:0);
        s[0]=s[n-1]='s';
        loop(i,1,n-1){
            if(s[i]=='u'){
                cnt += (s[i+1]=='u'?1:0);
                s[i+1]='s';
            }
        }
        cout<<cnt<<nl;
    }
}

