#include<iostream>
#include<vector>
using namespace std;
int n;
int maxfromend[100005];
int arr[100005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		maxfromend[n - 1] = arr[n - 1];
		for (int i = n - 2; i >= 0; i--) {
			maxfromend[i] = max(maxfromend[i + 1], arr[i]);
		}
		int res = 0;
		for (int i = 0; i < n; i++) {
			int l = i + 1;
			int r = n - 1;
			int ans = i;
			while (l <= r) {
				int mid = (l + r) / 2;
				if (arr[i] < maxfromend[mid]) {
					ans = max(ans,mid);
					l = mid + 1;
				}
				else {
					r = mid - 1;
				}
			}
			res = max(res, ans - i);
		}
		if (!res) {
			cout << -1 << endl;
		}
		else {
			cout << res << endl;
		}
	}
}
