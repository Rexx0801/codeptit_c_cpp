#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int n;
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n; map<int, int> mp;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			mp[arr[i]]++;
		}
		int ans;
		int cnt = INT_MAX;
		int check = 0;
		for (auto v : mp) {
			if (v.second <= cnt && v.second > n / 2) {
				check = 1;
				cnt = v.second;
				ans = v.first;
			}
		}
		if (check) {
			cout << ans;
		}
		else {
			cout << "NO";
		}
		cout << endl;
	}
}
