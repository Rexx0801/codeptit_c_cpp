#include<iostream>
#include<algorithm>
using namespace std;
int arr[1000005];
int n;
int binary(int value) {
	int l = 0;
	int r = n - 1;
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
	return -1;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int k;
		cin >> n >> k;
		for (int i = 0; i < n; i++)cin >> arr[i];
		sort(arr, arr + n);
		cout << binary(k) << endl;
	}
}
