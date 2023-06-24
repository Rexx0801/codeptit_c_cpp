#include <bits/stdc++.h>
#define endl '\n'
#define toint(a) (int) a - '0'
using namespace std;
using pii = pair<int, int>;
using ll = long long;
int n, a[16][16], id[16], cmin = 1e9, mark[16], cost, ans;
void inp()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			if(a[i][j] != 0)
				cmin = min(a[i][j], cmin);
		}
	}
	cost = 0; ans = INT_MAX;
}
void Try(int i)
{
	for(int j = 2; j <= n; j++)
	{
		if(!mark[j])
		{
			id[i] = j;
			mark[j] = 1;
			cost += a[id[i-1]][j];
			if(i == n)
			{
				if(cost + a[j][1] < ans)
					ans = cost + a[j][1];
			}
			else if(cost + (n-i+1)*cmin < ans)
				Try(i+1);
			cost -= a[id[i-1]][j];
			mark[j] = 0;
		}
	}
}
int main()
{
	int test; test = 1;
	while(test--)
	{
		inp();
		id[1] = 1;
		Try(2);
		cout << ans;
	}
	return 0;
}
