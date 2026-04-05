#include<bits/stdc++.h>
using namespace std;

int count(vector<int> coin, int n, int sum) {
    int t[n + 1][sum + 1];

    // Initializing the first row
    for (int x = 0; x <= sum; x++) {
        t[0][x] = INT_MAX - 1;
    }

    // Initializing the first column
    for (int x = 0; x <= n; x++) {
        t[x][0] = 0;
    }

    // Initializing the second row with correct condition
    for (int x = 1; x <= sum; x++) {
        if (x % coin[0] != 0) {
            t[1][x] = INT_MAX - 1;
        } else {
            t[1][x] = x / coin[0];
        }
    }
    // Dynamic Programming
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (coin[i - 1] <= j) {
                t[i][j] = min(t[i][j - coin[i - 1]] + 1, t[i - 1][j]);
            } else {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][sum];
}
int main() {
    vector<int> coin = {4, 2, 3};
    int sum = 140;
    int n = coin.size();
    cout << count(coin, n, sum) << "\n";
}
