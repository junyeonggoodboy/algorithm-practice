#include <iostream>
using namespace std;

int n, m;
int arr[10];
bool isused[10];

void func(int a, int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << endl;
		return;
	}
	for (int i = a; i <= n; i++) {
		if (!isused[i]) {
			arr[k] = i;
			isused[i] = true;
			func(i + 1, k + 1);
			isused[i] = false;
		}
	}
}
int main(void) {
	cin >> n >> m;
	func(1, 0);
}