#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1005];
int n, m;
int used[1005];
int parent[1005];
void dfs(int u) {
	used[u] = 1;
	for (auto a : adj[u]) {
		if (!used[a]) {
			parent[a] = u;
			dfs(a);
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int s, t;
		cin >> n >> m >> s >> t;
		memset(parent, -1, sizeof(parent));
		memset(used, 0, sizeof(used));
		for (int i = 1; i <= n; i++) {
			adj[i].clear();
		}
		for (int i = 0; i < m; i++) {
			int a, b;
			cin >> a >> b;
			adj[a].push_back(b);
		}
		dfs(s);
		if (parent[t] == -1) {
			cout << -1;
		}
		else {
			vector<int>ans;
			while (t != s) {
				ans.push_back(t);
				t = parent[t];
			}
			ans.push_back(s);
			reverse(ans.begin(), ans.end());
			for (auto a : ans) {
				cout << a << " ";
			}
		}
		cout << endl;
	}
}
