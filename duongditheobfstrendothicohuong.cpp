#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1005];
int n, m;
int used[1005];
int parent[1005];
void bfs(int u) {
	queue<int>q;
	q.push(u);
	used[u] = 1;
	while (!q.empty()) {
		int tmp = q.front();
		q.pop();
		for (auto a : adj[tmp]) {
			if (!used[a]) {
				q.push(a);
				parent[a] = tmp;
				used[a] = 1;
			}
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
		bfs(s);
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
