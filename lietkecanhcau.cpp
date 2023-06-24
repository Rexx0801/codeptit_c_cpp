#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int maxn = 1001;
vector<int> adj[maxn];
int low[maxn], disc[maxn], n, m, timer;
vector<pair<int, int>> bridge;

void nhap(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(low, 0, sizeof(low));
	memset(disc, 0, sizeof(disc));
	timer = 0;
}

void dfs(int u, int p){
	disc[u] = low[u] = ++timer;
	for(int v : adj[u]){
		if(v == p) continue;
		if(!disc[v]){
			dfs(v, u);
			low[u] = min(low[u], low[v]);
			if(low[v] > disc[u]) bridge.push_back({min(u, v), max(u, v)});
		}
		else{
			low[u] = min(low[u], disc[v]);
		}
	}
}

void solve(){
	for(int i = 1; i <= n; i++){
		if(!disc[i]){
			dfs(i, -1);
		}
	}
	sort(begin(bridge), end(bridge), [](pair<int, int> a, pair<int,int> b)->bool{
		if(a.first != b.first) return a.first < b.first;
		return a.second < b.second;
	});
	for(auto it : bridge){
		cout << it.first << " " << it.second << ' ';
	}
	cout << endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T; cin >> T;
	while(T--){
		nhap();
		solve();
		for(int i = 1; i <= n; i++) adj[i].clear();
		bridge.clear();
	}
}
