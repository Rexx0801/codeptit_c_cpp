#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;
struct work{
	int id, dl, pro;
};
bool cmp(work a, work b)
{
	return a.pro > b.pro;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int test; cin >> test;
	while(test--)
	{
		int n; cin >> n;
		work ds[n];
		for(int i = 0; i < n; i++)
		{
			cin >> ds[i].id >> ds[i].dl >> ds[i].pro;
		}
		sort(ds, ds+n, cmp);
		int used[1001] = {0};
		int cnt = 0, sum = 0;
		for(int i = 0; i < n; i++)
		{
			while(used[ds[i].dl] && ds[i].dl > 0) ds[i].dl--;
			if(!used[ds[i].dl] && ds[i].dl > 0)
			{
				used[ds[i].dl] = 1;
				sum += ds[i].pro;
				cnt++;
			}
		}
		cout << cnt << " " << sum << endl;
	}
	return 0;
}

