#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {4,5,6,7};
    int st = 0;
    int n= v.size();
    int en =n - 1;
    //check if its alrdy sorted
    while (st <= en) {
        int mid = st + (en - st) / 2;
        int nxt = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;
        if (v[mid] <= v[nxt] && v[mid] <= v[prev]) {
            cout << v[mid] << endl;  // Add this line for a newline after printing the minimum element
            break;
        } 
        else if (v[0] <= v[mid]) {      //why 00
            st = mid + 1;
        } 
        else {
            en = mid - 1;
        }
    }
}
