#include<iostream>
using namespace std;
int n, m, k;
int a[1000005];
int b[1000005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m >> k;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}
		int cnt = 0;
		int i = 0;
		int j = 0;
		while (i < n && j < m) {
			if (a[i] < b[j]) {
				cnt++;
				if (cnt == k) {
					cout << a[i];
					break;
				}
				i++;
			}
			else {
				cnt++;
				if (cnt == k) {
					cout << b[j];
					break;
				}
				j++;
			}
		}
		if (cnt != k) {
			for (int j = i; j < n; j++) {
				cnt++;
				if (cnt == k) {
					cout << a[j];
					break;
				}
			}
			for (int i = j; i < m; i++) {
				cnt++;
				if (cnt == k) {
					cout << b[i];
					break;
				}
			}
		}
		cout << endl;
	}
}
