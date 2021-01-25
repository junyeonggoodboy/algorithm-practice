#include <iostream>
using namespace std;

int n, m;
int arr[10];
bool isused[10];

void func (int num, int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) 
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = num; i <= n; i++) {
		arr[k] = i;
		func(i, k + 1);
	}
}

int main(void) {
	cin >> n >> m;
	func(1,0);
}