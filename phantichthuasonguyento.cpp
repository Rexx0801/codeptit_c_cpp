#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
    cin >> t;
    while (t--)
    {
        int t;
        long n;
        cin >> n;
        for (long i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                int demSoMu = 0;
                while (n % i == 0)
                {
                    n /= i;
                    demSoMu++;
                }
                cout << i << " " << demSoMu << " ";
            }
        }
        if (n > 1)
            cout << n << " " << 1;
        cout << endl;
    }
    return 0;
}
