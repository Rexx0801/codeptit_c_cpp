#include<iostream>
using namespace std;
int n, k;
int arr[15];
int a[15];
int ok = 1;
int check() {
	for (int i = 0; i < k; i++) {
		if (arr[i] != a[i]) {
			return 0;
		}
	}
	return 1;
}
void sinh() {
	int j = k - 1;
	int i = 0;
	while (arr[j] == n - i&&j>=0) {
		j--;
		i++;
	}
	if (j == -1) {
		ok = 0;
	}
	else {
		arr[j] += 1;
		int x = arr[j] + 1;
		for (int i = j + 1; i < k; i++) {
			arr[i] = x;
			x++;
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		ok = 1;
		cin >> n >> k;
		for (int i = 0; i < k; i++) {
			arr[i] = i + 1;
			cin >> a[i];
		}
		int cnt = 0;
		while (ok) {
			cnt++;
			if (check()) {
				cout << cnt;
				cout << endl;
				break;
			}
			sinh();
		}
	}
}
