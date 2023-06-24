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
bool dp[1001][1001];
int main()
{
	int test; cin >> test;
	while(test--)
	{
		string s; cin >> s;
		int maxlen = 1, n = s.length();
		memset(dp, 0, n*n);
		for(int j = 0; j < n; j++){
			for(int i = 0; i <= j; i++){
				if(s[i] == s[j]){
					dp[i][j] = dp[i+1][j-1];
					if(dp[i][j] == 0){
						maxlen = max(maxlen, j-i+1);
					}
				}
					
					
				else dp[i][j] = 1;
			}
		}
		cout << maxlen << endl;
	}
	return 0;
}
