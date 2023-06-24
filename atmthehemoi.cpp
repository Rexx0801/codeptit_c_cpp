#include <bits/stdc++.h>
using namespace std;
long long w, res, cnt;
int c;
void init()
{
    cin >> w >> c;
}
void solve()
{
    if (w % 1000 != 0)
        cout << "0" << endl;
    else
    {
        res = 0, cnt = 1;
        w /= 1000;
        int dem = 0, prev = 0;
        while (w > 0)
        {
            if (dem <= c)
            {
                int tmp = w % 10;
                if (tmp == 1 || tmp == 2 || tmp == 3 || tmp == 5)
                    res += 1; 
                else if (tmp == 4 || tmp == 6)
                {
                    res += 2;
                    cnt *= 2;
                }
                else if (tmp == 7 || tmp == 8)
                    res += 2;
                else if (tmp == 9)
                {
                    res += 3;
                    cnt *= 3;
                }
                prev = tmp;
            }
            else if (dem == c + 1)
            {
                if (prev != 1 && prev != 4)
                {
                    res += w * 2;
                }
                else if (prev == 1)
                {
                    cnt *= 2;
                    res += w * 2;
                }
                else if (prev == 4)
                {
                    cnt /= 2;
                    cnt *= 3;
                    res += w * 2;
                }
                break;
            }
            dem++;
            w /= 10;
        }
        cout << res << " " << cnt << endl;
    }
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
