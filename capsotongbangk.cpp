#include<iostream>
#include<algorithm>
using namespace std;
int arr[1005];
int n, k;
int first_idx(int l, int value) {
	int r = n - 1;
	int ans = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (arr[mid] == value) {
			ans = mid;
			r = mid - 1;
		}
		else {
			if (arr[mid] > value) {
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}
		}
	}
	return ans;
}
int last_idx(int l, int value) {
	int r = n - 1;
	int ans = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (arr[mid] == value) {
			ans = mid;
			l = mid + 1;
		}
		else {
			if (arr[mid] > value) {
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}
		}
	}
	return ans;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		long long ans = 0;
		for (int i = 0; i < n - 1; i++) {
			int tmp = k - arr[i];
			if (first_idx(i + 1, tmp) != -1) {
				ans += last_idx(i + 1, tmp) - first_idx(i + 1, tmp) + 1;
			}
		}
		cout << ans<<endl;
	}
}
