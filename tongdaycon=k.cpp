#include<iostream>
#include<vector>
using namespace std;
int n;
int arr[25];
int ok=0;
int a[25];
void sinh() {
	int j = n - 1;
	while (arr[j] == 1 && j >= 0) {
		arr[j] = 0;
		j--;
	}
	if (j == -1) {
		ok = 1;
	}
	else {
		arr[j] = 1;
	}
}
int main() {
	int s;
	cin >> n>>s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		arr[i] = 0;
	}
	int cnt = 0;
	while (!ok) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i]) {
				sum += a[i];
			}
		}
		if (sum == s) {
			for (int i = 0; i < n; i++) {
				if (arr[i]) {
					cout << a[i] << " ";
				}
			}
			cnt++;
			cout << endl;
		}
		sinh();
	}
	cout << cnt;
}
