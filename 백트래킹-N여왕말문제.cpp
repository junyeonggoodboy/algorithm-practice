#include<iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int n, cnt=0;
int *col;

bool promissing(int i) {
	int k;
	bool sw;

	k = 1;
	sw = true;
	while (k < i && sw) {
		if (col[i] == col[k] || i - k == abs(col[i] - col[k]))
			sw = false;
		k++;
	}
	return sw;
}

void queen(int i) {
	int j;
	if (promissing(i)) {
		if (i == n) {
			cnt++;
			return;
		}
		else
			for (j = 1; j <= n; j++) {
				col[i + 1] = j;
				queen(i + 1);
			}
	}
}

int main(void) {
	cin >> n;
	col = (int*)malloc(sizeof(int)*n);
	queen(0);
	cout << cnt;
	free(0);

	return 0;
}