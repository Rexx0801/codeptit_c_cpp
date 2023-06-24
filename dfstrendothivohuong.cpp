#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int used[1005];
vector<int>adj[1005];
int n, m, s;
void dfs(int u) {
	used[u] = 1;
	cout << u << " ";
	for (auto a : adj[u]) {
		if (!used[a]) {
			dfs(a);
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m >> s;
		for (int i = 1; i <= n; i++) {
			adj[i].clear();
		}
		memset(used, 0, sizeof(used));
		for (int i = 0; i < m; i++) {
			int a, b;
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		dfs(s);
		cout << endl;
	}
}
