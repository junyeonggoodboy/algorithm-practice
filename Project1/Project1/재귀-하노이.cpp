#include <iostream>
#include <cmath>
using namespace std;


void hanoi(int N, int from, int to) {
	int mid = 6 - from - to;
	if (N == 1) {
		cout << from << " " << to << endl;
	}
	if (N >= 2) {
		hanoi(N - 1, from, mid);
		hanoi(1, from, to);
		hanoi(N - 1, mid, to);
	}
}

int main() {
	int N; cin >> N;
	if (N >= 1 && N <= 20) {
		cout << (1 << N) - 1 << endl;
		hanoi(N, 1, 3);
	}
	return 0;
}