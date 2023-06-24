#include <bits/stdc++.h>
#define ft first
#define sd second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
#define endl '\n'
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int n, m;
vector <pii> adj[101];
vector <int> d;
vector <vector <int>> SP;
void inp(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		adj[i].clear();
	for(int i = 0; i < m; i++){
		int x, y, z; cin >> x >> y >> z;
		adj[x].push_back({y, z});
		adj[y].push_back({x, z});
	}
}
void dijkstra(int s){
	d.clear();
	d.resize(n+1, INT_MAX);
	d[s] = 0;
	
	priority_queue <pii, vector <pii>, greater <pii>> q;
	q.push({0, s});
	while(!q.empty()){
		pii top = q.top(); q.pop();
		int u = top.sd;
		int kc = top.ft;
		if(kc > d[u]) continue;
		
		for(pii x : adj[u]){
			int v = x.ft;
			int w = x.sd;
			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				q.push({d[v], v});
			}
		}
	}
}
void solve(){
	for(int i = 1; i <= n; i++){
		dijkstra(i);
		SP.push_back(d);
	}
	int q; cin >> q;
	while(q--){
		int x, y; cin >> x >> y;
		cout << SP[x-1][y] << endl;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; test = 1;
	while(test--)
	{
		inp();
		solve();
	}
	return 0;
}
