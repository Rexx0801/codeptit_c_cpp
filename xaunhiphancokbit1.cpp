#include<iostream>
using namespace std;
int arr[25];
int n;
int ok = 1;
void sinh() {
	int j = n - 1;
	while (arr[j] == 1 && j >= 0) {
		arr[j] = 0;
		j--;
	}
	if (j == -1) {
		ok = 0;
	}
	else {
		arr[j] = 1;
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		ok = 1;
		int k;
		cin >> n>>k;
		for (int i = 0; i < n; i++) {
			arr[i] = 0;
		}
		while (ok) {
			int cnt = 0;
			for (int i = 0; i < n; i++) {
				if (arr[i]) {
					cnt++;
				}
			}
			if (cnt == k) {
				for (int i = 0; i< n; i++) {
					cout << arr[i];
				}
				cout << endl;
			}
			sinh();
		}
	}
}
