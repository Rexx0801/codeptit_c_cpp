#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int arr[100005];
int a[100005];
int upper( int l, int r, int value) {
	int ans = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] > value) {
			ans = mid;
			r = mid - 1;
		}
		else {
			l = mid + 1;
		}
	}
	return ans;
}
int cnt[5];
int dem(int n, int x) {
	if (x == 0)return 0;
	if (x == 1) {
		return cnt[0];
	}
	int ans = cnt[0] + cnt[1];
	int idx = upper( 0, n - 1, x);
	if (idx != -1) {
		ans += n - idx;
	}
	if (x == 2) {
		ans = ans - cnt[3] - cnt[4];
	}
	if (x == 3) {
		ans += cnt[2];
	}
	return ans;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		memset(cnt, 0, sizeof(cnt));
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int j = 0; j < m; j++) {
			cin >> a[j];
			if (a[j] <= 4) {
				cnt[a[j]]++;
			}
		}
		sort(a, a + m);
		long long ans = 0;
		for (int i = 0; i < n; i++) {
			ans += dem(m, arr[i]);
		}
		cout << ans << endl;
	}
}
