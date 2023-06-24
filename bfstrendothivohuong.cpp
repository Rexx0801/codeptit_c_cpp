#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
int used[1005];
vector<int>adj[1005];
int n, m, s;
void bfs(int u) {
	queue<int> q;
	q.push(u);
	used[u] = 1;
	while (!q.empty()) {
		auto tmp = q.front();
		q.pop();
		cout << tmp << " ";
		for (auto a : adj[tmp]) {
			if (!used[a]) {
				used[a] = 1;
				q.push(a);
			}
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
		bfs(s);
		cout << endl;
	}
}
