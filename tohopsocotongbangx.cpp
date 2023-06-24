#include <bits/stdc++.h>
using namespace std;
int n, s, a[50], b[50], ok;
void print(int len)
{
	ok = 1;
	cout << '[';
	for(int i = 1; i < len; i++)
		cout << b[i] << " ";
	cout << b[len] << "]";
}
void Try(int i, int sum, int curr)
{
	for(int j = curr; j <= n; j++)
	{
		if(sum + a[j] <= s)
		{
			b[i] = a[j];
			sum += a[j];
			if(sum == s)
				print(i);
			else if(sum < s)
				Try(i+1, sum, j);
			sum -= a[j];
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> s; ok = 0;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		Try(1, 0, 1);
		if(!ok) cout << -1;
		cout << endl;
	}
	return 0;
}
