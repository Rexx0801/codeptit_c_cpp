#include<iostream>
#include<algorithm>
using namespace std;
int n, s;
int arr[15];
int ans[15];
int check = 0;
void dequy(int j, int sum, int cnt) {
	if (sum == s) {
		check = 1;
		cout << "[";
		for (int i = 0; i < cnt-1; i++) {
			cout << ans[i] << " ";
		}
		cout << ans[cnt - 1] << "]";
		cout << " ";
	}
	else {
		for (int i = j; i < n; i++) {
			if (sum + arr[i] <= s) {
				ans[cnt] = arr[i];
				dequy(i + 1, sum + arr[i], cnt+1);
			}
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		check = 0;
		cin >> n >> s;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		dequy(0, 0, 0);
		if (!check) {
			cout << -1;
		}
		cout << endl;
	}
}
