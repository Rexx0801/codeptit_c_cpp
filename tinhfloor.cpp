#include<iostream>
#include<algorithm>
using namespace std;
int arr[1000000];
int n;
int binary(int l, int r, int value) {
	int ans = -1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (arr[mid] <= value) {
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
		int x;
		cin >> n >> x;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		if (binary(0, n - 1, x) == -1) {
			cout << -1 << endl;
		}
		else {
			cout << binary(0, n - 1, x) + 1 << endl;
		}
	}
}
