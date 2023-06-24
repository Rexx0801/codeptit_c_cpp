#include <bits/stdc++.h>
using namespace std;
int a[1005], n, k, dp[1005][1005];
void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i], a[i] %= k;
    for (int i = 1; i < k; i++)
        dp[0][i] = -1e9;
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < k; j++)
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j - a[i] + k) % k] + 1);
    cout << dp[n][0] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
