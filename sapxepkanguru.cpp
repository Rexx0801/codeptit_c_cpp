#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n, greater <int>());
		int l = 0, r = n/2;
		int cnt = 0;
		while(l < n/2 && r < n)
		{
			if(a[l] >= 2*a[r])
			{
				l++; r++; cnt++;
			}
			else r++;
		}
		cout << n - cnt << endl;
	}
	return 0;
}

