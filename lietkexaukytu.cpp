#include <bits/stdc++.h>
using namespace std;
using ll = long long;
char x, a[20]; int k;
void print()
{
	for(int i = 1; i <= k; i++)
		cout << a[i];
	cout << endl;
}
void Try(int i)
{
	for(char j = a[i-1]; j <= x; j++)
	{
		a[i] = j;
		if(i == k)
			print();
		else Try(i+1);
	}
}
int main()
{
	int t; t = 1;
	while(t--)
	{
		memset(a, 'A', sizeof(a));
		cin >> x >> k;
		Try(1);
	}
	return 0;
}

