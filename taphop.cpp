#include<iostream>
using namespace std;
int arr[25];
int n, k, s;
int ok;
void sinh() {
	int j = k - 1;
	int i = 0;
	while (j >= 0 && arr[j] == n - i) {
		j--;
		i++;
	}
	if (j == -1) {
		ok = 1;
	}
	else {
		arr[j] += 1;
		int tmp = arr[j];
		for (int idx = j + 1; idx < k; idx++) {
			arr[idx] = tmp + 1;
			tmp++;
		}
	}
}
int main() {
	while (1) {
		ok = 0;
		cin >> n >> k >> s;
		if (n == 0 && k == 0 && s == 0) {
			break;
		}
		if (k > n) {
			cout << 0 << endl;
		}
		else {
			for (int i = 0; i < k; i++) {
				arr[i] = i + 1;
			}
			int ans = 0;
			while (!ok) {
				int sum = 0;
				for (int i = 0; i < k; i++) {
					sum += arr[i];
				}
				if (sum == s) {
					ans++;
				}
				sinh();
			}
			cout << ans << endl;
		}
	}
}
