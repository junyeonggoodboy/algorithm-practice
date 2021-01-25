#include <iostream>
#include <utility>
#include <string>
using namespace std;

pair<int, string> arr_temp[5000];

void sort(pair<int, string> arr[] , int N) {
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i].first > arr[j].first) {
				arr_temp[0] = arr[i];
				arr[i] = arr[j];
				arr[j] = arr_temp[0];
			}
		}
	}
}
int main() {
	int N;
	cin >> N;
	pair<int, string> arr[5000];

	for (int i = 0; i < N; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	sort(arr , N);

	for (int i = 0; i < N; i++) {
		cout << arr[i].first << ' ' << arr[i].second << endl;
	}
	return 0;
}