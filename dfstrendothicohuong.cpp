#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
vector<int> adj[1005];
int used[1005];
void dfs(int u) {
	cout << u << " ";
	used[u] = 1;
	for (auto v : adj[u]) {
		if (!used[v]) {
			dfs(v);
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		memset(used, 0, sizeof(used));
		int n, m, u;
		cin >> n >> m >> u;
		for (int i = 1; i <= n; i++) {
			adj[i].clear();
		}
		for (int i = 0; i < m; i++) {
			int a, b;
			cin >> a >> b;
			adj[a].push_back(b);
		}
		dfs(u);
		cout << endl;
	}
}
