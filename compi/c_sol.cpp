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
        int n;cin>>n;
        vi a(n);
        loop(i,0,n)cin>>a[i];
        ll ans=LLONG_MIN;
        vll prefix(n,0);
        loop(i,0,n){
            prefix[i] += a[i] + (i>0?prefix[i-1]:0);
        }
        ll left = 0;
        loop(i,0,n){
            ll right = prefix[n-1] - prefix[i];
            ans = max(ans,left-right);
            if(i==0)left += a[i];
            else left += (a[i]<0?-a[i]:a[i]);
        }
        cout<<ans<<nl;
    }
}

