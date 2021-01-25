#include <iostream>
#include <algorithm>
using namespace std;

int home[1000 + 1][3];

int main(void) {
	int n;
	int cost[3];
	home[0][0] = 0;
	home[0][1] = 0;
	home[0][2] = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> cost[0] >> cost[1] >> cost[2];
		home[i][0] = min(home[i - 1][1], home[i - 1][2]) + cost[0];
		home[i][1] = min(home[i - 1][0], home[i - 1][2]) + cost[1];
		home[i][2] = min(home[i - 1][1], home[i - 1][0]) + cost[2];
	}
	cout << min(home[n][2], min(home[n][0], home[n][1]));
}