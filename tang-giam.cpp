#include <bits/stdc++.h>
#define ft first
#define sd second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
#define endl '\n'
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main(){
	int test; cin >> test;
	while(test--)
	{
		int n; cin >> n;
		double a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i] >> b[i];
		}
		int l[n], ans = 0;
		for(int i = 0; i < n; i++){
			l[i] = 1;
			for(int j = 0; j < i; j++){
				if(a[i] - a[j] > 0.0 && b[i] - b[j] < 0.0){
					l[i] = max(l[i], l[j]+1);
				}
			}
			ans = max(ans, l[i]);
		}
		cout << ans << endl;
	}
	return 0;
}
