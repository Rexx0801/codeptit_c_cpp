#include<iostream>
using namespace std;
int arr[15];
void dequy(int n) {
	if (n == 1) {
		return;
	}
	for (int i = 0; i < n - 1; i++) {
		arr[i] = arr[i] + arr[i + 1];
	}
	cout << "[";
	for (int i = 0; i < n-2; i++) {
		cout << arr[i] << " ";
	}
	cout << arr[n - 2];
	cout << "]";
	cout << endl;
	dequy(n - 1);
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		cout << "[";
		for (int i = 0; i < n - 1; i++) {
			cout << arr[i] << " ";
		}
		cout << arr[n - 1];
		cout << "]";
		cout << endl;
		dequy(n);
	}
}
