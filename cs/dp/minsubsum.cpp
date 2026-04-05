#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,2,7};
    int n = 3;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    bool t[100][100];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            if (i == 0) {
                t[i][j] = false;
            } if(j==0) {
                t[i][j] = true;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (arr[i - 1] <= j) {
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            } else {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    int ans = INT_MAX;
    for (int x = 0; x <= sum / 2; x++) {
        if (t[n][x]) {
            ans = min(ans, sum - 2 * x);
        }
    }
    cout << ans;
    return 0;
}
