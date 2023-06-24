#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int arr[45];
		int x[45];
		memset(x, 0, sizeof(x));
		int a[45];
		for (int i = 0; i < k; i++)cin >> arr[i];
		int j = k - 1;
		int i = 0;
		while (arr[j] == n - i && j >= 0) {
			j--;
			i++;
		}
		if (j == -1) {
			cout << k;
		}
		else {
			for (int i = 0; i < j; i++) {
				a[i] = arr[i];
			}
			a[j] = arr[j] + 1;
			int tmp = a[j] + 1;
			for (int i = j + 1; i < k; i++) {
				a[i] = tmp;
				tmp++;
			}
			for (int i = 0; i < k; i++) {
				x[arr[i]] = 1;
			}
			int ans = 0;
			for (int i = 0; i < k; i++) {
				if (!x[a[i]]) {
					ans++;
				}
			}
			cout << ans;
		}
		cout << endl;
	}
}
