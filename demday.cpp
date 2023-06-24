#include <bits/stdc++.h>
using namespace std;
const int mod = 123456789;
using ll = long long;
ll powerMod(ll n, ll k)
{
	if(k == 0)
		return 1;
	if(k == 1)
		return n%mod;
	ll x = powerMod(n, k/2);
	if(k%2==0)
		return (x*x)%mod;
	else return ((x*x)%mod*n)%mod;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		ll n, k; cin >> k;
		n = 2;
		cout << powerMod(n, k-1) << endl;
	}
	
	return 0;
}

