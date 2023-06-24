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
		cin >> n;
		for (int i = 0; i < n; i++) {
			arr[i] = 0;
		}
		while (ok) {
			for (int i = 0; i < n; i++) {
				if (!arr[i]) {
					cout << "A";
				}
				else {
					cout << "B";
				}
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
