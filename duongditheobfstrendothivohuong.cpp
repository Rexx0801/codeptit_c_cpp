#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int n, m, s, t;
vector <int> adj[1001];
bool used[1001];
int parent[1001];
void inp()
{
	cin >> n >> m >> s >> t;
	for(int i = 1; i <= n; i++)
		adj[i].clear();
	for(int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(used, 0, sizeof(used));
}
void bfs(int u)
{
	used[u] = 1;
	queue <int> q;
	q.push(u);
	while(!q.empty())
	{
		int v = q.front(); q.pop();
		for(int x : adj[v])
		{
			if(!used[x])
			{
				used[x] = 1;
				parent[x] = v;
				q.push(x);
			}
		}
	}
}
void Path()
{
	bfs(s);
	if(!used[t])
		cout << -1 << endl;
	else
	{
		vector <int> path;
		while(s != t)
		{
			path.push_back(t);
			t = parent[t];
		}
		path.push_back(t);
		reverse(path.begin(), path.end());
		for(int x : path)
			cout << x << " ";
		cout << endl;
	}
}
int main()
{
	int test; cin >> test;
	while(test--)
	{
		inp();
		Path();
	}
	return 0;
}
