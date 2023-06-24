#include<iostream>
using namespace std;
int n;
int arr[15];
int a[25];
int ok = 1;
int check() {
	for (int i = 0; i < n; i++) {
		if (arr[i] != a[i]) {
			return 0;
		}
	}
	return 1;
}
void sinh() {
	int j = n - 2;
	while (arr[j] > arr[j + 1] && j >= 0) {
		j--;
	}
	if (j == -1) {
		ok = 0;
	}
	else {
		int k = n - 1;
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
int main() {
	int t;
	cin >> t;
	while (t--) {
		ok = 1;
		cin >> n;
		for (int i = 0; i < n; i++) {
			arr[i] = i + 1;
			cin >> a[i];
		}
		int cnt = 0;
		while (ok) {
			cnt++;
			if (check()) {
				cout << cnt;
				break;
			}
			sinh();
		}
		cout << endl;
	}
}
