#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int n, s, ans = 1e9, a[10000];
void Try(int i, int M, int x)
{
	if(M > s || x > ans) return;
	if(i == n)
	{
		if(M == s) ans = min(ans, x);
		return;
	}
	Try(i+1, M, x);
	Try(i+1, M+a[i], x+1);
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> s;
		ans = 1e9;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		Try(1, 0, 0);
		if(ans == 1e9) cout << -1 << endl;
		else cout << ans << endl;
	}
	return 0;
}
