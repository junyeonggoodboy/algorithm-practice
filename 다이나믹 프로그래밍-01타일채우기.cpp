#include <iostream>
using namespace std;

//2차원 다이나믹 프로그래밍 기법.
int d[1000000 + 1];
int mod = 15746;

int main(void) {
	int x;
	cin >> x;

    d[1] = 1 % mod;
    d[2] = 2 % mod;

	for (int i = 3; i <= x; i++) {
		d[i] = (d[i - 1] + d[i - 2]) % mod;
	}

	cout << d[x] << '\n';
}