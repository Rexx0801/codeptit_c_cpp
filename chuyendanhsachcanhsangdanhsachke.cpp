#include<iostream>
#include<vector>
using namespace std;
vector<int> adj[1005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
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
		for (int i = 1; i <= n; i++) {
			cout << i << ": ";
			for (auto a : adj[i]) {
				cout << a << " ";
			}
			cout << endl;
		}
	}
}
