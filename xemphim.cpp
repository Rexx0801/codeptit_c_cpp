#include <bits/stdc++.h>
using namespace std;
int main()
{
	int dp[26000] = {0}, c, n, a[100],maxi=0;
	cin >> c >> n;
	for (int i = 0; i < n; ++i)	cin >> a[i];
	for (int i = 0; i < n; ++i){
		dp[a[i]] = 1;
		for (int j = c; j > a[i]; --j)if (dp[j - a[i]]&&j!=2*j-2*a[i]) {
			dp[j]=1;
			maxi = max(max(j,j-a[i]),maxi);
		}
	}
	cout<<maxi;
}

