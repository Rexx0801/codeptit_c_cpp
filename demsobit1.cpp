#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector <ll> v;
void init(ll &n, ll &l, ll &r)
{
	cin >> n >> l >> r;
	v.clear();
	ll i = 2;
	while(i < n)
	{
		v.push_back(i);
		i *= 2;
	}
}
ll Transform(ll i, ll n, ll pos)
{				
	if(i%2 == 1) return 1;
	if(i == v[pos]) return n%2;
	else if(i < v[pos]) return Transform(i, n/2, pos-1);
	return Transform(2*v[pos]-i, n/2, pos-1);
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--)
	{
		long long n, l, r;
		init(n, l, r);
		ll sum = 0;
		for(ll i = l; i <= r; i++)
		{
			sum += Transform(i, n, v.size()-1);
		}
		cout << sum << endl;
	}
	return 0;
}
