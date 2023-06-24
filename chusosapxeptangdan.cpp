#include <bits/stdc++.h>
#define maxn 1000001
#define endl '\n'
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int dp[101][101], cnt[101];
int main()
{
	for(int k = 0; k <= 100; k++)
	{
		dp[0][k] = 0;
		dp[k][0] = 1;
	}
	
	for(int i = 1; i <= 100; i++)
	{
		cnt[i] = 1;
		for(int j = 1; j <= 9; j++)
		{
			dp[i][j] = 0;
			for(int k = j; k >= 0; k--)
				dp[i][j] = (dp[i][j] + dp[i-1][k])%MOD;
			cnt[i] = (cnt[i] + dp[i][j])%MOD;
		}
	}
	int test; cin >> test;
	while(test--)
	{
		int n; cin >> n;
		cout << cnt[n] << endl;
	}
	return 0;
}
