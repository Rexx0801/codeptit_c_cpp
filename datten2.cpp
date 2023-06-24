#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = a; i < b; ++i)
int n, k;
vector<int> a;
void Init()
{
    a.resize(k + 1, 0);
    // FOR(i, 0, k+1) a[i] = 0;
}
void OutPut()
{
    char c = 'A' - 1;
    FOR(i, 1, k + 1)
    {
        cout << char(c + a[i]);
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n; ++j)
    {
        a[i] = j;
        if (i == k)
        {
            OutPut();
        }
        else
        {
            Try(i + 1);
        }
    }
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        Init();
        Try(1);
    }
}
