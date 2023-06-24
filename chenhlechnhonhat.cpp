#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int n;
int arr[100005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++)cin >> arr[i];
		sort(arr, arr + n);
		int ans = INT_MAX;
		for (int i = 0; i < n - 1; i++) {
			if (arr[i + 1] - arr[i] <= ans) {
				ans = arr[i + 1] - arr[i];
			}
		}
		cout << ans << endl;
	}
}
