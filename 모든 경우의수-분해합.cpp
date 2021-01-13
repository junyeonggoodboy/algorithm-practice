#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	int sum;
	int num;
	int N; cin >> N;

	for (int i = 1; i <= N; i++) {
		sum = i;
		num = i;
		while (num) {
			sum += num % 10;
			num /= 10;
		}
		if (sum == N) {
			cout << i << endl;
			return 0;
		}
	}

	cout << "0" << endl;
	return 0;
}