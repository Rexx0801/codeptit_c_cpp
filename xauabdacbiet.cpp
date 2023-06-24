#include<iostream>
#include<vector>
using namespace std;
int arr[20];
//function exmine that whatever array save K 0 element continuly
int n,k;
int ok = 0;
int check() {
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			ans++;
		}
		else {
			if (ans == k) {
				return 1;
			}
			ans = 0;
		}
	}
	if (ans == k) {
		return 1;
	}
	return 0;
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
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		arr[i] = 0;
	}
	vector<string> v;
	while (!ok) {
		if (check()) {
			string tmp = "";
			for (int i = 0; i < n; i++) {
				if (arr[i] == 0) {
					tmp += 'A';
				}
				else {
					tmp += 'B';
				}
			}
			v.push_back(tmp);
		}
		sinh();
	}
	cout << v.size() << endl;
	for (auto a : v) {
		cout << a << endl;
	}
}
