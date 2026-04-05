#include<iostream>
#include<string>
#include<string.h>
#include<vector>
#include<map>       //use
#include<set>
using namespace std;
    void solve(string nums,string op,set<string> &store){
        if(nums.size()==0){
            store.emplace(op);
            return ;
        }
        string op1=op;
        string op2=op;
        op2.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        solve(nums,op1,store);
        solve(nums,op2,store);
    }
    int main(){
        string nums="abab";
        string op;
        set<string>store;
        solve(nums,op,store);
        vector<string>str(store.begin(),store.end());
        for(int i=0;i<str.size();i++){
            cout<<str[i]<<endl;
        }
    }