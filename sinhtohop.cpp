#include<iostream>
using namespace std;
int arr[15];
int n, k;
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
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0; i < k; i++) {
			arr[i] = i + 1;
		}
		ok = 0;
		while (!ok) {
			for (int i = 0; i < k; i++) {
				cout << arr[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
