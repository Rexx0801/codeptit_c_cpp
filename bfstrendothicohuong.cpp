#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;
vector<int> adj[1005];
int used[1005];
void bfs(int u) {
	queue<int>q;
	q.push(u);
	used[u] = 1;
	while (!q.empty()) {
		int tmp = q.front();
		cout << tmp << " ";
		q.pop();
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
		memset(used, 0, sizeof(used));
		int n, m, s;
		cin >> n >> m >> s;
		for (int i = 1; i <= n; i++) {
			adj[i].clear();
		}
		for (int i = 0; i < m; i++) {
			int a, b;
			cin >> a >> b;
			adj[a].push_back(b);
		}
		bfs(s);
		cout << endl;
	}
}
