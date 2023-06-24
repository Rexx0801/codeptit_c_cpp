#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, m;
vector <int> adj[1001];
int color[1001];
void inp()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		adj[i].clear();
	for(int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(color, -1, sizeof(color));
}
bool bfs(int u)
{
	color[u] = 0;
	queue <int> q;
	q.push(u);
	while(!q.empty())
	{
		int v = q.front(); q.pop();
		for(int x : adj[v])
		{
			if(color[x] == -1)
			{
				color[x] = 1 - color[v];
				q.push(x);
			}
			else if(color[x] == color[v])
				return 0;
		}
	}
	return 1;
}
void solve()
{
	int ok = 1;
	for(int i = 1; i <= n; i++)
	{
		if(color[i] == -1)
		{
			if(bfs(i) == 0)
			{
				ok = 0;
				break;
			}
		}
	}
	if(ok) cout <<"YES\n";
	else cout << "NO\n";
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		inp();
		solve();	
	}
	return 0;
}
