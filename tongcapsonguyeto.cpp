#include<iostream>
#include<math.h>
using namespace std;
int ngto(int n) {
	if (n < 2) {
		return 0;
	}
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return 0;
			}
		}
		return 1;
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int check = 0;
		for (int i = 2; i <= n / 2; i++) {
			if (ngto(i) && ngto(n - i)) {
				cout << i << " " << n - i;
				check = 1;
				break;
			}
		}
		if (!check) {
			cout << -1;
		}
		cout << endl;
	}
}
