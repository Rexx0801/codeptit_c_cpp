#include<iostream>
#include<algorithm>
using namespace std;
int arr[100000];
int bianry(int l, int r, int value) {
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
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		long long ans = 0;
		for (int i = 0; i < n - 1; i++) {
			int tmp = (bianry(i + 1, n - 1, arr[i] + m));
			if (tmp != -1) {
				ans += tmp - i;
			}
		}
		cout << ans << endl;
	}
}
