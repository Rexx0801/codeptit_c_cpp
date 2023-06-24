#include<iostream>
#include<vector>
using namespace std;
int arr[15];
int n;
int ok = 1;
void sinh() {
	int j = n - 2;
	while (arr[j] > arr[j + 1] && j >= 0) {
		j--;
	}
	if (j == -1) {
		ok = 0;
	}
	else {
		int k = n - 1;
		while (arr[k] < arr[j] && k >= 0) {
			k--;
		}
		swap(arr[j], arr[k]);
		int l = j + 1;
		int r = n - 1;
		while (l <= r) {
			swap(arr[l], arr[r]);
			l++;
			r--;
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		ok = 1;
		cin >> n;
		for (int i = 0; i < n; i++) {
			arr[i] = i + 1;
		}
		while (ok) {
			for (int i = 0; i < n; i++) {
				cout << arr[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
