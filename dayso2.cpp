#include<iostream>
using namespace std;
int arr[15][15];
int n;
void dequy(int n) {
	if (n == 0) {
		return;
	}
	for (int i = 0; i < n - 1; i++) {
		arr[n - 1][i] = arr[n][i] + arr[n][i + 1];
	}
	dequy(n - 1);
	cout << "[";
	for (int i = 0; i < n-1; i++) {
		cout << arr[n][i] << " ";
	}
	cout << arr[n][n - 1] << "]";
	cout << " ";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[n][i];
		}
		dequy(n);
		cout << endl;
	}
}
