#include<iostream>
#include<vector>
using namespace std;
int a[25];//gia tri cua vat
int c[25];//the tich cua vat
int n;
int s;
int arr[25];
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
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		arr[i] = 0;
	}//gia tri
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}//the tich
	int fopt = 0;
	vector<int> ans;
	while (ok) {
		int sum = 0;
		int res = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i]) {
				sum += c[i];
				res += a[i];
			}
		}
		if (sum <= s) {
			if (res >= fopt) {
				fopt = res;
				ans.clear();
				for (int i = 0; i < n; i++) {
					ans.push_back(arr[i]);
				}
			}
		}
		sinh();
	}
	cout << fopt << endl;
	for (auto a : ans) {
		cout << a << " ";
	}
}
