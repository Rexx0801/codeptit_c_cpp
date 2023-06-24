#include <bits/stdc++.h>
using namespace std;
int n, k, c[1001];
void inp()
{
	cin >> n >> k;
	c[0] = 0;
	for(int i = 1; i <= k; i++)
	{
		cin >> c[i];
	}
}
void print()
{
	for(int i = 1; i <= k; i++)
		cout << c[i] << " ";
	cout << endl;
}
void sinhNguoc()
{
	int i = k;
	while(i > 0 && c[i]-c[i-1] == 1)
		i--;
	if(i==0)
	{
		for(int j = 1; j <= k; j++)
			c[j] = n-k+j;
	}
	else
	{
		c[i]--;
		for(int j = i+1; j <= k; j++)
			c[j] = n-k+j;
	}
	print();
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		inp();
		sinhNguoc();
	}
	return 0;
}
