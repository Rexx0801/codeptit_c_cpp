#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[1005];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int j = n - 2;
		while (arr[j] > arr[j + 1] && j >= 0) {
			j--;
		}
		if (j != -1) {
			int k = n - 1;
			while (k >= 0 && arr[k] < arr[j]) {
				k--;
			}
			swap(arr[j], arr[k]);
			int l = j + 1;
			int r = n - 1;
			while (l <= r) {
				swap(arr[l], arr[r]);
				l++;
				r--;
			}
			for (int i = 0; i < n; i++) {
				cout << arr[i] << " ";
			}
		}
		else {
			for (int i = 1; i <= n; i++) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
