#include<iostream>
#include<vector>
using namespace std;
int n;
int arr[25];
int ok=0;
int check() {
	vector<int>a;
	for (int i = n - 1; i >= 0; i--) {
		a.push_back(arr[i]);
	}
	for (int i = 0; i < n; i++) {
		if (a[i] != arr[i]) {
			return 0;
		}
	}
	return 1;
}
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
	cin >> n;
	for (int i = 0; i < n; i++) {
		arr[i] = 0;
	}
	while (!ok) {
		if (check()) {
			for (int i = 0; i < n; i++) {
				cout << arr[i] << " ";
			}
			cout << endl;
		}
		sinh();
	}
}
