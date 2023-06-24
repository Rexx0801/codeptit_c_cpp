#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
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
	while (t--){
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			adj[i].clear();
		}
		for (int i = 0; i < m; i++) {
			int a, b;
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		int q;
		cin >> q;
		while (q--) {
			memset(parent, -1, sizeof(parent));
			memset(used, 0, sizeof(used));
			int a, b;
			cin >> a >> b;
			bfs(a);
			if (parent[b] != -1) {
				cout << "YES";
			}
			else {
				cout << "NO";
			}
			cout << endl;
		}
	}
}
