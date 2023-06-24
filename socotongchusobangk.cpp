#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int n, k, dp[101][50001];
int main()
{
	for(int j = 0; j <= 50000; j++)
		dp[0][j] = 0;
	for(int i = 1; i <= 100; i++)
		dp[i][0] = 0;
	for(int j = 1; j <= 9; j++)
		dp[1][j] = 1;
	for(int i = 1; i <= 100; i++)
	{
		for(int s = 0; s <= 9; s++)
		{
			for(int j = s; j <= 50000; j++)
				dp[i][j] = (dp[i][j] + dp[i-1][j-s])%MOD;
		}
	}
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		cout << dp[n][k] << endl;
	}
	return 0;
}
