#include<iostream>
using namespace std;
int mod = 1000000007;
long long mu(int a, long long b) {
	if (b == 0) {
		return 1;
	}
	if (b % 2 == 0) {
		return (mu(a, b / 2) % mod * mu(a, b / 2) % mod) % mod;
	}
	else {
		return (a * mu(a, b / 2)%mod * mu(a, b / 2)%mod) % mod;
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << mu(a, b) << endl;
	}
}
