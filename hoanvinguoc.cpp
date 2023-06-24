#include <bits/stdc++.h>
using namespace std;
#define FORx(i, a, b) for (int i = a; i < b; ++i)
void OutPut(int a[], int n)
{
    FORx(i, 1, n + 1) cout << a[i];
    cout << " ";
}
void Gen(int a[], int n, bool &ok)
{
    int k = n - 1;
    while (k > 0 && a[k] < a[k + 1])
        k--;
    if (k == 0)
        ok = !ok;
    else
    {
        int j = n;
        while(j>k && a[j] > a[k]) j--;
        swap(a[j], a[k]);
        int r = n, l = k+1;
        while(r >= l) {
            swap(a[r--], a[l++]);
        }
    }
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1], d=n;
        bool ok = true;
        FORx(i, 1, n+1) a[i] = d--;
        while (ok)
        {
            OutPut(a, n);
            Gen(a, n, ok);
        }
        cout << endl;
    }
}
