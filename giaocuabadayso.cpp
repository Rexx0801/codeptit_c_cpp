#include<iostream>
using namespace std;
long long a[1000005];
long long b[1000005];
long long c[1000005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		for (int i = 0; i < n; i++)cin >> a[i];
		for (int i = 0; i < m; i++)cin >> b[i];
		for (int i = 0; i < k; i++)cin >> c[i];
		int i = 0;
		int j = 0;
		int h = 0;
		int check = 0;
		while (i < n && j < m && h < k) {
			if (a[i] == b[j] && b[j] == c[h]) {
				cout << a[i] << " ";
				i++;
				j++;
				h++;
				check = 1;
			}
			else {
				if (a[i] <= b[j] && a[i] <= c[h]) {
					i++;
				}
				else {
					if (b[j] <= a[i] && b[j] <= c[h]) {
						j++;
					}
					else {
						h++;
					}
				}
			}
		}
		if (!check) {
			cout << -1;
		}
		cout << endl;
	}
}
