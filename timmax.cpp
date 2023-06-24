#include<iostream>
#include<algorithm>
using namespace std;
int arr[10000005];
int mod = 1e9 + 7;
int n;
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		long long ans = 0;
		for (int i = 0; i < n; i++) {
			ans = (ans % mod + i * arr[i] % mod) % mod;
		}
		cout << ans << endl;
	}
}
