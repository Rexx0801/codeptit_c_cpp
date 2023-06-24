#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
int n;
int mu(int a) {
	if (a == 0) {
		return 1;
	}
	else {
		if (a % 2 == 0) {
			return mu(a / 2) * mu(a / 2);
		}
		else {
			return 2 * mu(a / 2) * mu(a / 2);
		}
	}
}
int check(string s) {
	reverse(s.begin(), s.end());
	int ans = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1') {
			ans += mu(i);
		}
	}
	if (ans == n) {
		return 1;
	}
	return 0;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		queue<string>q;
		q.push("1");
		while (!q.empty()) {
			string tmp = q.front();
			q.pop();
			cout << tmp << " ";
			if (check(tmp)) {
				break;
			}
			q.push(tmp + "0");
			q.push(tmp + "1");
		}
		cout << endl;
	}
}
