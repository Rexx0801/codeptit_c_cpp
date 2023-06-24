#include<iostream>
#include<algorithm>
using namespace std;
int n, s;
int arr[5000];
int binary(int l, int r, long long value) {
	int ans = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (arr[mid] < value) {
			ans = mid;
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	return ans;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> s;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		long long ans = 0;
		for (int i = 0; i < n - 2; i++) {
			for (int j = i + 1; j < n - 1; j++) {
				int tmp = binary(j + 1, n - 1,(long long) s - arr[i] - arr[j]);
				if (tmp != -1) {
					ans += tmp - j;
				}
			}
		}
		cout << ans << endl;
	}
}
