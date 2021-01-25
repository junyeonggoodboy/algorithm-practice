#include<iostream>
#include <string>
#include<algorithm>
#include <utility>
#include <cstdlib>
using namespace std;

void y_sort(pair<int,int> arr[], int N) {
	pair<int, int> arr_temp[50];
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i].second > arr[j].second) {
				arr_temp[0] = arr[i];
				arr[i] = arr[j];
				arr[j] = arr_temp[0];
			}
		}
	}
	return;
}

int main() {
	int N, temp;
	cin >> N;
	pair<int, int> arr[50];
	pair<int, int> arr_temp[50];

	for (int i = 0; i < N; i++)
		cin >> arr[i].first >> arr[i].second;

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i].first == arr[j].first) {
				y_sort(arr, N);
			}
			else {
				arr_temp[0] = arr[i];
				arr[i] = arr[j];
				arr[j] = arr_temp[0];
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i].first << ' ' << arr[i].second << endl;
	}
	cout << endl;
	return 0;
}