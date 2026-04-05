// C++ code to implement the approach
#include <bits/stdc++.h>
using namespace std;
int countSub(vector<int>& v, int n, int diff)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += v[i];
	if (diff > sum)
		return 0;
	if ((diff + sum) % 2 != 0)
		return 0;
	int s2;
if (diff >= 0) {
    s2 = (diff + sum) / 2;
} else {
    s2 = (sum - diff) / 2;
}

	int dp[n + 1][s2 + 1];
	for (int i = 0; i <= n; i++)
		dp[i][0] = 1;
	for (int j = 1; j <= s2; j++)
		dp[0][j] = 0;
	dp[0][0]=1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= s2; j++) {
			if (v[i - 1] > j)
				dp[i][j] = dp[i - 1][j];
			else{
				dp[i][j] = dp[i - 1][j]+ dp[i - 1][j - v[i - 1]];}
		}
	}
	return dp[n][s2];
}
// Driver code
int main()
{
	int n, diff;
	vector<int> v;
	n = 1, diff = -200;
	v = { 100 };
	cout << countSub(v, n, diff) << endl;
	return 0;
}
