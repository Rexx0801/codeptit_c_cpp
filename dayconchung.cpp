#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		int a[n + 5], b[m + 5], c[k + 5];
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < m; i++) cin >> b[i];
		for (int i = 0; i < k; i++) cin >> c[i];
		int i = 0, j = 0, p = 0;
		vector<int> v;
		int check = 0;
		while (i < n && j < m && p < k) {
			if (a[i] == b[j] && b[j] == c[p]) {
				check = 1;
				cout << a[i] << " ";
				i++; j++; p++;
			}
			else if (a[i] <= b[j] && a[i] <= c[p]) {
				i++;
			}
			else if (b[j] <= a[i] && b[j] <= c[p]) {
				j++;
			}
			else {
				p++;
			}
		}
		if (!check) {
			cout << "NO";
		}
		cout << endl;
	}
}
