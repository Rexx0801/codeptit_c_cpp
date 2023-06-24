#include<iostream>
using namespace std;
int n;
int arr[15];
int ok = 1;
void sinh() {
	int j = n - 2;
	while (arr[j] > arr[j + 1] && j >= 0) {
		j--;
	}
	if (j == -1) {
		ok = 0;
	}
	else {
		int  k = n - 1;
		while (arr[k] < arr[j]) {
			k--;
		}
		swap(arr[j], arr[k]);
		int l = j + 1;
		int r = n - 1;
		while (l <= r) {
			swap(arr[l], arr[r]);
			l++;
			r--;
		}
	}
}
int check() {
	for (int i = 0; i < n - 1; i++) {
		if (abs(arr[i + 1] - arr[i]) == 1) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		ok = 1;
		cin >> n;
		for (int i = 0; i < n; i++) {
			arr[i] = i + 1;
		}
		while (ok) {
			if (check()) {
				for (int i = 0; i < n; i++) {
					cout << arr[i];
				}
				cout << endl;
			}
			sinh();
		}
	}
}
