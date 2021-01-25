#include <iostream>
#include <algorithm>
using namespace std;

#define MOD 1000000000
int dp[100+1][11];

int main(void) {
	int n,sum=0; cin >> n;
	for (int i = 0; i < 10; i++) {
		dp[1][i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][1];
		dp[i][10] = 0;
		for (int j = 1; j <= 9; j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
		}
	}

	for (int i = 1; i <= 9; i++) {
		sum = (sum + dp[n][i]) % MOD;
	}
	cout << sum << '\n';
	return 0;
}