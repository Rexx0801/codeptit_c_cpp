#include<iostream>
#include<algorithm>
using namespace std;
int arr[5005];
int n,s;
int binary(int l, int r, int value) {
	while (l <= r) {
		int mid = (l + r) / 2;
		if (arr[mid] == value) {
			return 1;
		}
		if (arr[mid] > value) {
			r = mid - 1;
		}
		if (arr[mid] < value) {
			l = mid + 1;
		}
	}
	return 0;
}
int solve() {
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			int x = s - arr[i] - arr[j];
			if (binary(j + 1, n - 1, x)) {
				return 1;
			}
		}
	}
	return 0;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> s;
		for (int i = 0; i < n; i++)cin >> arr[i];
		sort(arr, arr + n);
		if (solve()) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
		cout << endl;
	}
}
