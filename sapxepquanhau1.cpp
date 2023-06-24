#include<iostream>
using namespace std;
int a[100];
int xuoi[100];
int nguoc[100];
int n;
int ans;
void inp() {
	cin >> n;
	for (int i = 1; i < 100; i++) {
		a[i] = 1;
		xuoi[i] = 1;
		nguoc[i] = 1;
	}
	ans = 0;
}
void dequy(int i) {
	for (int j = 1; j <= n; j++) {
		if (a[j] && xuoi[i - j + n] && nguoc[i + j - 1]) {
			a[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0;
			if (i == n) ++ans;
			else dequy(i + 1);
			a[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 1;
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		inp();
		dequy(1);
		cout << ans << endl;
	}
}
