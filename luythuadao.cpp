#include<iostream>
using namespace std;
long long mod = 1e9 + 7;
long long mu(long long a, long long b) {
	if (b == 1) {
		return a % mod;
	}
	long long tmp = mu(a, b / 2);
	if (b % 2 == 0) {
		return tmp * tmp % mod;
	}
	else {
		return (tmp * tmp % mod) * a % mod;
	}
}
long long dao(long long a) {
	long long sum = 0;
	while (a) {
		sum = sum * 10 + a % 10;
		a /= 10;
	}
	return sum;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long a;
		cin >> a;
		cout << mu(a, dao(a)) << endl;
	}
}
