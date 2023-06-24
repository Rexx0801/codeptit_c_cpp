#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while(test--)
	{
		int n, m, l; cin >> n >> m >> l;
		string a, b, c; cin >> a >> b >> c;
		int dp[n+1][m+1][l+1];
		for(int i = 0; i <= n; i++)
		{
			for(int j = 0; j <= m; j++)
			{
				for(int k = 0; k <= l; k++)
				{
					if(i == 0 || j == 0 || k == 0)
						dp[i][j][k] = 0;
					else
					
						if(a[i-1] == b[j-1] && b[j-1] == c[k-1])
							dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
						else
							dp[i][j][k] = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
				}
			}
		}
		cout << dp[n][m][l] << '\n';
	}
	return 0;
}

