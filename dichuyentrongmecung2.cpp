#include <bits/stdc++.h>
using namespace std;
int n, a[100][100], used[100][100], cnt = 0;
string path;
void inp()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			used[i][j] = 0; 
		}
	}
}
bool check(int x, int y)
{
	if(x >= 1 && x <= n && y >= 1 && y <= n && !used[x][y] && a[x][y]==1)
		return 1;
	return 0;
}
void Try(int x, int y)
{
	used[x][y] = 1;
	if(x == n && y == n)
	{
		cnt = 1;
		cout << path << " ";
	}
	else
	{
		if(check(x+1, y))
		{
			path.push_back('D');
			Try(x+1, y);
			path.erase(path.length()-1);
		}
		if(check(x, y-1))
		{
			path.push_back('L');
			Try(x, y-1);
			path.erase(path.length()-1);
		}
		if(check(x, y+1))
		{
			path.push_back('R');
			Try(x, y+1);
			path.erase(path.length()-1);
		}
		if(check(x-1, y))
		{
			path.push_back('U');
			Try(x-1, y);
			path.erase(path.length()-1);
		}
		
	}
	used[x][y] = 0;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		inp(); cnt = 0;
		if(a[1][1] == 0) cout << -1;
		else 
		{
			Try(1, 1);
			if(cnt == 0)
				cout << -1;
		}
		cout << endl;
	}
	return 0;
}
