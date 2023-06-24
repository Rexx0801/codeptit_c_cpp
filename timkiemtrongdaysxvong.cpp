#include<iostream>
using namespace std;
int arr[10000005];
int n, k;
int bianry(int l, int r, int value) {
	while (l <= r) {
		int mid = (l + r) / 2;
		if (arr[mid] == value) {
			return mid;
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
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0; i < n; i++)cin >> arr[i];
		int idx;
		int check = 0;
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				check = 1;
				idx = i;
				break;
			}
		}
		if (check) {
			if (bianry(0, idx, k)) {
				cout << bianry(0, idx, k) + 1;
			}
			else {
				cout << bianry(idx + 1, n - 1, k) + 1;
			}
		}
		else {
			cout << bianry(0, n - 1, k) + 1;
		}
		cout << endl;
	}
}
