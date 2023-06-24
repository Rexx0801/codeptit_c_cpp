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
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		int n, k; cin >> n >> k;
		int dp[n+1]; dp[0] = 1; dp[1] = 1;
		for(int i = 2; i <= n; i++){
			dp[i] = 0;
			for(int j = i-1; j >= max(i-k, 0); j--){
				dp[i] = (dp[i] + dp[j]) % MOD;
			}
		}
		cout << dp[n] << endl;
	}
	return 0;
}
