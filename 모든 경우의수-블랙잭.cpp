#include<iostream>
using namespace std;

int main() {
	int N, M, i, j, k, black = 0, max = 0;
	cin >> N >> M;

	int *num = new int[N];
	for (i = 0; i < N; i++) {
		cin >> num[i];
	}

	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {
			for (k = j + 1; k < N; k++) {
				int sum = num[i] + num[j] + num[k];
				if (max < sum && sum <= M) {
					max = sum;
				}
			}
		}
	}

	cout << max;
}