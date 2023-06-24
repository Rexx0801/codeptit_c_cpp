#include<iostream>
#include<algorithm>
using namespace std;
int arr[25];
int a[25];
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
		while (arr[k] < arr[j]) {
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
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		arr[i] = i + 1;
	}
	sort(a, a + n);
	while (ok) {
		for (int i = 0; i < n; i++) {
			cout << a[arr[i]-1] << " ";
		}
		cout << endl;
		sinh();
	}
}
