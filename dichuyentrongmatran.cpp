#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int arr[1005][1005];
int used[1005][1005];
int n, m;
int check(int a, int b) {
	if (a >= 1 && a <= n && b >= 1 && b <= m) {
		return 1;
	}
	return 0;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		memset(used, 0, sizeof(used));
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> arr[i][j];
			}
		}
		queue<pair<pair<int, int>, int>>q;
		q.push({ {1,1},0 });
		used[1][1] = 1;
		int ans = INT_MAX;
		int kt = 0;
		while (!q.empty()) {
			auto a = q.front();
			q.pop();
			if (a.first.first == n && a.first.second == m) {
				kt = 1;
				ans = min(ans, a.second);
			}
			else {
				used[a.first.first][a.first.second] = 1;
				int x1 = a.first.first + arr[a.first.first][a.first.second];
				if (check(x1, a.first.second) && !used[x1][a.first.second]) {
					q.push({ {x1,a.first.second},a.second + 1 });
				}
				int y1 = a.first.second + arr[a.first.first][a.first.second];
				if (check(a.first.first, y1) && !used[a.first.first][y1]) {
					q.push({ {a.first.first,y1},a.second + 1 });
				}
			}
		}
		if (kt) {
			cout << ans << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
}
