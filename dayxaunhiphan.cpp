#include<iostream>
using namespace std;
long long f[100];
int find(int n, long long k) {
	if (n == 1) {
		return 0;
	}
	if (n == 2) {
		return 1;
	}
	if (k > f[n - 2]) {
		return find(n - 1, k - f[n - 2]);
	}
	else {
		return find(n - 2, k);
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		long long k;
		cin >> n >> k;
		f[1] = 1;
		f[2] = 1;
		for (int i = 3; i <= n; i++) {
			f[i] = f[i - 1] + f[i - 2];
		}
		cout << find(n, k) << endl;
	}
}
