#include <bits/stdc++.h>
using namespace std;
int dp[905][8105];
int a, b;
void init()
{
    cin >> a >> b;
}
int minDigits(int x, int y)
{
    if (x > y || x < 0 || y < 0 || x > 100 || y > 8100)
        return -1;
    if (x == 0 && y == 0)
        return 0;
    if (dp[x][y] != -1)
        return dp[x][y];
    int ans = 101;
    for (int i = 9; i >= 1; i--)
    {
        int k = minDigits(x - i, y - (i * i));
        if (k != -1)
            ans = min(ans, k + 1);
    }
    return dp[x][y] = ans;
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    dp[0][0] = 0;
    int k = minDigits(a, b);
    if (k == -1 || k > 100)
        cout << "-1";
    else
    {
        while (a > 0 && b > 0)
            for (int i = 1; i <= 9; i++)
                if (a >= i && b >= i * i && 1 + dp[a - i][b - i * i] == dp[a][b])
                {
                    cout << i;
                    a -= i;
                    b -= i * i;
                    break;
                }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        solve();
    }
    return 0;
}
