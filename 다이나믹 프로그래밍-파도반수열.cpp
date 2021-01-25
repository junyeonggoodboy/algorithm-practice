#include <iostream>
using namespace std;

long long d[100 + 1];

long long wave(int n) {
	d[1] = 1;
	d[2] = 1;
	d[3] = 1;
	if (d[n] != 0) return d[n];
	for (int i = 4; i <= n; i++) {
		d[i] = d[i - 3] + d[i - 2];
	}
	return d[n];
}
int main(void) {
	int test_case, n;
	cin >> test_case;

	for (int i = 1; i <= test_case; i++) {
		cin >> n;
		cout << wave(n) << endl;
	}
}