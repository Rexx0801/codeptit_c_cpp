#include<iostream>
using namespace std;
int arr[25];
int ok = 1;
int n;
int add(int a, int b) {
	if (a == 1 && b == 1) {
		return 0;
	}
	if (a == 0 && b == 1) {
		return 1;
	}
	if (a == 1 && b == 0) {
		return 1;
	}
	if (a == 0 && b == 0) {
		return 0;
	}
}
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
		cin >> n;
		for (int i = 0; i < n; i++) {
			arr[i] = 0;
		}
		while (ok) {
			cout << arr[0];
			for (int i = 1; i < n; i++) {
				cout << add(arr[i - 1], arr[i]);
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}

