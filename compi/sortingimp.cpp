#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool comp( vector<int> v1,  vector<int> v2) {
    // if(v1[1]>v2[1]){
    // 	return true;
    // }
    // return false;
    return v1[1]>v2[1];
}
class Solution {
public:
    int customSort(int n, vector<vector<int>>& trust) {
        sort(trust.begin(), trust.end(), comp);

        for (int i = 0; i < trust.size(); i++) {
            cout << trust[i][0] << " " << trust[i][1] << "\n";
        }

        return 1;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> trust = {{1, 1}, {2, f2222}, {3, -111}};
    int result = solution.customSort(trust.size(), trust);
    return 0;
}
////very very important