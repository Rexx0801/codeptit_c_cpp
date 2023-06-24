#include<iostream>
using namespace std;
int arr[1005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int ans = 0;
		for (int i = 0; i < n - 1; i++) {
			int minn = i;
			for (int j = i; j < n; j++) {
				if (arr[j] < arr[minn]) {
					minn = j;
				}
			}
			if (minn != i) {
				swap(arr[i], arr[minn]);
				ans++;
			}
		}
		cout << ans << endl;
	}
}
