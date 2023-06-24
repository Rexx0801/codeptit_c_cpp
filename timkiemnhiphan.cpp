#include<iostream>
using namespace std;
int arr[100005];
int n, k;
int binary(int l, int r, int value) {
	while (l <= r) {
		int mid = (l + r) / 2;
		if (arr[mid] == value) {
			return mid;
		}
		if (arr[mid] > value) {
			r = mid - 1;
		}
		else {
			l = mid + 1;
		}
	}
	return -1;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		if (binary(0, n - 1, k) == -1) {
			cout << "NO";
		}
		else {
			cout << binary(0, n - 1, k) + 1;
		}
		cout << endl;
	}
}
