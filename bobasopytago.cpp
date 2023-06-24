#include<iostream>
#include<algorithm>
using namespace std;
long long arr[5005];
int n;
int binary(int l, int r, long long value) {
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
			long long tmp = (long long)arr[i] + arr[j];
			if (binary(j + 1, n - 1, tmp)) {
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
		cin >> n;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			arr[i] = (long long)x * x;
		}
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
