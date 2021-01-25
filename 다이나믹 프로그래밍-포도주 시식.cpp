#include <iostream>
#include <algorithm>
using namespace std;

int dp[10000 + 1];
int p[10000 + 1];
int main(void) {
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}


	dp[1] = p[1];
	dp[2] = p[1] + p[2];

	for (int i = 3; i <= n; i++) {
		dp[i] = max(dp[i - 1], max(dp[i - 2] + p[i], dp[i - 3] + p[i] + p[i - 1]));
	}

	cout << dp[n] << '\n';
	return 0;
}