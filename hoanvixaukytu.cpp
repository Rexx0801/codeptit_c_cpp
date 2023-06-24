#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
char arr[15];
int ok = 1;
string s;
void sinh() {
	int j = s.size() - 2;
	while (arr[j] > arr[j + 1] && j >= 0) {
		j--;
	}
	if (j == -1) {
		ok = 0;
	}
	else {
		int k = s.size() - 1;
		while (arr[k] < arr[j]) {
			k--;
		}
		swap(arr[j], arr[k]);
		int l = j + 1;
		int r = s.size() - 1;
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
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			arr[i] = s[i];
		}
		sort(arr, arr + s.size());
		while (ok) {
			for (int i = 0; i < s.size(); i++) {
				cout << arr[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
