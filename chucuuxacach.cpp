#include <bits/stdc++.h>
#define pii pair<int, int>
#define endl '\n'
using namespace std;
using ll = long long;
int n, k, m, tmp = 0;
int sheep[110][3];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int used[110][110], id[110][110];
map <pii, set<pii>> f;
void inp()
{
	cin >> n >> k >> m;
	for(int i = 1; i <= m; i++)
	{
		int x, y, z, t; cin >> x >> y >> z >> t;
		f[{x, y}].insert({z, t});
		f[{z, t}].insert({x, y});
	}
	for(int i = 1; i <= k; i++)
	{
		int x, y; cin >> x >> y;
		sheep[i][1] = x; sheep[i][2] = y;
		id[x][y] = 1;
	}
}
bool check(int prev_x, int prev_y, int new_x, int new_y)
{
	if(new_x > 0 && new_x <= n && new_y > 0 && new_y <= n)
	{
		if(f[{new_x, new_y}].find({prev_x, prev_y}) == f[{new_x, new_y}].end() && !used[new_x][new_y])
			return 1;
	}
	return 0;
}
void dfs(int x, int y)
{
	used[x][y] = 1;
	if(id[x][y] == 1) tmp++;
	for(int i = 0; i < 4; i++)
	{
		int x1 = x + dx[i], y1 = y + dy[i];
		if(check(x, y, x1, y1))
			dfs(x1, y1);
	}
}
void solve()
{
	int cnt = 0;
	for(int i = 1; i <= k; i++)
	{
		memset(used, 0, sizeof(used));
		tmp = 0;
		dfs(sheep[i][1], sheep[i][2]);
		cnt += k - tmp;
	}
	cout << cnt/2;
}
int main()
{
	int test; test = 1;
	while(test--)
	{
		inp();
		solve();
	}
	return 0;
}
