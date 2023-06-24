#include <bits/stdc++.h>
using namespace std;

int n;
string str, tmp;

void init()
{
    cin >> n;
    cin >> str;
}
void solve()
{
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'X')
            str[i] = '1';
        else if (str[i] == 'T')
            str[i] = '2';
        else
            str[i] = '3';
    }
    tmp = str;
    sort(str.begin(), str.end());
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == tmp[i])
        {
            cnt++;
            tmp[i] = 0;
        }
    }
    int res = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n; j > i; j--)
        {
            if (tmp[j] == str[i] && tmp[i] == str[j])
            {
                res++;
                tmp[i] = 0;
                tmp[j] = 0;
                cnt += 2;
            }
            if (cnt == n)
                break; 
        }
    }
    n -= cnt; 
    cout << res + (n / 3) * 2 << endl;
}
int main()
{
    init();
    solve();
    return 0;
}
