#include<iostream>
using namespace std;
int a[100], cnt;
int n;
void khoitao() {
	cnt = 1;
	a[1] = n;
}
int ok = 1;
void sinh() {
	int i = cnt;
	while (i >= 1 && a[i] == 1) {
		i--;
	}
	if (i == 0) {
		ok = 0;
	}
	else {
		a[i]--;
		int d = cnt - i + 1;
		cnt = i;
		int q = d / a[i];
		int r = d % a[i];
		if (q) {
			for (int j = 1; j <= q; j++) {
				a[i + j] = a[i];
			}
			cnt += q;
		}
		if (r) {
			a[cnt + 1] = r;
			cnt++;
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		khoitao();
		ok = 1;
		while (ok) {
			cout << "(";
			for (int i = 1; i < cnt; i++) {
				cout << a[i] << " ";
			}
			cout << a[cnt] << ") ";
			sinh();
		}
		cout << endl;
	}
}
