#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef stack<int> si;
typedef queue<int> qi;
typedef long long ll;
typedef pair<int,int> pi;
#define vii vector<vector<int>>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define f first
#define s second
class Disjoint{
	vi size,parent,rank;
	public:
		Disjoint(int n){
			size.resize(n+1,1);
			rank.resize(n+1,0);
			parent.resize(n+1);
			loop(i,0,n+1){
				parent[i]=i;
			}
		}
		int findUPar(int node){	//path compression
			if(parent[node]==node)return node;
			return parent[node]=findUPar(parent[node]);
		}
		void unionBySize(int u,int v){
			int ul_u=findUPar(u);
			int ul_v=findUPar(v);
			if(ul_u==ul_v)return ;
			if(size[ul_u]<size[ul_v]){
				parent[ul_u]=ul_v;
				size[ul_v]+=size[ul_u];
			}
			else{
				parent[ul_v]=ul_u;
				size[ul_u]+=size[ul_v];
			}
		}
		void unionByRank(int u,int v){
			int ulp_u=findUPar(u);
			int ulp_v=findUPar(v);
			if(ulp_u==ulp_v)return ;
			if(rank[ulp_u] < rank[ulp_v]) {
            	parent[ulp_u] = ulp_v; 
	        }
	        else if(rank[ulp_v] < rank[ulp_u]) {
	            parent[ulp_v] = ulp_u; 
	        }
	        else {
	            parent[ulp_v] = ulp_u; 
	            rank[ulp_u]++; 
	        }
		}
};
int main(){
	ios::sync_with_stdio(0);
 	cin.tie(0);
 	Disjoint ds(7);
    ds.unionBySize(1, 2); 
    ds.unionBySize(2, 3); 
    ds.unionBySize(4, 5); 
    ds.unionBySize(6, 7); 
    ds.unionBySize(5, 6);     // if 3 and 7 same or not 
    if(ds.findUPar(3) == ds.findUPar(7)) {
        cout << "Same\n"; 
    }
    else cout << "Not same\n"; 

    ds.unionBySize(3, 7); 

    if(ds.findUPar(3) == ds.findUPar(7)) {
        cout << "Same\n"; 
    }
    else cout << "Not same\n"; 
}
