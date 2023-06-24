#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n, s, m; cin >> n >> s >> m;
		if((s - s/7)*n < s*m)
		{
			cout << -1 << endl;
		}
		else
		{
			if((s*m)%(n)){
				cout << (s*m)/(n)+1 << endl;
			}
			else 
				cout << (s*m)/(n) << endl;
		}
	}
	return 0;
}

