#include<iostream>
using namespace std;
int n;
int ok = 1;
int arr[25];
void sinh() {
	int j = n - 1;
	while (arr[j] == 8 && j >= 0) {
		arr[j] = 6;
		j--;
	}
	if (j == -1) {
		ok = 0;
	}
	else {
		arr[j] = 8;
	}
}
int check() {
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] == 8 && arr[i + 1] == 8) {
			return 0;
		}
	}
	return 1;
}
int check1() {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (cnt > 3) {
			return 0;
		}
		if (arr[i] == 6) {
			cnt++;
		}
		else {
			cnt = 0;
		}
	}
	if (cnt > 3) {
		return 0;
	}
	return 1;
}
int main() {
	ok = 1;
	cin >> n;
	if (n >= 6) {
		for (int i = 0; i < n; i++) {
			arr[i] = 6;
		}
		while (ok) {
			if (arr[0] == 8 && arr[n - 1] == 6) {
				if (check() && check1()) {
					for (int i = 0; i < n; i++) {
						cout << arr[i];
					}
					cout << endl;
				}
			}
			sinh();
		}
	}
}
