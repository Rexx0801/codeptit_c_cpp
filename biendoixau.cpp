#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int dp[101][101];
string s1, s2;
void solve(){
	cin >> s1 >> s2;
	int n = s1.length(), m = s2.length();
	for(int i = 0; i <= n; i++)
		dp[i][0] = i;
	for(int j = 0; j <= m; j++)
		dp[0][j] = j;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(s1[i-1] == s2[j-1])
				dp[i][j] = dp[i-1][j-1];
			else{
				dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]})+1;
			}
		}
	}
	cout << dp[n][m] << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int test; cin >> test;
	while(test--){
		solve();
	}
	return 0;
}
